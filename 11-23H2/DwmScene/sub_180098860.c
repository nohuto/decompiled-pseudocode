/*
 * XREFs of sub_180098860 @ 0x180098860
 * Callers:
 *     sub_18009A6B0 @ 0x18009A6B0 (sub_18009A6B0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall sub_180098860(__int64 a1, int *a2)
{
  _QWORD *v2; // rax

  dword_1801D8A50 = *a2;
  qword_1801D8A58 = 0LL;
  qword_1801D8A60 = 0LL;
  v2 = (_QWORD *)sub_18001090C(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_1801D8A58 = (__int64)v2;
  qword_1801D8A68 = 0LL;
  xmmword_1801D8A70 = 0LL;
  qword_1801D8A80 = 7LL;
  qword_1801D8A88 = 8LL;
  dword_1801D8A50 = 1065353216;
  sub_180042798((__int64)&qword_1801D8A68, 0x10uLL, (__int64)v2);
  return &dword_1801D8A50;
}
