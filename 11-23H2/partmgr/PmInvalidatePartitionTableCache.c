/*
 * XREFs of PmInvalidatePartitionTableCache @ 0x1C0005B8C
 * Callers:
 *     ?PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000EA40 (-PmOfflineDiskWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?PmPropagateVerify@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C000ED40 (-PmPropagateVerify@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     PartitionIoctlGetLengthInfo @ 0x1C001C594 (PartitionIoctlGetLengthInfo.c)
 *     PartitionIoctlGetPartitionInfoEx @ 0x1C001C788 (PartitionIoctlGetPartitionInfoEx.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmIoctlUpdateProperties @ 0x1C001EA70 (PmIoctlUpdateProperties.c)
 *     PmIoctlSetDiskAttributes @ 0x1C001EAD4 (PmIoctlSetDiskAttributes.c)
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 *     PartitionIoctlGetPartitionAttributes @ 0x1C0022758 (PartitionIoctlGetPartitionAttributes.c)
 *     PartitionIoctlGetPartitionInfo @ 0x1C0025070 (PartitionIoctlGetPartitionInfo.c)
 *     PmIoctlUpdateDriveSize @ 0x1C002638C (PmIoctlUpdateDriveSize.c)
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 *     ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564 (-PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PmInvalidatePartitionTableCache(__int64 a1)
{
  KIRQL v2; // al
  void *v3; // rcx
  KIRQL v4; // si
  void *v5; // rcx
  void *v6; // rcx
  struct _DEVICE_OBJECT *v7; // rcx
  int NotificationStructure; // [rsp+20h] [rbp-38h] BYREF
  GUID v10; // [rsp+24h] [rbp-34h]
  int v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v11 = 0;
  v14 = 0;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 112));
  v3 = *(void **)(a1 + 1136);
  v4 = v2;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 1136) = 0LL;
  }
  v5 = *(void **)(a1 + 1128);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 1128) = 0LL;
  }
  v6 = *(void **)(a1 + 1104);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
  *(_DWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 112), v4);
  v12 = 0LL;
  v13 = -1;
  v7 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v10 = GUID_IO_DISK_LAYOUT_CHANGE;
  NotificationStructure = 2359297;
  return IoReportTargetDeviceChangeAsynchronous(v7, &NotificationStructure, 0LL, 0LL);
}
