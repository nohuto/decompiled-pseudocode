/*
 * XREFs of sub_1800180D0 @ 0x1800180D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180017AAC @ 0x180017AAC (sub_180017AAC.c)
 */

LPVOID __fastcall sub_1800180D0(LPVOID lpMem, char a2)
{
  sub_180017AAC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
