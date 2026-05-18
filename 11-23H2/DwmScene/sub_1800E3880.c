/*
 * XREFs of sub_1800E3880 @ 0x1800E3880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800E385C @ 0x1800E385C (sub_1800E385C.c)
 */

LPVOID __fastcall sub_1800E3880(LPVOID lpMem, char a2)
{
  sub_1800E385C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
