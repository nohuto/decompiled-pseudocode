/*
 * XREFs of sub_180052E20 @ 0x180052E20
 * Callers:
 *     sub_180053C40 @ 0x180053C40 (sub_180053C40.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B8B4 @ 0x18008B8B4 (sub_18008B8B4.c)
 */

LPVOID __fastcall sub_180052E20(LPVOID lpMem, char a2)
{
  sub_18008B8B4();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
