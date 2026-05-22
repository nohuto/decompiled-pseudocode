/*
 * XREFs of ?Release@CReadCaptureControllerProxy@DirectComposition@@UEAAKXZ @ 0x1800FB3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CReadCaptureControllerProxy::Release(
        DirectComposition::CReadCaptureControllerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DirectComposition::CReadCaptureControllerProxy::`vftable';
    DirectComposition::CDevice::RemoveProxy(this);
  }
  return v1;
}
