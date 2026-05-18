/*
 * XREFs of sub_1800E3210 @ 0x1800E3210
 * Callers:
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 * Callees:
 *     sub_1800E30E0 @ 0x1800E30E0 (sub_1800E30E0.c)
 */

char *__fastcall sub_1800E3210(void *a1, __int64 a2, char *a3)
{
  sub_1800E30E0(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL];
}
