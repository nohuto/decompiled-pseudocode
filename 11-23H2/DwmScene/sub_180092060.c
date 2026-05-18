/*
 * XREFs of sub_180092060 @ 0x180092060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180091E94 @ 0x180091E94 (sub_180091E94.c)
 */

LPVOID __fastcall sub_180092060(LPVOID lpMem, char a2)
{
  sub_180091E94((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
