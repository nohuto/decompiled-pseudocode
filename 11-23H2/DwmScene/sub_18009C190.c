/*
 * XREFs of sub_18009C190 @ 0x18009C190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18009BF90 @ 0x18009BF90 (sub_18009BF90.c)
 */

_QWORD *__fastcall sub_18009C190(_QWORD *lpMem, char a2)
{
  sub_18009BF90(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
