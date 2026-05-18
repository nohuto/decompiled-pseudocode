/*
 * XREFs of sub_18008B770 @ 0x18008B770
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009BCA0 @ 0x18009BCA0 (sub_18009BCA0.c)
 */

LPVOID __fastcall sub_18008B770(LPVOID lpMem, char a2)
{
  sub_18009BCA0(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
