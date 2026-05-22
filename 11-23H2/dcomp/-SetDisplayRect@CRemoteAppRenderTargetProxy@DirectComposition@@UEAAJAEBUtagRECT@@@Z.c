/*
 * XREFs of ?SetDisplayRect@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBUtagRECT@@@Z @ 0x1800F5290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CRemoteAppRenderTargetProxy::SetDisplayRect(
        DirectComposition::CRemoteAppRenderTargetProxy *this,
        const struct tagRECT *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CRemoteAppRenderTargetProxy *)((char *)this + 8),
           1,
           a2,
           0x10uLL);
}
