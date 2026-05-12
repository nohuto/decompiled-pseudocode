/*
 * XREFs of StorResumeIoGateway @ 0x1C0059444
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     StorAcquireLockForAllGateways @ 0x1C0023AE8 (StorAcquireLockForAllGateways.c)
 *     StorReleaseLockForAllGateways @ 0x1C0023BEC (StorReleaseLockForAllGateways.c)
 *     StorIsSoftNumaEnabled @ 0x1C0059408 (StorIsSoftNumaEnabled.c)
 */

__int64 __fastcall StorResumeIoGateway(__int64 a1)
{
  __int64 v2; // rcx
  bool IsSoftNumaEnabled; // si
  char v4; // r8
  char v5; // dl
  KSPIN_LOCK *v6; // rcx
  signed __int32 v7; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  IsSoftNumaEnabled = StorIsSoftNumaEnabled(a1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 )
  {
    v6 = *(KSPIN_LOCK **)(v2 + 832);
    if ( v6 )
    {
      if ( IsSoftNumaEnabled )
      {
        v4 = StorAcquireLockForAllGateways(a1);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
        v4 = 1;
      }
    }
  }
  v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 860), 0xFFFFFFFF);
  if ( v4 )
  {
    if ( IsSoftNumaEnabled )
      StorReleaseLockForAllGateways(a1);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return (unsigned int)(v7 - 1);
}
