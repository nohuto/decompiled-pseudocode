/*
 * XREFs of ?SetTransparentForInput@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJH@Z @ 0x1800F6590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetTransparentForInput(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           36,
           a2);
}
