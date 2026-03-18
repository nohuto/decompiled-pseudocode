/*
 * XREFs of ?GetOverlaySwapChain@CLegacyRenderTarget@@UEBAPEAVIOverlaySwapChain@@XZ @ 0x180105D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IOverlaySwapChain *__fastcall CLegacyRenderTarget::GetOverlaySwapChain(CLegacyRenderTarget *this)
{
  return (struct IOverlaySwapChain *)*((_QWORD *)this + 5);
}
