/*
 * XREFs of ?GetSwapChain@CRemoteRenderTarget@@UEBAPEAVISwapChain@@XZ @ 0x180105E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ISwapChain *__fastcall CRemoteRenderTarget::GetSwapChain(CRemoteRenderTarget *this)
{
  return (struct ISwapChain *)*((_QWORD *)this + 4);
}
