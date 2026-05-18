/*
 * XREFs of sub_18008AC20 @ 0x18008AC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008A9B4 @ 0x18008A9B4 (sub_18008A9B4.c)
 */

LPVOID __fastcall sub_18008AC20(LPVOID lpMem, char a2)
{
  sub_18008A9B4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
