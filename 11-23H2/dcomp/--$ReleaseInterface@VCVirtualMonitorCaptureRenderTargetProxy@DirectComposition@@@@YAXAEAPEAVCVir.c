/*
 * XREFs of ??$ReleaseInterface@VCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@@YAXAEAPEAVCVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@@Z @ 0x1800ECF9C
 * Callers:
 *     ?CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IPEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F08E0 (-CreateSlateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@1IP.c)
 *     ?CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@Z @ 0x1800F1220 (-CreateVirtualMonitorCaptureRenderTarget@CDevice@DirectComposition@@UEAAJ_KAEBUtagRECT@@PEAPEAUI.c)
 * Callees:
 *     ?Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ @ 0x1800F3D40 (-Release@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<DirectComposition::CVirtualMonitorCaptureRenderTargetProxy>(
        DirectComposition::CVirtualMonitorCaptureRenderTargetProxy **a1)
{
  DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
