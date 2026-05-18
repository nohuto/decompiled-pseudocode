/*
 * XREFs of sub_180027D80 @ 0x180027D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180027830 @ 0x180027830 (sub_180027830.c)
 */

LPVOID __fastcall sub_180027D80(LPVOID lpMem, char a2)
{
  sub_180027830((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
