/*
 * XREFs of sub_180018150 @ 0x180018150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180017AF8 @ 0x180017AF8 (sub_180017AF8.c)
 */

LPVOID __fastcall sub_180018150(LPVOID lpMem, char a2)
{
  sub_180017AF8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
