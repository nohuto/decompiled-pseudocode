/*
 * XREFs of sub_180055940 @ 0x180055940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180055848 @ 0x180055848 (sub_180055848.c)
 */

LPVOID __fastcall sub_180055940(LPVOID lpMem, char a2)
{
  sub_180055848((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
