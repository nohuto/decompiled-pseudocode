/*
 * XREFs of sub_180016D8C @ 0x180016D8C
 * Callers:
 *     sub_1800170D4 @ 0x1800170D4 (sub_1800170D4.c)
 *     sub_180018F4C @ 0x180018F4C (sub_180018F4C.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_180016D8C(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
