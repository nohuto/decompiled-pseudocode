/*
 * XREFs of ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BMA@EAAKXZ @ 0x180121B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDISectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 448));
}
