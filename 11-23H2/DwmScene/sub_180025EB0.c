/*
 * XREFs of sub_180025EB0 @ 0x180025EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180025BEC @ 0x180025BEC (sub_180025BEC.c)
 */

LPVOID __fastcall sub_180025EB0(LPVOID lpMem, char a2)
{
  sub_180025BEC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
