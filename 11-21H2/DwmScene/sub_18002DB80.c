/*
 * XREFs of sub_18002DB80 @ 0x18002DB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18007FEF8 @ 0x18007FEF8 (sub_18007FEF8.c)
 */

LPVOID __fastcall sub_18002DB80(LPVOID lpMem, char a2)
{
  sub_18007FEF8();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
