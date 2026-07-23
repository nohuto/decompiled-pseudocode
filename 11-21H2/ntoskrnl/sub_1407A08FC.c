/*
 * XREFs of sub_1407A08FC @ 0x1407A08FC
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_1403882F0 @ 0x1403882F0 (sub_1403882F0.c)
 */

_QWORD *__fastcall sub_1407A08FC(_QWORD *a1)
{
  _QWORD *result; // rax

  for ( result = (_QWORD *)*a1; (_QWORD *)*a1 != a1; result = (_QWORD *)*a1 )
    sub_1403882F0(a1, result[2], 0LL);
  return result;
}
