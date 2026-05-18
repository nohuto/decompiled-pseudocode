/*
 * XREFs of sub_1800181A0 @ 0x1800181A0
 * Callers:
 *     sub_1800184C0 @ 0x1800184C0 (sub_1800184C0.c)
 *     sub_18001CB90 @ 0x18001CB90 (sub_18001CB90.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800181A0(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
