/*
 * XREFs of sub_1800815E0 @ 0x1800815E0
 * Callers:
 *     sub_180081A84 @ 0x180081A84 (sub_180081A84.c)
 *     sub_180084018 @ 0x180084018 (sub_180084018.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800815E0(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
