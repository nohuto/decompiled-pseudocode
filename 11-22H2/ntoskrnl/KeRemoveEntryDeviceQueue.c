/*
 * XREFs of KeRemoveEntryDeviceQueue @ 0x1405735F0
 * Callers:
 *     DifKeRemoveEntryDeviceQueueWrapper @ 0x1405E54B0 (DifKeRemoveEntryDeviceQueueWrapper.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRemoveEntryDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  BOOLEAN Inserted; // si
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v7; // rcx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-28h] BYREF

  memset(&v15, 0, sizeof(v15));
  KeAcquireInStackQueuedSpinLock(&DeviceQueue->Lock, &v15);
  Inserted = DeviceQueueEntry->Inserted;
  if ( Inserted == 1 )
  {
    DeviceQueueEntry->Inserted = 0;
    Flink = DeviceQueueEntry->DeviceListEntry.Flink;
    Blink = DeviceQueueEntry->DeviceListEntry.Blink;
    if ( (PKDEVICE_QUEUE_ENTRY)DeviceQueueEntry->DeviceListEntry.Flink->Blink != DeviceQueueEntry
      || (PKDEVICE_QUEUE_ENTRY)Blink->Flink != DeviceQueueEntry )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v7 = DeviceQueue->1;
    if ( DeviceQueueEntry == (PKDEVICE_QUEUE_ENTRY)(*(__int64 *)&v7 >> 8) )
      DeviceQueue->1 = v7;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15);
  OldIrql = v15.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v15.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return Inserted;
}
