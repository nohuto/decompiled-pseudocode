/*
 * XREFs of sub_18004DF30 @ 0x18004DF30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180096AC8 @ 0x180096AC8 (sub_180096AC8.c)
 */

LPVOID __fastcall sub_18004DF30(LPVOID lpMem, char a2)
{
  sub_180096AC8();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
