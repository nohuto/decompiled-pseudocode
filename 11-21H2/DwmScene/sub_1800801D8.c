/*
 * XREFs of sub_1800801D8 @ 0x1800801D8
 * Callers:
 *     sub_180080380 @ 0x180080380 (sub_180080380.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800801D8(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
