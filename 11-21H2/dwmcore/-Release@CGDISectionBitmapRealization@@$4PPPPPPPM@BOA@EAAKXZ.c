/*
 * XREFs of ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BOA@EAAKXZ @ 0x18010B650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDISectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 480));
}
