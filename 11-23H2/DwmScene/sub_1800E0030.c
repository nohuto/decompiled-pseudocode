/*
 * XREFs of sub_1800E0030 @ 0x1800E0030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800DFF6C @ 0x1800DFF6C (sub_1800DFF6C.c)
 */

LPVOID __fastcall sub_1800E0030(LPVOID lpMem, char a2)
{
  sub_1800DFF6C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
