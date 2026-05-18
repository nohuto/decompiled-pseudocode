/*
 * XREFs of sub_180064B20 @ 0x180064B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180064190 @ 0x180064190 (sub_180064190.c)
 */

LPVOID __fastcall sub_180064B20(LPVOID lpMem, char a2)
{
  sub_180064190((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
