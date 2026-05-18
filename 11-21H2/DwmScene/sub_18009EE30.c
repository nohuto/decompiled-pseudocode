/*
 * XREFs of sub_18009EE30 @ 0x18009EE30
 * Callers:
 *     sub_18009EB10 @ 0x18009EB10 (sub_18009EB10.c)
 * Callees:
 *     sub_18009EAD8 @ 0x18009EAD8 (sub_18009EAD8.c)
 */

char *__fastcall sub_18009EE30(void *a1, __int64 a2, char *a3)
{
  sub_18009EAD8(a1, a2, a3);
  return &a3[a2 - (_QWORD)a1];
}
