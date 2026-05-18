/*
 * XREFs of sub_18007C170 @ 0x18007C170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007C100 @ 0x18007C100 (sub_18007C100.c)
 */

LPVOID __fastcall sub_18007C170(LPVOID lpMem, char a2)
{
  sub_18007C100((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
