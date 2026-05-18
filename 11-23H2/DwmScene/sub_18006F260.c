/*
 * XREFs of sub_18006F260 @ 0x18006F260
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18006F198 @ 0x18006F198 (sub_18006F198.c)
 */

LPVOID __fastcall sub_18006F260(LPVOID lpMem, char a2)
{
  sub_18006F198((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
