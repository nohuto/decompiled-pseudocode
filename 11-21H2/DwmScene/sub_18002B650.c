/*
 * XREFs of sub_18002B650 @ 0x18002B650
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18002B404 @ 0x18002B404 (sub_18002B404.c)
 */

LPVOID __fastcall sub_18002B650(LPVOID lpMem, char a2)
{
  sub_18002B404((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
