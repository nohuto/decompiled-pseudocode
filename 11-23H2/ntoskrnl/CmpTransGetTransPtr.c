/*
 * XREFs of CmpTransGetTransPtr @ 0x140A1C2C0
 * Callers:
 *     CmpTransIsTransActive @ 0x1406164BC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
