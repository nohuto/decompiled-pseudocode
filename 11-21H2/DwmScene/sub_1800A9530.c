/*
 * XREFs of sub_1800A9530 @ 0x1800A9530
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800A94B8 @ 0x1800A94B8 (sub_1800A94B8.c)
 */

LPVOID __fastcall sub_1800A9530(LPVOID lpMem, char a2)
{
  sub_1800A94B8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
