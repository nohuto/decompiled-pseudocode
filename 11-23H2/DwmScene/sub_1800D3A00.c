/*
 * XREFs of sub_1800D3A00 @ 0x1800D3A00
 * Callers:
 *     sub_1800D38EC @ 0x1800D38EC (sub_1800D38EC.c)
 *     sub_1800D45E8 @ 0x1800D45E8 (sub_1800D45E8.c)
 * Callees:
 *     sub_1800D38B4 @ 0x1800D38B4 (sub_1800D38B4.c)
 */

char *__fastcall sub_1800D3A00(void *a1, __int64 a2, char *a3)
{
  sub_1800D38B4(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
