/*
 * XREFs of ?SetOffsetZ@?$CVisualProxyBase@UIDCompositionVisualRestricted@@@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualProxyBase<IDCompositionVisualRestricted>::SetOffsetZ(
        __int64 a1,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty((DirectComposition::CResourceProxy *)(a1 + 8), 2u, a2);
}
