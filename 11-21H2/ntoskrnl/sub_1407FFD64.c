/*
 * XREFs of sub_1407FFD64 @ 0x1407FFD64
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 __fastcall sub_1407FFD64(_DWORD *a1)
{
  byte_140C547B8 = 0;
  a1[4] = 5;
  qword_140C22CF0 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140256CA0(&stru_14000F078);
  sub_140A4B974(37LL);
  sub_1407FE82C(a1, 0LL);
  qword_140C22CF8 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140256CA0(&stru_14000F088);
  return sub_140A4B974(38LL);
}
