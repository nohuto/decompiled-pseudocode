/*
 * XREFs of sub_180052EE0 @ 0x180052EE0
 * Callers:
 *     sub_180053CA0 @ 0x180053CA0 (sub_180053CA0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008BE0C @ 0x18008BE0C (sub_18008BE0C.c)
 */

LPVOID __fastcall sub_180052EE0(LPVOID lpMem, char a2)
{
  sub_18008BE0C();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
