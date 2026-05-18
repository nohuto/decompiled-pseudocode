/*
 * XREFs of sub_18004D5B4 @ 0x18004D5B4
 * Callers:
 *     sub_18004D538 @ 0x18004D538 (sub_18004D538.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18004D5B4(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
