/*
 * XREFs of sub_1800DDF88 @ 0x1800DDF88
 * Callers:
 *     sub_1800DC03C @ 0x1800DC03C (sub_1800DC03C.c)
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

_QWORD *__fastcall sub_1800DDF88(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_18001C190();
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
