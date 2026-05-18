/*
 * XREFs of sub_1800A1D40 @ 0x1800A1D40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A1B64 @ 0x1800A1B64 (sub_1800A1B64.c)
 */

LPVOID __fastcall sub_1800A1D40(LPVOID lpMem, char a2)
{
  sub_1800A1B64((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
