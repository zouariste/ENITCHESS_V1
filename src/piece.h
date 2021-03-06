#ifndef CLASSPIECE_H_INCLUDED
#define CLASSPIECE_H_INCLUDED

#include "utils.h"
#include "chessboard.h"

int piece::verifami (coord dest,chessboard E)
{
    if (E.verifpiece(dest))
    {
        if (this->joueur == (E.getpiece(dest))->joueur) return (1); else return (0);
    }
    else return (0);
}

int piece::verifennemi(coord dest,chessboard E)
{
    if (E.verifpiece(dest))
    {
        if (this->joueur != E.getpiece(dest)->joueur) return (1); else return (0);
    }
    else return (0);
}

void reine::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    int x,y;
    coord pos;
    x=1,y=1;
    this->possibilites.~liste();
    while (1)
    {
        pos.x=i+x;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1,y=1;
    while (1)
    {
        pos.x=i-x;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1,y=1;
    while (1)
    {

        pos.x=i+x;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;


    }
    x=1,y=1;
    while (1)
    {
        pos.x=i-x;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1;
    while (1)
    {

        pos.x=i+x;pos.y=j;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1;
    while (1)
    {

        pos.x=i-x;pos.y=j;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    y=1;
    while (1)
    {

        pos.x=i;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    y=1;
    while (1)
    {
        pos.x=i;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
}

void fou::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    int x,y;
    coord pos;
    x=1,y=1;
    this->possibilites.~liste();
    while (1)
    {
        pos.x=i+x;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1,y=1;
    while (1)
    {
        pos.x=i-x;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1,y=1;
    while (1)
    {

        pos.x=i+x;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;


    }
    x=1,y=1;
    while (1)
    {

        pos.x=i-x;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
}

void tour::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    int x,y;
    coord pos;
    x=1,y=1;
    this->possibilites.~liste();
    while (1)
    {

        pos.x=i+x;pos.y=j;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    x=1;
    while (1)
    {

        pos.x=i-x;pos.y=j;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    y=1;
    while (1)
    {

        pos.x=i;pos.y=j+y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
    y=1;
    while (1)
    {
        pos.x=i;pos.y=j-y;
        if (pos.verifcoord())
        {
            if(this->verifami(pos,Tab))
                break;

            if(this->verifennemi(pos,Tab))
            {
                this->possibilites.ajoutliste(pos);
                break;
            }
            this->possibilites.ajoutliste(pos);
            x+=1;y+=1;
        }
        else break;
    }
}

void pion::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    coord pos;
    this->possibilites.~liste();
    if (this->joueur==1)
    {
        pos.x=i-1;
        pos.y=j;
        if ((!this->verifami(pos,Tab))&&(!this->verifennemi(pos,Tab))&&pos.verifcoord())
            {
                this->possibilites.ajoutliste(pos);
                pos.x=i-2;
                pos.y=j;
                if ((i==6)&&(!this->verifami(pos,Tab))&&(!this->verifennemi(pos,Tab)))
                    this->possibilites.ajoutliste(pos);
            }
        pos.x=i-1;
        pos.y=j+1;
        if ((this->verifennemi(pos,Tab))&&pos.verifcoord())
            this->possibilites.ajoutliste(pos);
        pos.x=i-1;
        pos.y=j-1;
        if ((this->verifennemi(pos,Tab))&&pos.verifcoord())
            this->possibilites.ajoutliste(pos);
    }
    if (this->joueur==2)
    {
        pos.x=i+1;
        pos.y=j;
        if ((!this->verifami(pos,Tab))&&(!this->verifennemi(pos,Tab))&&pos.verifcoord())
            {
                this->possibilites.ajoutliste(pos);
                pos.x=i+2;
                pos.y=j;
                if ((i==1)&&(!this->verifami(pos,Tab))&&(!this->verifennemi(pos,Tab)))
                    this->possibilites.ajoutliste(pos);
            }
        pos.x=i+1;
        pos.y=j+1;
        if ((this->verifennemi(pos,Tab))&&pos.verifcoord())
            this->possibilites.ajoutliste(pos);
        pos.x=i+1;
        pos.y=j-1;
        if ((this->verifennemi(pos,Tab))&&pos.verifcoord())
            this->possibilites.ajoutliste(pos);
    }
}

void cheval::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    this->possibilites.~liste();
    coord pos;
    pos.x=i+1;
    pos.y=j+2;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-1;
    pos.y=j+2;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i+1;
    pos.y=j-2;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-1;
    pos.y=j-2;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i+2;
    pos.y=j+1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i+2;
    pos.y=j-1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-2;
    pos.y=j+1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-2;
    pos.y=j-1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
}

void roi::deplacementnaif(coord source,chessboard Tab)
{
    int i=source.x,j=source.y;
    this->possibilites.~liste();
    coord pos;
    pos.x=i+1;
    pos.y=j+1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i;
    pos.y=j+1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-1;
    pos.y=j+1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-1;
    pos.y=j;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i+1;
    pos.y=j;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i-1;
    pos.y=j-1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i;
    pos.y=j-1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);
    pos.x=i+1;
    pos.y=j-1;
    if ((!this->verifami(pos,Tab))&&pos.verifcoord())
                this->possibilites.ajoutliste(pos);

}

#endif // CLASSPIECE_H_INCLUDED
