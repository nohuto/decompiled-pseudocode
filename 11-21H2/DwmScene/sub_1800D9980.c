/*
 * XREFs of sub_1800D9980 @ 0x1800D9980
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 */

LPVOID __fastcall sub_1800D9980(LPVOID lpMem, char a2)
{
  sub_1800D90D8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
