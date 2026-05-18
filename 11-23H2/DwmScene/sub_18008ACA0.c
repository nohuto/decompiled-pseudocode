/*
 * XREFs of sub_18008ACA0 @ 0x18008ACA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18008AB08 @ 0x18008AB08 (sub_18008AB08.c)
 */

LPVOID __fastcall sub_18008ACA0(LPVOID lpMem, char a2)
{
  sub_18008AB08((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
