/*
 * XREFs of sub_180097BE0 @ 0x180097BE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A1B4 @ 0x18009A1B4 (sub_18009A1B4.c)
 */

LPVOID __fastcall sub_180097BE0(LPVOID lpMem, char a2)
{
  sub_18009A1B4(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
