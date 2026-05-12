/*
 * XREFs of ?PmQueryRemovalRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0004ED4
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmWakeupNotificationWorkItem @ 0x1C000353C (PmWakeupNotificationWorkItem.c)
 */

__int64 __fastcall PmQueryRemovalRelations(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rdi
  struct _LIST_ENTRY *v4; // rsi
  KIRQL v5; // r14
  struct _LIST_ENTRY *v6; // rax
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rcx
  int Status; // esi

  DeviceExtension = (char *)a1->DeviceExtension;
  v4 = (struct _LIST_ENTRY *)(DeviceExtension + 672);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeviceExtension + 14);
  if ( v4->Flink == v4 )
  {
    *((_DWORD *)DeviceExtension + 128) |= 0x40u;
    PmWakeupNotificationWorkItem((__int64)DeviceExtension);
  }
  v6 = (struct _LIST_ENTRY *)*((_QWORD *)DeviceExtension + 85);
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&a2->Tail.Overlay.ListEntry;
  if ( v6->Flink != v4 )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = v4;
  a2->Tail.Overlay.ListEntry.Blink = v6;
  v6->Flink = &p_ListEntry->ListEntry;
  *((_QWORD *)DeviceExtension + 85) = p_ListEntry;
  KeReleaseSpinLock((PKSPIN_LOCK)DeviceExtension + 14, v5);
  KeWaitForSingleObject(DeviceExtension + 824, Executive, 0, 0, 0LL);
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
  {
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
  }
  return (unsigned int)Status;
}
