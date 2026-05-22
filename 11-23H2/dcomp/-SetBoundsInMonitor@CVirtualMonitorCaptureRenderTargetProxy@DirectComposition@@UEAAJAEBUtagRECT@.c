/*
 * XREFs of ?SetBoundsInMonitor@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z @ 0x1800F4C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::SetBoundsInMonitor(
        DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *this,
        const struct tagRECT *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *)((char *)this + 8),
           11,
           a2,
           0x10uLL);
}
