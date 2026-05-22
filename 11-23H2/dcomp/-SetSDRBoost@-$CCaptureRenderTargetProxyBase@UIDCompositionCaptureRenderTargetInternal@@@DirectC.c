/*
 * XREFs of ?SetSDRBoost@?$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInternal@@@DirectComposition@@UEAAJM@Z @ 0x1800F5EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionCaptureRenderTargetInternal>::SetSDRBoost(
        __int64 a1,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty((DirectComposition::CResourceProxy *)(a1 + 8), 7, a2);
}
