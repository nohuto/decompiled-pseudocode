/*
 * XREFs of sub_1407FFDDC @ 0x1407FFDDC
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 __fastcall sub_1407FFDDC(_DWORD *a1)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  a1[4] = 6;
  qword_140C22D00 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140256CA0(&stru_14000F098);
  sub_140A4B974(39LL);
  sub_1407FE82C(a1, (__int64)&v3);
  qword_140C22D08 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140256CA0(&stru_14000F0A8);
  return sub_140A4B974(40LL);
}
