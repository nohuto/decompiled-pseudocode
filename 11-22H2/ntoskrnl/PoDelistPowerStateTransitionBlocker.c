/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140AA622C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140957B44 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BA60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopManageTransitionRecordRequest @ 0x140984548 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B850 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140C3CFC4 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E6C8);
    if ( (unsigned int)dword_140C3E6C0 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = 5LL * (unsigned int)dword_140C3E6C0;
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E6C0 + 1].QuadPart);
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[v1].QuadPart);
      *(_OWORD *)&PopStateTransitonBlameStack[v1].LowPart = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v1 + 2].LowPart = 0LL;
      PopStateTransitonBlameStack[v1 + 4].QuadPart = 0LL;
      --dword_140C3E6C0;
    }
    PopReleaseRwLock((__int64 *)&xmmword_140C3E6C8);
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v0;
}
