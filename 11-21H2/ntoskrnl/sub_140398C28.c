/*
 * XREFs of sub_140398C28 @ 0x140398C28
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A52F10 @ 0x140A52F10 (sub_140A52F10.c)
 *     sub_140A52F2C @ 0x140A52F2C (sub_140A52F2C.c)
 */

__int64 sub_140398C28()
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  qword_140C22CB8 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140A52F2C();
  memset(Src, 0, 0x48uLL);
  Src[0] = 13;
  sub_14036AF00(Src, 0x48uLL, 1);
  qword_140C22CC0 = KeQueryPerformanceCounter(0LL).QuadPart;
  return sub_140A52F10();
}
