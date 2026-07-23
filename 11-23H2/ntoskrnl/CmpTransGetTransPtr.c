/*
 * XREFs of CmpTransGetTransPtr @ 0x140A1C570
 * Callers:
 *     CmpTransIsTransActive @ 0x140616A0C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
