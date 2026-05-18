/*
 * XREFs of sub_180094ACC @ 0x180094ACC
 * Callers:
 *     sub_180094888 @ 0x180094888 (sub_180094888.c)
 *     sub_180094984 @ 0x180094984 (sub_180094984.c)
 *     sub_180094A10 @ 0x180094A10 (sub_180094A10.c)
 *     sub_180094C48 @ 0x180094C48 (sub_180094C48.c)
 *     sub_180094CE4 @ 0x180094CE4 (sub_180094CE4.c)
 *     sub_1800950B8 @ 0x1800950B8 (sub_1800950B8.c)
 *     sub_180095108 @ 0x180095108 (sub_180095108.c)
 *     sub_180095164 @ 0x180095164 (sub_180095164.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_180094ACC(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
