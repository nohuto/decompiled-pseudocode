/*
 * XREFs of ?SetIsClearEnabled@?$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInternal@@@DirectComposition@@UEAAJ_N@Z @ 0x1800F5770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionCaptureRenderTargetInternal>::SetIsClearEnabled(
        __int64 a1,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           5,
           a2);
}
