/*
 * XREFs of sub_180094860 @ 0x180094860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009ACB8 @ 0x18009ACB8 (sub_18009ACB8.c)
 */

LPVOID __fastcall sub_180094860(LPVOID lpMem, char a2)
{
  sub_18009ACB8();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
