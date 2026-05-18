/*
 * XREFs of sub_1800F5C80 @ 0x1800F5C80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800F5C14 @ 0x1800F5C14 (sub_1800F5C14.c)
 */

LPVOID __fastcall sub_1800F5C80(LPVOID lpMem, char a2)
{
  sub_1800F5C14((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
