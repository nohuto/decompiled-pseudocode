/*
 * XREFs of sub_18004B110 @ 0x18004B110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18004AF1C @ 0x18004AF1C (sub_18004AF1C.c)
 */

_QWORD *__fastcall sub_18004B110(_QWORD *lpMem, char a2)
{
  sub_18004AF1C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
