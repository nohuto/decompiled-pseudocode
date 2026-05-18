/*
 * XREFs of sub_180073DB0 @ 0x180073DB0
 * Callers:
 *     sub_1800A0A84 @ 0x1800A0A84 (sub_1800A0A84.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

_QWORD *__fastcall sub_180073DB0(_QWORD *a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_18001090C(0x10uLL);
  result[1] = 0LL;
  *a1 = result;
  *result = a1;
  return result;
}
