/*
 * XREFs of sub_180048370 @ 0x180048370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180048280 @ 0x180048280 (sub_180048280.c)
 */

LPVOID __fastcall sub_180048370(LPVOID lpMem, char a2)
{
  sub_180048280((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
