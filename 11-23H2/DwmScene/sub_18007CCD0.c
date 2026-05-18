/*
 * XREFs of sub_18007CCD0 @ 0x18007CCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18007CC88 @ 0x18007CC88 (sub_18007CC88.c)
 */

_QWORD *__fastcall sub_18007CCD0(_QWORD *lpMem, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_18007CC88(lpMem, a2);
  if ( (v2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
