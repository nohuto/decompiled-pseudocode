/*
 * XREFs of ?SetTransformParent@?$CVisualProxyBase@UIDCompositionCursorVisualPartner@@@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F6570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionCursorVisualPartner>::SetTransformParent(
        __int64 a1,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 4, a2);
}
