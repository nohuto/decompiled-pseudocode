/*
 * XREFs of ?Release@CDummyRemotingSwapChain@@$4PPPPPPPM@BAA@EAAKXZ @ 0x180108BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDummyRemotingSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 256));
}
