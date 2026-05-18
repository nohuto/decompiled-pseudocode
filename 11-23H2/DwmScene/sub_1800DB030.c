/*
 * XREFs of sub_1800DB030 @ 0x1800DB030
 * Callers:
 *     sub_1800DABC8 @ 0x1800DABC8 (sub_1800DABC8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18002F250 @ 0x18002F250 (sub_18002F250.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DB030(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v3 = sub_18002F250(1uLL);
  a1[1] = sub_18001090C(v3);
  return a1;
}
