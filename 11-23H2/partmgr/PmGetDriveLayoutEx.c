/*
 * XREFs of PmGetDriveLayoutEx @ 0x1C0002B60
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 *     PmIoctlGetDriveLayoutEx @ 0x1C001C494 (PmIoctlGetDriveLayoutEx.c)
 *     PartitionIoctlGetLengthInfo @ 0x1C001C594 (PartitionIoctlGetLengthInfo.c)
 *     PartitionIoctlGetPartitionInfoEx @ 0x1C001C788 (PartitionIoctlGetPartitionInfoEx.c)
 *     PartitionIoctlSetPartitionInfo @ 0x1C001E74C (PartitionIoctlSetPartitionInfo.c)
 *     PmCreateDisk @ 0x1C001E9A4 (PmCreateDisk.c)
 *     PmIoctlUpdateProperties @ 0x1C001EA70 (PmIoctlUpdateProperties.c)
 *     PmIoctlSetDiskAttributes @ 0x1C001EAD4 (PmIoctlSetDiskAttributes.c)
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 *     ?PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z @ 0x1C0021608 (-PmCollectTelemetry@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_DISK_TELEMETRY_INFO@@@Z.c)
 *     PmIoctlGetDriveGeometryEx @ 0x1C00225C4 (PmIoctlGetDriveGeometryEx.c)
 *     PartitionIoctlGetPartitionAttributes @ 0x1C0022758 (PartitionIoctlGetPartitionAttributes.c)
 *     PmSetSystemCriticalFlag @ 0x1C0022C2C (PmSetSystemCriticalFlag.c)
 *     PmGetSnapshotInfo @ 0x1C00233F4 (PmGetSnapshotInfo.c)
 *     PmIoctlGetPartitionInfoEx @ 0x1C00235A8 (PmIoctlGetPartitionInfoEx.c)
 *     PartitionIoctlGetPartitionInfo @ 0x1C0025070 (PartitionIoctlGetPartitionInfo.c)
 *     PartitionIoctlManageBypassIo @ 0x1C0025198 (PartitionIoctlManageBypassIo.c)
 *     PartitionIoctlSetPartitionAttributes @ 0x1C00253E0 (PartitionIoctlSetPartitionAttributes.c)
 *     PartitionIoctlSetPartitionInfoEx @ 0x1C0025564 (PartitionIoctlSetPartitionInfoEx.c)
 *     PmIoctlGetDriveLayout @ 0x1C00257CC (PmIoctlGetDriveLayout.c)
 *     PmIoctlGrowPartition @ 0x1C0025BC0 (PmIoctlGrowPartition.c)
 *     PmIoctlQueryDiskSignature @ 0x1C0025CD0 (PmIoctlQueryDiskSignature.c)
 *     PmIoctlUpdateDriveSize @ 0x1C002638C (PmIoctlUpdateDriveSize.c)
 *     PmSetPartitionInformationEx @ 0x1C0026BE0 (PmSetPartitionInformationEx.c)
 *     ?PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z @ 0x1C0027564 (-PmCreateSnapshotPartition@@YAJPEAU_DEVICE_EXTENSION@@@Z.c)
 *     PmSetSnapshotInfo @ 0x1C0027BA4 (PmSetSnapshotInfo.c)
 * Callees:
 *     ?PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1C0002D88 (-PmUpdateLayoutEx@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     ?IsUnused@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0006DB0 (-IsUnused@SC_PART_ENTRY@@QEAAEXZ.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     ?IsRecognized@SC_PART_ENTRY@@QEAAEXZ @ 0x1C0010C88 (-IsRecognized@SC_PART_ENTRY@@QEAAEXZ.c)
 *     PmReadPartitionTable @ 0x1C0021460 (PmReadPartitionTable.c)
 *     PmSetDeviceParameterBinary @ 0x1C00220DC (PmSetDeviceParameterBinary.c)
 */

