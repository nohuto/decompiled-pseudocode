/*
 * XREFs of sub_18002BACC @ 0x18002BACC
 * Callers:
 *     sub_18002CE40 @ 0x18002CE40 (sub_18002CE40.c)
 * Callees:
 *     sub_18002D584 @ 0x18002D584 (sub_18002D584.c)
 */

_QWORD *__fastcall sub_18002BACC(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    sub_18002D584(a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
