/*
 * XREFs of sub_1800326C0 @ 0x1800326C0
 * Callers:
 *     sub_180038120 @ 0x180038120 (sub_180038120.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180031F64 @ 0x180031F64 (sub_180031F64.c)
 */

LPVOID __fastcall sub_1800326C0(LPVOID lpMem, char a2)
{
  sub_180031F64((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
