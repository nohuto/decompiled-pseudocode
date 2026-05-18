/*
 * XREFs of sub_180032680 @ 0x180032680
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 */

LPVOID __fastcall sub_180032680(LPVOID lpMem, char a2)
{
  sub_180031D44((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
