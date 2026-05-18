/*
 * XREFs of sub_180021B10 @ 0x180021B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800219CC @ 0x1800219CC (sub_1800219CC.c)
 */

LPVOID __fastcall sub_180021B10(LPVOID lpMem, char a2)
{
  sub_1800219CC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
