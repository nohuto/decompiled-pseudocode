/*
 * XREFs of KeRemoveByKeyDeviceQueue @ 0x140570810
 * Callers:
 *     sub_14055838C @ 0x14055838C (sub_14055838C.c)
 *     sub_140614EC0 @ 0x140614EC0 (sub_140614EC0.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140257B80 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  struct _KDEVICE_QUEUE_ENTRY *i; // rax
  bool v6; // cc
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( DeviceQueue->DeviceListHead.Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
  }
  else
  {
    if ( LODWORD(DeviceQueue->DeviceListHead.Blink[1].Flink) >= SortKey )
    {
      i = (struct _KDEVICE_QUEUE_ENTRY *)(*(_QWORD *)&DeviceQueue->32 >> 8);
      if ( i )
      {
        v6 = SortKey <= *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10);
        if ( SortKey > *(_DWORD *)((*(_QWORD *)&DeviceQueue->32 >> 8) + 0x10) )
          goto LABEL_10;
      }
      for ( i = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
            ;
            i = (struct _KDEVICE_QUEUE_ENTRY *)i->DeviceListEntry.Flink )
      {
        v6 = SortKey <= i->SortKey;
LABEL_10:
        Flink = i;
        if ( v6 )
          break;
      }
    }
    else
    {
      Flink = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
    }
    Blink = 0LL;
    if ( Flink->DeviceListEntry.Blink != &DeviceQueue->DeviceListHead )
      Blink = Flink->DeviceListEntry.Blink;
    DeviceQueue->1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)((unsigned __int8)*(_DWORD *)&DeviceQueue->Busy | ((_QWORD)Blink << 8));
    v8 = Flink->DeviceListEntry.Flink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink
      || (v9 = Flink->DeviceListEntry.Blink, (struct _KDEVICE_QUEUE_ENTRY *)v9->Flink != Flink) )
    {
      __fastfail(3u);
    }
    v9->Flink = v8;
    v8->Blink = v9;
    Flink->Inserted = 0;
  }
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}
