/*
 * XREFs of sub_18001FEFC @ 0x18001FEFC
 * Callers:
 *     sub_180020530 @ 0x180020530 (sub_180020530.c)
 *     sub_180020AFC @ 0x180020AFC (sub_180020AFC.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18001FEFC(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
