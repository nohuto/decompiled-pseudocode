/*
 * XREFs of sub_180019380 @ 0x180019380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180018D88 @ 0x180018D88 (sub_180018D88.c)
 */

LPVOID __fastcall sub_180019380(LPVOID lpMem, char a2)
{
  sub_180018D88((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
