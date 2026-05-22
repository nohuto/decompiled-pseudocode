/*
 * XREFs of ?SetDesktopTree@CVirtualMonitorCaptureRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z @ 0x1800F5270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetProxy::SetDesktopTree(
        DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CVirtualMonitorCaptureRenderTargetProxy *)((char *)this + 8),
           8,
           a2);
}
