/*
 * XREFs of ?GetComputeScribbleRenderer@CLegacySwapChain@@UEAAPEAVCComputeScribbleRenderer@@XZ @ 0x180108394
 * Callers:
 *     ?GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAPEAVCComputeScribbleRenderer@@XZ @ 0x18011F4D0 (-GetComputeScribbleRenderer@CLegacySwapChain@@$4PPPPPPPM@A@EAAPEAVCComputeScribbleRenderer@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComputeScribbleRenderer *__fastcall CLegacySwapChain::GetComputeScribbleRenderer(CLegacySwapChain *this)
{
  return (struct CComputeScribbleRenderer *)*((_QWORD *)this - 10);
}
