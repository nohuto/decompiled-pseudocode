/*
 * XREFs of sub_18002BC60 @ 0x18002BC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18002B9A8 @ 0x18002B9A8 (sub_18002B9A8.c)
 */

LPVOID __fastcall sub_18002BC60(LPVOID lpMem, char a2)
{
  sub_18002B9A8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
