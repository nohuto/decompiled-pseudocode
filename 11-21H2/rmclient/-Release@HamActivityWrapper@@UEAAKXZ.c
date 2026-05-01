/*
 * XREFs of ?Release@HamActivityWrapper@@UEAAKXZ @ 0x18001C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000AAC8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall HamActivityWrapper::Release(HamActivityWrapper *this)
{
  signed __int32 v1; // ebx
  bool v2; // cc
  unsigned __int32 v3; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 24, 0xFFFFFFFF);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    if ( this )
    {
      *(_QWORD *)this = &HamActivityWrapper::`vftable';
      operator delete(this);
    }
  }
  return v3;
}
