/*
 * XREFs of sub_180097A30 @ 0x180097A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180097A18 @ 0x180097A18 (sub_180097A18.c)
 */

LPVOID __fastcall sub_180097A30(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180097A18((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
