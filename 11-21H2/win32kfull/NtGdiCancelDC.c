/*
 * XREFs of NtGdiCancelDC @ 0x1C02ACA00
 * Callers:
 *     <none>
 * Callees:
 *     GreCancelDC @ 0x1C029E32C (GreCancelDC.c)
 */

_BOOL8 __fastcall NtGdiCancelDC(HDC a1)
{
  return GreCancelDC(a1);
}
