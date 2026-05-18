/*
 * XREFs of sub_180044D60 @ 0x180044D60
 * Callers:
 *     sub_180044CE4 @ 0x180044CE4 (sub_180044CE4.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_180044D60(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
