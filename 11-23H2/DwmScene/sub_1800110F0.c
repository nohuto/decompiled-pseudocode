/*
 * XREFs of sub_1800110F0 @ 0x1800110F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180010F94 @ 0x180010F94 (sub_180010F94.c)
 */

LPVOID __fastcall sub_1800110F0(LPVOID lpMem, char a2)
{
  sub_180010F94((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
