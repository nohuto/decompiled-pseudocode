/*
 * XREFs of sub_180052DE0 @ 0x180052DE0
 * Callers:
 *     sub_180053C20 @ 0x180053C20 (sub_180053C20.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B448 @ 0x18008B448 (sub_18008B448.c)
 */

LPVOID __fastcall sub_180052DE0(LPVOID lpMem, char a2)
{
  sub_18008B448();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
