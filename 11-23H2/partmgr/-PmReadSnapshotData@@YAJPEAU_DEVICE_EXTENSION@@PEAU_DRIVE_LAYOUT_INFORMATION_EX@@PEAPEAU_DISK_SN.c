/*
 * XREFs of ?PmReadSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAPEAU_DISK_SNAPSHOT_DATA@@PEAK@Z @ 0x1C001FF7C
 * Callers:
 *     PmGetSnapshotData @ 0x1C0003EE0 (PmGetSnapshotData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 */

__int64 __fastcall PmReadSnapshotData(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        struct _DISK_SNAPSHOT_DATA **a3,
        unsigned int *a4)
{
  __int64 v6; // rcx
  NTSTATUS DriveGeometry; // ebx
  DWORD v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  DWORD LowPart; // esi
  DWORD v15; // r8d
  DWORD PartitionCount; // r9d
  union _LARGE_INTEGER v17; // rax
  LARGE_INTEGER *p_StartingOffset; // rdi
  void *Pool2; // rdi
  PIRP v20; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  __int128 v24; // [rsp+70h] [rbp+7h] BYREF
  __int64 v25; // [rsp+80h] [rbp+17h]

  *a3 = 0LL;
  *a4 = 0;
  Timeout.QuadPart = 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v25 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v24 = 0LL;
  IoStatusBlock = 0LL;
  DriveGeometry = PmGetDriveGeometry(v6, &v24);
  if ( DriveGeometry < 0 )
    return (unsigned int)DriveGeometry;
  if ( !a2->PartitionStyle )
  {
    v15 = 0;
    PartitionCount = a2->PartitionCount;
    v17.QuadPart = (unsigned int)(7 * HIDWORD(v25));
    LowPart = 4 * HIDWORD(v25);
    Timeout = v17;
    if ( !PartitionCount )
      goto LABEL_18;
    p_StartingOffset = &a2->PartitionEntry[0].StartingOffset;
    while ( !LOBYTE(p_StartingOffset[3].LowPart)
         || p_StartingOffset->QuadPart >= v17.QuadPart && LowPart <= p_StartingOffset->QuadPart - v17.QuadPart )
    {
      ++v15;
      p_StartingOffset += 18;
      if ( v15 >= PartitionCount )
        goto LABEL_18;
    }
    return (unsigned int)-1073741275;
  }
  if ( a2->PartitionStyle != 1 )
    return (unsigned int)-1073741275;
  v10 = a2->PartitionCount;
  v11 = 0LL;
  if ( !v10 )
    return (unsigned int)-1073741275;
  while ( 1 )
  {
    v12 = *(_QWORD *)&a2->PartitionEntry[v11].Mbr - *(_QWORD *)&PARTITION_MSFT_SNAPSHOT_GUID.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)a2->PartitionEntry[v11].Gpt.PartitionType.Data4 - *(_QWORD *)PARTITION_MSFT_SNAPSHOT_GUID.Data4;
    if ( !v12 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v10 )
      return (unsigned int)-1073741275;
  }
  LowPart = a2->PartitionEntry[v11].PartitionLength.LowPart;
  Timeout = a2->PartitionEntry[v11].StartingOffset;
LABEL_18:
  Pool2 = (void *)ExAllocatePool2(66LL, LowPart, 1146318160LL);
  if ( Pool2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20 = IoBuildSynchronousFsdRequest(
            3u,
            *((PDEVICE_OBJECT *)a1 + 1),
            Pool2,
            LowPart,
            &Timeout,
            &Event,
            &IoStatusBlock);
    if ( v20 )
    {
      v20->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
      DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v20);
      if ( DriveGeometry == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DriveGeometry = IoStatusBlock.Status;
      }
      if ( DriveGeometry >= 0 )
      {
        *a3 = (struct _DISK_SNAPSHOT_DATA *)Pool2;
        *a4 = LowPart;
        return (unsigned int)DriveGeometry;
      }
    }
    else
    {
      DriveGeometry = -1073741670;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DriveGeometry;
}
