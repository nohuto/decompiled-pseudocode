/*
 * XREFs of sub_18009A600 @ 0x18009A600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800AC9A8 @ 0x1800AC9A8 (sub_1800AC9A8.c)
 */

LPVOID __fastcall sub_18009A600(LPVOID lpMem, char a2)
{
  sub_1800AC9A8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
