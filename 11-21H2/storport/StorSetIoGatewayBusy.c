/*
 * XREFs of StorSetIoGatewayBusy @ 0x1C0059678
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     StorSetAllIoGatewayBusy @ 0x1C00594F0 (StorSetAllIoGatewayBusy.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0059814 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall StorSetIoGatewayBusy(_DWORD *SpinLock, unsigned int a2)
{
  KSPIN_LOCK v3; // rax
  unsigned int v4; // r8d
  unsigned int v5; // eax
  bool v6; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v3 = *((_QWORD *)SpinLock + 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v3 + 840) <= 1u )
    {
      if ( !SpinLock[10] )
      {
        v4 = SpinLock[48];
        if ( v4 )
        {
          v5 = 0;
          if ( a2 <= v4 )
            v5 = v4 - a2;
          SpinLock[8] = v5;
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
          v6 = SpinLock[48] == 0;
          SpinLock[10] = 1;
          if ( v6 )
          {
            ++GatewayBusyStateRaceConditionCount;
            StorSetIoGatewayNotBusy(SpinLock, 0LL);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
    }
    else
    {
      StorSetAllIoGatewayBusy((__int64)SpinLock, a2);
    }
  }
}
