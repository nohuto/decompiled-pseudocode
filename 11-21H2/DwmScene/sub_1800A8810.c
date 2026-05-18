/*
 * XREFs of sub_1800A8810 @ 0x1800A8810
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A86F4 @ 0x1800A86F4 (sub_1800A86F4.c)
 */

LPVOID __fastcall sub_1800A8810(LPVOID lpMem, char a2)
{
  sub_1800A86F4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
