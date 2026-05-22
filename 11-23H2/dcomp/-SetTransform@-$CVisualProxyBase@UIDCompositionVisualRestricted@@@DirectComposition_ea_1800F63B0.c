/*
 * XREFs of ?SetTransform@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionTransform@@@Z @ 0x1800F63B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetTransform(
        __int64 a1,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty((DirectComposition::CResourceProxy *)(a1 + 8), 3, a2);
}
