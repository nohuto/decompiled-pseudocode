/*
 * XREFs of sub_18003B6A0 @ 0x18003B6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18003B3E4 @ 0x18003B3E4 (sub_18003B3E4.c)
 */

LPVOID __fastcall sub_18003B6A0(LPVOID lpMem, char a2)
{
  sub_18003B3E4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
