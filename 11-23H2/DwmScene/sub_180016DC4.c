/*
 * XREFs of sub_180016DC4 @ 0x180016DC4
 * Callers:
 *     sub_180016C68 @ 0x180016C68 (sub_180016C68.c)
 *     sub_180017094 @ 0x180017094 (sub_180017094.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_180016DC4(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
