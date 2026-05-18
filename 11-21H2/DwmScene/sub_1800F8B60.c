/*
 * XREFs of sub_1800F8B60 @ 0x1800F8B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800F875C @ 0x1800F875C (sub_1800F875C.c)
 */

LPVOID __fastcall sub_1800F8B60(LPVOID lpMem, char a2)
{
  sub_1800F875C((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
