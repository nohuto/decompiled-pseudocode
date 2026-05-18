/*
 * XREFs of sub_1800DBDA0 @ 0x1800DBDA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800DBD04 @ 0x1800DBD04 (sub_1800DBD04.c)
 */

LPVOID __fastcall sub_1800DBDA0(LPVOID lpMem, char a2)
{
  sub_1800DBD04((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
