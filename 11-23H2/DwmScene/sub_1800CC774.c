/*
 * XREFs of sub_1800CC774 @ 0x1800CC774
 * Callers:
 *     sub_1800CC5C4 @ 0x1800CC5C4 (sub_1800CC5C4.c)
 *     sub_1800CF4EC @ 0x1800CF4EC (sub_1800CF4EC.c)
 * Callees:
 *     sub_1800CC58C @ 0x1800CC58C (sub_1800CC58C.c)
 */

char *__fastcall sub_1800CC774(void *a1, __int64 a2, char *a3)
{
  sub_1800CC58C(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL];
}
