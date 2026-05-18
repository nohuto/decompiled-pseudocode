/*
 * XREFs of sub_180052D00 @ 0x180052D00
 * Callers:
 *     sub_180053BE0 @ 0x180053BE0 (sub_180053BE0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B738 @ 0x18008B738 (sub_18008B738.c)
 */

LPVOID __fastcall sub_180052D00(LPVOID lpMem, char a2)
{
  sub_18008B738();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
