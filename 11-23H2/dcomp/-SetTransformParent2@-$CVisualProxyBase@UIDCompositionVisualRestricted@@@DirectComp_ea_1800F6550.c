/*
 * XREFs of ?SetTransformParent2@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionVisualReferencePartner@@@Z @ 0x1800F6550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetTransformParent2(
        __int64 a1,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 38, a2);
}
