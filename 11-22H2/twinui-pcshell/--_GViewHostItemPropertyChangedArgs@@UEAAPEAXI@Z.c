/*
 * XREFs of ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x1804AA550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x1804AA020 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 */

HSTRING *__fastcall ViewHostItemPropertyChangedArgs::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ViewHostItemPropertyChangedArgs::~ViewHostItemPropertyChangedArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
