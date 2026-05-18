/*
 * XREFs of sub_1800293E0 @ 0x1800293E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800280AC @ 0x1800280AC (sub_1800280AC.c)
 */

LPVOID __fastcall sub_1800293E0(LPVOID lpMem, char a2)
{
  sub_1800280AC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
