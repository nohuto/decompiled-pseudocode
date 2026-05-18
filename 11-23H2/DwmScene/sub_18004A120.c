/*
 * XREFs of sub_18004A120 @ 0x18004A120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18004A100 @ 0x18004A100 (sub_18004A100.c)
 */

_QWORD *__fastcall sub_18004A120(_QWORD *lpMem, char a2)
{
  sub_18004A100(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
