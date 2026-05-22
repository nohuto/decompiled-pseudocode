/*
 * XREFs of ?SetOpacity@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOpacity(
        __int64 a1,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(a1 + 8),
           0x19u,
           a2);
}
