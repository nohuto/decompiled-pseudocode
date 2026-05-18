/*
 * XREFs of sub_18008C920 @ 0x18008C920
 * Callers:
 *     sub_18008CD68 @ 0x18008CD68 (sub_18008CD68.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18008C920(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
