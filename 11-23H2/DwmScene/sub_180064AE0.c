/*
 * XREFs of sub_180064AE0 @ 0x180064AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180064148 @ 0x180064148 (sub_180064148.c)
 */

LPVOID __fastcall sub_180064AE0(LPVOID lpMem, char a2)
{
  sub_180064148((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
