/*
 * XREFs of sub_140652080 @ 0x140652080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140651FB8 @ 0x140651FB8 (sub_140651FB8.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

_QWORD *__fastcall sub_140652080(_QWORD *a1, char a2)
{
  sub_140651FB8(a1);
  if ( (a2 & 1) != 0 )
    sub_1406D9550(a1);
  return a1;
}
