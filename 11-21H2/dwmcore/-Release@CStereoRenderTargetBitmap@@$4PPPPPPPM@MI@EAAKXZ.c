/*
 * XREFs of ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x18010D030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 200));
}
