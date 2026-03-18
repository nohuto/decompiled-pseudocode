/*
 * XREFs of ?AddRef@CGDIBitmapRealization@@$4PPPPPPPM@BMI@EAAKXZ @ 0x180121ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 456));
}
