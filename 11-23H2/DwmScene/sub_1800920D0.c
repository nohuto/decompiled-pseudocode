/*
 * XREFs of sub_1800920D0 @ 0x1800920D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180091FD8 @ 0x180091FD8 (sub_180091FD8.c)
 */

_QWORD *__fastcall sub_1800920D0(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180091FD8(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
