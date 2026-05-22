/*
 * XREFs of ?SetFlipManager@?$CCaptureRenderTargetProxyBase@UIDCompositionVirtualMonitorCaptureRenderTargetInternal@@@DirectComposition@@UEAAJPEAX@Z @ 0x1800F52B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionVirtualMonitorCaptureRenderTargetInternal>::SetFlipManager(
        __int64 a1,
        void *a2)
{
  return DirectComposition::CResourceProxy::SetHandleProperty((DirectComposition::CResourceProxy *)(a1 + 8), 1u, a2);
}
