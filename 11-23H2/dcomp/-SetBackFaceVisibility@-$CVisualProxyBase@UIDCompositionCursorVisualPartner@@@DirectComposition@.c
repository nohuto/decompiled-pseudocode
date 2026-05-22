/*
 * XREFs of ?SetBackFaceVisibility@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJW4DCOMPOSITION_BACKFACE_VISIBILITY@@@Z @ 0x1800F47C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetBackFaceVisibility(
        __int64 a1,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           19,
           a2);
}
