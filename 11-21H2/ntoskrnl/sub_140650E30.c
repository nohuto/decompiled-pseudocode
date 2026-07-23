/*
 * XREFs of sub_140650E30 @ 0x140650E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140650D38 @ 0x140650D38 (sub_140650D38.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 */

_QWORD *__fastcall sub_140650E30(_QWORD *a1, char a2)
{
  sub_140650D38(a1);
  if ( (a2 & 1) != 0 )
    sub_1406D9550(a1);
  return a1;
}
