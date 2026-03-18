/*
 * XREFs of ?Release@CBitmapRealization@@$4PPPPPPPM@BFI@EAAKXZ @ 0x180121EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 344));
}
