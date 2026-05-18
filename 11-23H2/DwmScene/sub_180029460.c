/*
 * XREFs of sub_180029460 @ 0x180029460
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 */

LPVOID __fastcall sub_180029460(LPVOID lpMem, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = a2;
  sub_180029368((__int64)lpMem, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
