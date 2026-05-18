/*
 * XREFs of sub_18002BC20 @ 0x18002BC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18002B970 @ 0x18002B970 (sub_18002B970.c)
 */

_QWORD *__fastcall sub_18002BC20(_QWORD *lpMem, char a2)
{
  sub_18002B970(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
