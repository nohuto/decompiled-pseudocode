/*
 * XREFs of sub_180059DC0 @ 0x180059DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180059984 @ 0x180059984 (sub_180059984.c)
 */

LPVOID __fastcall sub_180059DC0(LPVOID lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180059984((__int64)lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
