/*
 * XREFs of sub_18008F4E0 @ 0x18008F4E0
 * Callers:
 *     sub_18008F0EC @ 0x18008F0EC (sub_18008F0EC.c)
 * Callees:
 *     sub_18008F0B4 @ 0x18008F0B4 (sub_18008F0B4.c)
 */

char *__fastcall sub_18008F4E0(void *a1, __int64 a2, char *a3)
{
  sub_18008F0B4(a1, a2, a3);
  return &a3[a2 - (_QWORD)a1];
}
