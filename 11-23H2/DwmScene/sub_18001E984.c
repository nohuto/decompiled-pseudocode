/*
 * XREFs of sub_18001E984 @ 0x18001E984
 * Callers:
 *     sub_18001E924 @ 0x18001E924 (sub_18001E924.c)
 *     sub_18001EEF8 @ 0x18001EEF8 (sub_18001EEF8.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18001E984(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
