/*
 * XREFs of ?Release@CLegacySwapChain@@$4PPPPPPPM@BFA@EAAKXZ @ 0x180109130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 336));
}
