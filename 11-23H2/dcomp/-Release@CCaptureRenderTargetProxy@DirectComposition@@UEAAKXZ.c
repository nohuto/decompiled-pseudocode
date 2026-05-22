/*
 * XREFs of ?Release@CCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ @ 0x1800F3C80
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024510 (-RemoveProxy@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxy::Release(
        DirectComposition::CCaptureRenderTargetProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionCaptureRenderTargetInternal>::`vftable';
    DirectComposition::CDevice::RemoveProxy(this);
  }
  return v1;
}
