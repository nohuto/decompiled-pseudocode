/*
 * XREFs of ?SetDesktopTree@CDDisplayRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionDesktopTreePartner@@@Z @ 0x180091A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetProxy::SetDesktopTree(
        DirectComposition::CDDisplayRenderTargetProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CDDisplayRenderTargetProxy *)((char *)this + 8),
           0,
           a2);
}
