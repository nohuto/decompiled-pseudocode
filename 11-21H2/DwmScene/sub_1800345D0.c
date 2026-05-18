/*
 * XREFs of sub_1800345D0 @ 0x1800345D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180044F48 @ 0x180044F48 (sub_180044F48.c)
 */

LPVOID __fastcall sub_1800345D0(LPVOID lpMem, char a2)
{
  sub_180044F48(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
