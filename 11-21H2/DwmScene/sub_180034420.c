/*
 * XREFs of sub_180034420 @ 0x180034420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180032B0C @ 0x180032B0C (sub_180032B0C.c)
 */

LPVOID __fastcall sub_180034420(LPVOID lpMem, char a2)
{
  sub_180032B0C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
