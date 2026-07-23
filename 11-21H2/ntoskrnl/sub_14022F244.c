/*
 * XREFs of sub_14022F244 @ 0x14022F244
 * Callers:
 *     sub_14022F150 @ 0x14022F150 (sub_14022F150.c)
 *     sub_1402F27B0 @ 0x1402F27B0 (sub_1402F27B0.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_1403AD92C @ 0x1403AD92C (sub_1403AD92C.c)
 *     sub_14045B5B2 @ 0x14045B5B2 (sub_14045B5B2.c)
 * Callees:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_14022F244()
{
  _DWORD v1[68]; // [rsp+20h] [rbp-128h] BYREF

  v1[0] = 2097153;
  memset(&v1[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx(v1, (unsigned int)dword_140C2B1C0);
  return HalRequestClockInterrupt(0LL, v1);
}
