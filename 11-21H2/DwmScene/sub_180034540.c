/*
 * XREFs of sub_180034540 @ 0x180034540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180044F48 @ 0x180044F48 (sub_180044F48.c)
 */

LPVOID __fastcall sub_180034540(LPVOID lpMem, char a2)
{
  sub_180010910((__int64)lpMem + 24);
  sub_180010910((__int64)lpMem + 8);
  sub_180044F48(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
