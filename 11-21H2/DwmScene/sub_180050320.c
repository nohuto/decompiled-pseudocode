/*
 * XREFs of sub_180050320 @ 0x180050320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180050304 @ 0x180050304 (sub_180050304.c)
 */

LPVOID __fastcall sub_180050320(LPVOID lpMem, char a2)
{
  sub_180050304((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
