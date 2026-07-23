/*
 * XREFs of PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194
 * Callers:
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140957B5C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     PopPushPowerStateTransitionRecord @ 0x140AA62CC (PopPushPowerStateTransitionRecord.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140AA9120 (PopAcquireTransitionLockAfterSleep.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x1402B6810 (ObReferenceObjectByPointerWithTag.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PoPushPowerStateTransitionRecordWithCallback(
        PVOID Object,
        PVOID a2,
        LARGE_INTEGER a3,
        LARGE_INTEGER a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  __int64 v10; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( (unsigned int)(dword_140C3CFC4 - 1) <= 1 )
  {
    if ( Object && a2 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E6C8);
      v9 = (unsigned int)(dword_140C3E6C0 + 1);
      if ( (unsigned int)v9 >= 0x40 )
      {
        v4 = -1073741801;
      }
      else
      {
        ++dword_140C3E6C0;
        ObReferenceObjectByPointerWithTag(Object, 0x10000000u, 0LL, 0, 0x746C6644u);
        ObReferenceObjectByPointerWithTag(a2, 0x10000000u, 0LL, 0, 0x746C6644u);
        v10 = 5 * v9;
        PopStateTransitonBlameStack[v10 + 1].QuadPart = (LONGLONG)Object;
        PopStateTransitonBlameStack[v10].QuadPart = (LONGLONG)a2;
        PopStateTransitonBlameStack[v10 + 3] = a3;
        PopStateTransitonBlameStack[v10 + 4] = a4;
        PopStateTransitonBlameStack[v10 + 2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
      }
      PopReleaseRwLock((__int64 *)&xmmword_140C3E6C8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v4;
}
