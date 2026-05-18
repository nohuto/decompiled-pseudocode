/*
 * XREFs of sub_18002B690 @ 0x18002B690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180029DE4 @ 0x180029DE4 (sub_180029DE4.c)
 */

LPVOID __fastcall sub_18002B690(LPVOID lpMem, char a2)
{
  sub_180029DE4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
