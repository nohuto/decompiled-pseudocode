/*
 * XREFs of sub_1800E30E0 @ 0x1800E30E0
 * Callers:
 *     sub_1800E3210 @ 0x1800E3210 (sub_1800E3210.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800E30E0(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
