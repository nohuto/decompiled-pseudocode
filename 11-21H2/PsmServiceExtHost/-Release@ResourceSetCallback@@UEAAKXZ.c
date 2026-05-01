/*
 * XREFs of ?Release@ResourceSetCallback@@UEAAKXZ @ 0x1800833A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004DD94 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallback::Release(ResourceSetCallback *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &ResourceSetCallback::`vftable';
    operator delete(this);
  }
  return v1;
}
