/*
 * XREFs of ?Release@CInkProxy@DirectComposition@@UEAAKXZ @ 0x1800F3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CInkProxy::Release(DirectComposition::CInkProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DirectComposition::CInkProxy::`vftable';
    DirectComposition::CDevice::RemoveProxy(this);
  }
  return v1;
}
