/*
 * XREFs of sub_1800A54F0 @ 0x1800A54F0
 * Callers:
 *     sub_1800A5488 @ 0x1800A5488 (sub_1800A5488.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 */

_QWORD *__fastcall sub_1800A54F0(_QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (_QWORD *)sub_18001090C(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
