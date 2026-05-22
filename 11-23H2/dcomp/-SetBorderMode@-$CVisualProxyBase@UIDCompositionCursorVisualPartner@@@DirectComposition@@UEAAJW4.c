/*
 * XREFs of ?SetBorderMode@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJW4DCOMPOSITION_BORDER_MODE@@@Z @ 0x180066180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetBorderMode(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           8,
           a2);
}
