/*
 * XREFs of ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x18011D420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CSystemMemoryBitmap::Release((CSystemMemoryBitmap *)(a1 - 16));
}
