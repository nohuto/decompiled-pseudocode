/*
 * XREFs of ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18010B370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 344));
}
