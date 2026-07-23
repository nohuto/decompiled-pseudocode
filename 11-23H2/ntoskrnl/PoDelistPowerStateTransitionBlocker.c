/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140AA5FDC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D430 (PopUmpoSendPowerMessage.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140957C94 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BBB0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopManageTransitionRecordRequest @ 0x140984698 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x140A00858 (ExSwapinWorkerThreads.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA67C0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140C3CF24 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E5E8);
    if ( (unsigned int)dword_140C3E5E0 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = 5LL * (unsigned int)dword_140C3E5E0;
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E5E0 + 1].QuadPart);
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[v1].QuadPart);
      *(_OWORD *)&PopStateTransitonBlameStack[v1].LowPart = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v1 + 2].LowPart = 0LL;
      PopStateTransitonBlameStack[v1 + 4].QuadPart = 0LL;
      --dword_140C3E5E0;
    }
    PopReleaseRwLock((__int64 *)&xmmword_140C3E5E8);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v0;
}
