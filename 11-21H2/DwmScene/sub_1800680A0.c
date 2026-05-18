/*
 * XREFs of sub_1800680A0 @ 0x1800680A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180067B58 @ 0x180067B58 (sub_180067B58.c)
 */

LPVOID __fastcall sub_1800680A0(LPVOID lpMem, char a2)
{
  sub_180067B58((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
