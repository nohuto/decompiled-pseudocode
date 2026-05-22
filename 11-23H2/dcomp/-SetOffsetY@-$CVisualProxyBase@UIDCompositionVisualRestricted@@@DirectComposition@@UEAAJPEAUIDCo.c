/*
 * XREFs of ?SetOffsetY@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOffsetY(
        __int64 a1,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty((DirectComposition::CResourceProxy *)(a1 + 8), 1u, a2);
}
