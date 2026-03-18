/*
 * XREFs of NtGdiUnrealizeObject @ 0x1C02AEB60
 * Callers:
 *     <none>
 * Callees:
 *     GreUnrealizeObject @ 0x1C02B66F8 (GreUnrealizeObject.c)
 */

__int64 __fastcall NtGdiUnrealizeObject(HPALETTE a1)
{
  return GreUnrealizeObject(a1);
}
