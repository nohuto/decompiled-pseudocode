/*
 * XREFs of sub_1800895F0 @ 0x1800895F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008B434 @ 0x18008B434 (sub_18008B434.c)
 */

LPVOID __fastcall sub_1800895F0(LPVOID lpMem, char a2)
{
  sub_18008B434();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
