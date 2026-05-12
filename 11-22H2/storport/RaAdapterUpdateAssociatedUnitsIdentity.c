/*
 * XREFs of RaAdapterUpdateAssociatedUnitsIdentity @ 0x1C0033D04
 * Callers:
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0035D20 (RaidAdapterHwFirmwareActivateIoctl.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007014 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

char __fastcall RaAdapterUpdateAssociatedUnitsIdentity(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v4; // di
  _QWORD *v5; // r14
  PIO_WORKITEM *Pool; // rsi
  PIO_WORKITEM WorkItem; // rax
  char v8; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 5696), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
  v5 = *(_QWORD **)(a1 + 152);
  while ( v5 != (_QWORD *)(a1 + 152) )
  {
    Pool = (PIO_WORKITEM *)RaidAllocatePool(64LL, 16LL, 1230463314LL, *(_QWORD *)(a1 + 8));
    if ( !Pool )
      goto LABEL_10;
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)*(v5 - 6));
    *Pool = WorkItem;
    if ( !WorkItem )
    {
      ExFreePoolWithTag(Pool, 0x49576152u);
LABEL_10:
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
      break;
    }
    Pool[1] = a2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5696));
    RaUnitAcquireRemoveLock((__int64)(v5 - 7), 0LL, 0LL);
    IoQueueWorkItem(*Pool, RaidUpdateUnitIdentityWorkRoutine, CriticalWorkQueue, Pool);
    v5 = (_QWORD *)*v5;
    v8 = v4;
    if ( !v4 )
      v8 = 1;
    v4 = v8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 5696), 0, 1) == 1 )
      return 0;
    else
      return _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5696), 0xFFFFFFFF) != 1 ? v4 : 0;
  }
  return v4;
}
