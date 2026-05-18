/*
 * XREFs of sub_1800E073C @ 0x1800E073C
 * Callers:
 *     sub_1800E0830 @ 0x1800E0830 (sub_1800E0830.c)
 * Callees:
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 */

_QWORD *__fastcall sub_1800E073C(_QWORD *a1, _QWORD *a2, char *a3, char *a4, char *a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = (unsigned __int64)&a3[-*a1];
  sub_1800E0590((__int64)a1, a3, a4, a5);
  result = a2;
  *a2 = *a1 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
