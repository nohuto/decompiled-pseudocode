/*
 * XREFs of KeRemoveDeviceQueue @ 0x140257A90
 * Callers:
 *     IoFreeController @ 0x140257920 (IoFreeController.c)
 *     sub_140257964 @ 0x140257964 (sub_140257964.c)
 *     sub_1404585B4 @ 0x1404585B4 (sub_1404585B4.c)
 *     sub_140614FF0 @ 0x140614FF0 (sub_140614FF0.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140257B80 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  struct _KDEVICE_QUEUE_ENTRY *v2; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _KDEVICE_QUEUE *Flink; // rcx
  __int64 v6; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  Flink = (struct _KDEVICE_QUEUE *)DeviceQueue->DeviceListHead.Flink;
  if ( Flink == (struct _KDEVICE_QUEUE *)&DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    v2 = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    if ( Flink->DeviceListHead.Flink != p_DeviceListHead
      || (v6 = *(_QWORD *)&Flink->Type, *(struct _KDEVICE_QUEUE_ENTRY **)(v6 + 8) != v2) )
    {
      __fastfail(3u);
    }
    p_DeviceListHead->Flink = (struct _LIST_ENTRY *)v6;
    *(_QWORD *)(v6 + 8) = p_DeviceListHead;
    v2->Inserted = 0;
    v7 = DeviceQueue->1;
    if ( v2 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v7 >> 8) )
      DeviceQueue->1 = v7;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v2;
}
