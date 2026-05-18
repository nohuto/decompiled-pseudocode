/*
 * XREFs of sub_1800DE4B0 @ 0x1800DE4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800DE2E4 @ 0x1800DE2E4 (sub_1800DE2E4.c)
 */

LPVOID __fastcall sub_1800DE4B0(LPVOID lpMem, char a2)
{
  sub_1800DE2E4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
