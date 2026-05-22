/*
 * XREFs of ?SetClearColor@?$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800F5000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionVirtualMonitorCaptureRenderTargetInternal>::SetClearColor(
        __int64 a1,
        const void *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           6,
           a2,
           0x10uLL);
}
