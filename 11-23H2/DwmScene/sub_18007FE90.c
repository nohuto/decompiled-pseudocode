/*
 * XREFs of sub_18007FE90 @ 0x18007FE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007FE50 @ 0x18007FE50 (sub_18007FE50.c)
 */

_QWORD *__fastcall sub_18007FE90(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_18007FE50(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
