/*
 * XREFs of sub_1800483B0 @ 0x1800483B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180048354 @ 0x180048354 (sub_180048354.c)
 */

LPVOID __fastcall sub_1800483B0(LPVOID lpMem, char a2)
{
  sub_180048354((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
