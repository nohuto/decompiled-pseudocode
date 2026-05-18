/*
 * XREFs of sub_18005FE90 @ 0x18005FE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18005FC70 @ 0x18005FC70 (sub_18005FC70.c)
 */

_QWORD *__fastcall sub_18005FE90(_QWORD *lpMem, char a2)
{
  sub_18005FC70(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
