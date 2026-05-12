/*
 * XREFs of StorResumeIoGateway @ 0x1C0019100
 * Callers:
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 * Callees:
 *     StorAcquireLockForAllGateways @ 0x1C0065E8C (StorAcquireLockForAllGateways.c)
 *     StorReleaseLockForAllGateways @ 0x1C0066420 (StorReleaseLockForAllGateways.c)
 */

__int64 __fastcall StorResumeIoGateway(__int64 a1, char a2)
{
  unsigned int v2; // esi
  char v4; // al
  KSPIN_LOCK *v5; // rcx
  signed __int32 v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 904);
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    v5 = *(KSPIN_LOCK **)(a1 + 896);
    if ( v5 )
    {
      if ( v2 > 1 )
      {
        v4 = StorAcquireLockForAllGateways(a1);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
        v4 = 1;
      }
    }
  }
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 924), 0xFFFFFFFF);
  if ( v4 )
  {
    if ( v2 > 1 )
      StorReleaseLockForAllGateways(a1);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return (unsigned int)(v6 - 1);
}
