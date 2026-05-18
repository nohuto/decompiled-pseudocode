/*
 * XREFs of sub_18009BA58 @ 0x18009BA58
 * Callers:
 *     sub_18009BBC0 @ 0x18009BBC0 (sub_18009BBC0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18009BA58(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
