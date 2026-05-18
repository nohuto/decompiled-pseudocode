/*
 * XREFs of sub_18007C9C8 @ 0x18007C9C8
 * Callers:
 *     sub_18007C94C @ 0x18007C94C (sub_18007C94C.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18007C9C8(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
