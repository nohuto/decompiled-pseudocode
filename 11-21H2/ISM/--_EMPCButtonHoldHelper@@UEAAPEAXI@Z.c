/*
 * XREFs of ??_EMPCButtonHoldHelper@@UEAAPEAXI@Z @ 0x1800AF7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

MPCButtonHoldHelper *__fastcall MPCButtonHoldHelper::`vector deleting destructor'(MPCButtonHoldHelper *this, char a2)
{
  *(_QWORD *)this = &MPCButtonHoldHelper::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
