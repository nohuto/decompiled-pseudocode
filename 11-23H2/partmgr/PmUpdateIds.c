/*
 * XREFs of PmUpdateIds @ 0x1C002745C
 * Callers:
 *     PmValidateIds @ 0x1C001CA28 (PmValidateIds.c)
 *     PmIoctlSetDiskAttributes @ 0x1C001EAD4 (PmIoctlSetDiskAttributes.c)
 * Callees:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 *     PmWritePartitionTable @ 0x1C001ED64 (PmWritePartitionTable.c)
 *     ?PmUpdateIdsGpt@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C00271CC (-PmUpdateIdsGpt@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     ?PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C002734C (-PmUpdateIdsMbr@@YAXPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 */

__int64 __fastcall PmUpdateIds(struct _DEVICE_EXTENSION *a1, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  char v4; // bp
  char *DeviceExtension; // r15
  int SnapshotData; // eax
  UCHAR *v7; // rbx
  int v8; // esi
  unsigned int v10; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  P = 0LL;
  v4 = 0;
  DeviceExtension = (char *)PmControlObject->DeviceExtension;
  SnapshotData = PmGetSnapshotData((KSPIN_LOCK *)a1, a2, &P, &v10);
  v7 = (UCHAR *)P;
  v8 = SnapshotData;
  if ( SnapshotData >= 0 )
  {
    if ( *((_DWORD *)P + 5) == 1 )
    {
      *((_DWORD *)P + 5) = 2;
      v4 = 1;
    }
    KeWaitForSingleObject(DeviceExtension + 104, Executive, 0, 0, 0LL);
    if ( a2->PartitionStyle )
    {
      if ( a2->PartitionStyle == 1 )
        PmUpdateIdsGpt(a2, v4);
    }
    else
    {
      PmUpdateIdsMbr(a2);
    }
    KeReleaseMutex((PRKMUTEX)(DeviceExtension + 104), 0);
    v8 = PmWritePartitionTable(*((_QWORD *)a1 + 1), (struct SC_DISK_LAYOUT *)a2);
    if ( v8 >= 0 && v4 )
      v8 = PmSetSnapshotData(a1, a2, v7, v10);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v8;
}
