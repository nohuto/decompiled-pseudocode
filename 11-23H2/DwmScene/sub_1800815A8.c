/*
 * XREFs of sub_1800815A8 @ 0x1800815A8
 * Callers:
 *     sub_180081B30 @ 0x180081B30 (sub_180081B30.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800815A8(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