__int64 __fastcall PmGetDriveLayoutEx(KSPIN_LOCK *a1, _QWORD *a2)
{
  signed int updated; // edi
  _BYTE *DeviceExtension; // r12
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // bl
  KIRQL v8; // al
  struct _DRIVE_LAYOUT_INFORMATION_EX *v9; // rsi
  __int64 v10; // r14
  KIRQL v11; // bl
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  void *v17; // rax
  void *v18; // rbx
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool2; // rax
  KIRQL v20; // al
  KIRQL v21; // bl
  __int64 v22; // r10
  char v23; // r15
  __int64 v24; // r9
  int v25; // r10d
  __int64 v26; // r9
  __int64 v27; // r11
  char v28; // al
  bool v29; // zf
  KIRQL v30; // al
  unsigned __int64 v31; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v32; // [rsp+78h] [rbp+10h]
  unsigned __int64 QpcTimeStamp; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v31) = 0;
  v32 = 0;
  updated = 0;
  DeviceExtension = PmControlObject->DeviceExtension;
  if ( a2 )
    *a2 = 0LL;
  v6 = a1 + 14;
  v7 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
  if ( *((int *)a1 + 278) < 0 )
  {
    QpcTimeStamp = 0LL;
    if ( KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp) - a1[140] < 0x11E1A300 )
      updated = *((_DWORD *)a1 + 278);
  }
  KeReleaseSpinLock(v6, v7);
  if ( updated < 0 )
    return (unsigned int)updated;
  v8 = KeAcquireSpinLockRaiseToDpc(v6);
  v9 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)a1[138];
  a1[138] = 0LL;
  QpcTimeStamp = (unsigned __int64)v9;
  KeReleaseSpinLock(v6, v8);
  v10 = 1LL;
  if ( v9 )
    goto LABEL_6;
  updated = PmReadPartitionTable(a1[1], &QpcTimeStamp);
  if ( updated < 0 )
  {
    if ( (*(_DWORD *)(a1[1] + 52) & 1) == 0 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc(v6);
      v31 = 0LL;
      v21 = v20;
      *((_DWORD *)a1 + 278) = updated;
      a1[140] = KeQueryUnbiasedInterruptTimePrecise(&v31);
      KeReleaseSpinLock(v6, v21);
      v9 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)QpcTimeStamp;
      goto LABEL_11;
    }
    Pool2 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)ExAllocatePool2(64LL, 192LL, 1414557008LL);
    v9 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    Pool2->PartitionStyle = 0;
    Pool2->PartitionCount = 1;
    Pool2->PartitionEntry[0].PartitionStyle = PARTITION_STYLE_MBR;
    v32 = 1;
  }
  else
  {
    v9 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)QpcTimeStamp;
  }
  PmSetDeviceParameterBinary(a1, L"PartitionTableCache", v9, 144 * v9->PartitionCount + 48);
  if ( !DeviceExtension[166] )
    goto LABEL_6;
  if ( v9->PartitionStyle != 1 )
    goto LABEL_6;
  v22 = 0LL;
  if ( !v9->PartitionCount )
    goto LABEL_6;
  v23 = 0;
  do
  {
    if ( !SC_PART_ENTRY::IsUnused((SC_PART_ENTRY *)&v9->PartitionEntry[v22]) )
    {
      if ( *(_DWORD *)(v24 + 48) != 1 )
        goto LABEL_38;
      if ( SC_PART_ENTRY::IsRecognized((SC_PART_ENTRY *)(v24 + 48)) )
      {
        if ( (v27 & 0x200000000000000LL) == 0 )
          goto LABEL_38;
      }
      else if ( (v27 & 1) == 0 )
      {
LABEL_38:
        v28 = 1;
        LOBYTE(v31) = 1;
        goto LABEL_42;
      }
      *(_BYTE *)(v26 + 77) = 1;
      v23 = 1;
    }
    v28 = v31;
LABEL_42:
    v22 = (unsigned int)(v25 + 1);
  }
  while ( (unsigned int)v22 < v9->PartitionCount );
  v29 = v23 == 0;
  v6 = a1 + 14;
  if ( !v29 && !v28 )
  {
    v30 = KeAcquireSpinLockRaiseToDpc(a1 + 14);
    *((_DWORD *)a1 + 128) |= 0x2000u;
    KeReleaseSpinLock(a1 + 14, v30);
  }
LABEL_6:
  updated = PmUpdateLayoutEx((struct _DEVICE_EXTENSION *)a1, v9, v32);
  if ( updated >= 0 )
  {
    if ( !a2 )
      goto LABEL_8;
    v13 = 0xFFFFFFFFLL;
    v14 = 144LL * v9->PartitionCount;
    if ( v14 > 0xFFFFFFFF )
    {
      updated = -1073741675;
    }
    else
    {
      v15 = v14 + 48;
      if ( (unsigned int)v14 < 0xFFFFFFD0 )
        v13 = v15;
      updated = (unsigned int)v14 >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( v15 >= 0x30 )
      {
        v16 = v13;
        v17 = (void *)ExAllocatePool2(66LL, v13, 1414557008LL);
        v18 = v17;
        if ( v17 )
        {
          memmove(v17, v9, v16);
          *a2 = v18;
LABEL_8:
          v11 = KeAcquireSpinLockRaiseToDpc(v6);
          if ( !v9->PartitionCount )
            v10 = 0LL;
          memmove(a1 + 114, v9, 144 * v10 + 48);
          a1[138] = (KSPIN_LOCK)v9;
          v9 = 0LL;
          *((_DWORD *)a1 + 278) = updated;
          a1[140] = 0LL;
          KeReleaseSpinLock(v6, v11);
        }
        else
        {
          updated = -1073741670;
        }
      }
    }
  }
LABEL_11:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)updated;
}
