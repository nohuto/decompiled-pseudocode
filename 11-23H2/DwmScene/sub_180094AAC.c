/*
 * XREFs of sub_180094AAC @ 0x180094AAC
 * Callers:
 *     sub_180094888 @ 0x180094888 (sub_180094888.c)
 *     sub_180094D80 @ 0x180094D80 (sub_180094D80.c)
 *     sub_180094E38 @ 0x180094E38 (sub_180094E38.c)
 *     sub_180094F98 @ 0x180094F98 (sub_180094F98.c)
 *     sub_180095024 @ 0x180095024 (sub_180095024.c)
 *     sub_18009519C @ 0x18009519C (sub_18009519C.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_180094AAC(void *Src, __int64 a2, __int64 a3)
{
  return memmove((void *)(a3 - (a2 - (_QWORD)Src)), Src, a2 - (_QWORD)Src);
}
