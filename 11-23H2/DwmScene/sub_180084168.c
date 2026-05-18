/*
 * XREFs of sub_180084168 @ 0x180084168
 * Callers:
 *     sub_180084E14 @ 0x180084E14 (sub_180084E14.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_180084168(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
