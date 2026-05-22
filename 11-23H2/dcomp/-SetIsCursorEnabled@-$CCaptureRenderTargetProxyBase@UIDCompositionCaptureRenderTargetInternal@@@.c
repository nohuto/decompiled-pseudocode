/*
 * XREFs of ?SetIsCursorEnabled@?$CCaptureRenderTargetProxyBase@UIDCompositionCaptureRenderTargetInternal@@@DirectComposition@@UEAAJ_N@Z @ 0x1800F57B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetProxyBase<IDCompositionCaptureRenderTargetInternal>::SetIsCursorEnabled(
        __int64 a1,
        unsigned __int8 a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           4,
           a2);
}
