/*
 * XREFs of __tailMerge_rtworkq_dll @ 0x140031A5B
 * Callers:
 *     __imp_load_RtwqUnlockWorkQueue @ 0x140031A4F (__imp_load_RtwqUnlockWorkQueue.c)
 *     __imp_load_RtwqAllocateWorkQueue @ 0x140031ADA (__imp_load_RtwqAllocateWorkQueue.c)
 *     __imp_load_RtwqEndRegisterWorkQueueWithMMCSS @ 0x140031AEC (__imp_load_RtwqEndRegisterWorkQueueWithMMCSS.c)
 *     __imp_load_RtwqStartup @ 0x140031AFE (__imp_load_RtwqStartup.c)
 *     __imp_load_RtwqBeginRegisterWorkQueueWithMMCSS @ 0x140031B10 (__imp_load_RtwqBeginRegisterWorkQueueWithMMCSS.c)
 *     __imp_load_RtwqShutdown @ 0x140031B22 (__imp_load_RtwqShutdown.c)
 *     __imp_load_RtwqLockSharedWorkQueue @ 0x140031B34 (__imp_load_RtwqLockSharedWorkQueue.c)
 *     __imp_load_RtwqBeginUnregisterWorkQueueWithMMCSS @ 0x140031B46 (__imp_load_RtwqBeginUnregisterWorkQueueWithMMCSS.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14002D490 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rtworkq_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_rtworkq_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
