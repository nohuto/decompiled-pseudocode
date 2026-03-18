/*
 * XREFs of ?Release@CColorKeyBitmap@@$4PPPPPPPM@II@EAAKXZ @ 0x180123BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::Release(__int64 a1)
{
  return CSecondarySysmemBitmap::Release((CSecondarySysmemBitmap *)(a1 - *(int *)(a1 - 4) - 136));
}
