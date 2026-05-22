/*
 * XREFs of ?SetCaptureController@?$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@DirectComposition@@UEAAJPEAUIDCompositionCaptureControllerReferenceInternal@@@Z @ 0x1800F4CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionVirtualMonitorCaptureRenderTargetInternal>::SetCaptureController(
        __int64 a1,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 0, a2);
}
