/*
 * XREFs of ExfTryAcquirePushLockSharedEx @ 0x140220664
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     PfLockSharedTryAcquire @ 0x140360258 (PfLockSharedTryAcquire.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpTryAcquireFannedOutPushLockShared @ 0x14039E3FC (ExpTryAcquireFannedOutPushLockShared.c)
 *     IopProcessIoTracking @ 0x140559C3C (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x1405B7EB4 (MiProcessTransitionHeatBatch.c)
 *     DifExfTryAcquirePushLockSharedWrapper @ 0x14060A0A0 (DifExfTryAcquirePushLockSharedWrapper.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x14063C4B0 (ExfTryAcquirePushLockShared.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x14069A534 (ObpLockUnrelatedDirectoryShared.c)
 * Callees:
 *     <none>
 */

char __fastcall ExfTryAcquirePushLockSharedEx(signed __int64 *a1, char a2)
{
  char v2; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v4 = *a1;
  while ( (v4 & 3) == 0 || (v4 & 1) == 0 && (a2 & 4) == 0 || (v4 & 2) == 0 && (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = (v4 | 1) + 16;
    if ( (v4 & 2) != 0 )
      v5 = v4 | 1;
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a1, v5, v4);
    if ( v6 == v4 )
      return 1;
  }
  return v2;
}
