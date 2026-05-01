/*
 * XREFs of ??_GViewHostItemPropertyChangedArgs@@UEAAPEAXI@Z @ 0x1803CD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1ViewHostItemPropertyChangedArgs@@UEAA@XZ @ 0x1803CCF78 (--1ViewHostItemPropertyChangedArgs@@UEAA@XZ.c)
 */

HSTRING *__fastcall ViewHostItemPropertyChangedArgs::`scalar deleting destructor'(HSTRING *this, char a2)
{
  ViewHostItemPropertyChangedArgs::~ViewHostItemPropertyChangedArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
