/*
 * XREFs of sub_18008E8D8 @ 0x18008E8D8
 * Callers:
 *     sub_18008EFBC @ 0x18008EFBC (sub_18008EFBC.c)
 *     sub_180093A34 @ 0x180093A34 (sub_180093A34.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_18008E8D8(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
