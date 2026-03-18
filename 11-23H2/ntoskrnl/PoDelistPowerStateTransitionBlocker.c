/*
 * XREFs of PoDelistPowerStateTransitionBlocker @ 0x140AA616C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140957A94 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopManageTransitionRecordRequest @ 0x140984498 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6950 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 */

__int64 PoDelistPowerStateTransitionBlocker()
{
  unsigned int v0; // edi
  __int64 v1; // rbx

  v0 = 0;
  if ( (unsigned int)(dword_140C3D264 - 1) <= 1 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C3E5E8);
    if ( (unsigned int)dword_140C3E5E0 >= 0x40 )
    {
      v0 = -1073741801;
    }
    else
    {
      v1 = 5LL * (unsigned int)dword_140C3E5E0;
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[5 * (unsigned int)dword_140C3E5E0 + 1]);
      ObfDereferenceObject((PVOID)PopStateTransitonBlameStack[v1]);
      *(_OWORD *)&PopStateTransitonBlameStack[v1] = 0LL;
      *(_OWORD *)&PopStateTransitonBlameStack[v1 + 2] = 0LL;
      PopStateTransitonBlameStack[v1 + 4] = 0LL;
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
