/*
 * XREFs of PmWakeupNotificationWorkItem @ 0x1C000353C
 * Callers:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4 (-PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     ?PmQueryRemovalRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0004ED4 (-PmQueryRemovalRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmSetDiskAttributes @ 0x1C0009178 (PmSetDiskAttributes.c)
 *     ?PmQueryBusRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A390 (-PmQueryBusRelations@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z @ 0x1C000AEE4 (-PmVolumeManagerArrival@@YAJPEAU_CONTROL_EXTENSION@@PEAU_UNICODE_STRING@@@Z.c)
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 *     PmInternalIoctlQueryPartitions @ 0x1C000E568 (PmInternalIoctlQueryPartitions.c)
 *     PmIoctlReauctionDisk @ 0x1C000E6E4 (PmIoctlReauctionDisk.c)
 *     ?PmPowerCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000EC60 (-PmPowerCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?PmQueryRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000EE44 (-PmQueryRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     PmRedirectRequest @ 0x1C000F320 (PmRedirectRequest.c)
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 * Callees:
 *     <none>
 */

void __fastcall PmWakeupNotificationWorkItem(__int64 a1)
{
  struct _IO_WORKITEM *v2; // rcx

  if ( !*(_BYTE *)(a1 + 816)
    && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 120), *(PVOID *)(a1 + 848), File, 1u, 0x20u) >= 0 )
  {
    KeClearEvent((PRKEVENT)(a1 + 824));
    v2 = *(struct _IO_WORKITEM **)(a1 + 848);
    *(_BYTE *)(a1 + 816) = 1;
    IoQueueWorkItem(v2, (PIO_WORKITEM_ROUTINE)PmNotificationWorkItem, CriticalWorkQueue, 0LL);
  }
}
