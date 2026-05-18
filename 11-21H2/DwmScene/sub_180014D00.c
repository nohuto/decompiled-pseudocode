/*
 * XREFs of sub_180014D00 @ 0x180014D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180051338 @ 0x180051338 (sub_180051338.c)
 */

LPVOID __fastcall sub_180014D00(LPVOID lpMem, char a2)
{
  sub_180051338();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
