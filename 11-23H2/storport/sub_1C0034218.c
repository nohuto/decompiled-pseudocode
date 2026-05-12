/*
 * XREFs of sub_1C0034218 @ 0x1C0034218
 * Callers:
 *     sub_1C0036230 @ 0x1C0036230 (sub_1C0036230.c)
 * Callees:
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 */

char __fastcall sub_1C0034218(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v4; // di
  _QWORD *v5; // r14
  PIO_WORKITEM *v6; // rsi
  PIO_WORKITEM WorkItem; // rax
  char v8; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 5696), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  v5 = *(_QWORD **)(a1 + 144);
  while ( v5 != (_QWORD *)(a1 + 144) )
  {
    v6 = (PIO_WORKITEM *)sub_1C0007CF4(64LL, 16LL, 1230463314LL, *(_QWORD *)(a1 + 8));
    if ( !v6 )
      goto LABEL_10;
    WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)*(v5 - 6));
    *v6 = WorkItem;
    if ( !WorkItem )
    {
      ExFreePoolWithTag(v6, 0x49576152u);
LABEL_10:
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(a1 + 32), BusRelations);
      break;
    }
    v6[1] = a2;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5696));
    sub_1C00071D4((__int64)(v5 - 7), 0LL, 0LL);
    IoQueueWorkItem(*v6, WorkerRoutine, CriticalWorkQueue, v6);
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
