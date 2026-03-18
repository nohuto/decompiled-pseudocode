/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@WHEI@EAAKXZ @ 0x180106790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 1864));
}
