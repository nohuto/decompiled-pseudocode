/*
 * XREFs of sub_18009D1E0 @ 0x18009D1E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009D100 @ 0x18009D100 (sub_18009D100.c)
 */

LPVOID __fastcall sub_18009D1E0(LPVOID lpMem, char a2)
{
  sub_18009D100((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
