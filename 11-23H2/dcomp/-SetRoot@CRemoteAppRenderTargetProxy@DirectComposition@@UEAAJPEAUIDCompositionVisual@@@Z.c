/*
 * XREFs of ?SetRoot@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z @ 0x1800F5E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::SetRoot(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CRemoteAppRenderTargetProxy *)((char *)this + 8),
           2,
           a2);
}
