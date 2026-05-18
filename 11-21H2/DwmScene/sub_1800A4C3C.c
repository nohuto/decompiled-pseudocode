/*
 * XREFs of sub_1800A4C3C @ 0x1800A4C3C
 * Callers:
 *     sub_1800A4984 @ 0x1800A4984 (sub_1800A4984.c)
 *     sub_1800A4AE4 @ 0x1800A4AE4 (sub_1800A4AE4.c)
 *     sub_1800A4B70 @ 0x1800A4B70 (sub_1800A4B70.c)
 *     sub_1800A4DAC @ 0x1800A4DAC (sub_1800A4DAC.c)
 *     sub_1800A4E4C @ 0x1800A4E4C (sub_1800A4E4C.c)
 *     sub_1800A5224 @ 0x1800A5224 (sub_1800A5224.c)
 *     sub_1800A5274 @ 0x1800A5274 (sub_1800A5274.c)
 *     sub_1800A52D0 @ 0x1800A52D0 (sub_1800A52D0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 */

__int64 __fastcall sub_1800A4C3C(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
