/*
 * XREFs of sub_180014BD0 @ 0x180014BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180014B70 @ 0x180014B70 (sub_180014B70.c)
 */

LPVOID __fastcall sub_180014BD0(LPVOID lpMem, char a2)
{
  sub_180014B70((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
