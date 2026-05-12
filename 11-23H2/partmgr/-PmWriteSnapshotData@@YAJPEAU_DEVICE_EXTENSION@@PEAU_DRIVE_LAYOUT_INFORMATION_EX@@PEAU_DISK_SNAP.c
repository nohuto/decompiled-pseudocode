/*
 * XREFs of ?PmWriteSnapshotData@@YAJPEAU_DEVICE_EXTENSION@@PEAU_DRIVE_LAYOUT_INFORMATION_EX@@PEAU_DISK_SNAPSHOT_DATA@@K@Z @ 0x1C00278F0
 * Callers:
 *     PmSetSnapshotData @ 0x1C000FD58 (PmSetSnapshotData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 */

__int64 __fastcall PmWriteSnapshotData(
        struct _DEVICE_EXTENSION *a1,
        struct _DRIVE_LAYOUT_INFORMATION_EX *a2,
        struct _DISK_SNAPSHOT_DATA *a3,
        unsigned int a4)
{
  size_t v4; // rsi
  struct _DEVICE_OBJECT *v7; // rcx
  int DriveGeometry; // ebx
  DWORD PartitionCount; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  DWORD LowPart; // ebx
  DWORD v14; // r8d
  DWORD v15; // r9d
  union _LARGE_INTEGER v16; // rax
  LARGE_INTEGER *p_StartingOffset; // rdi
  void *Pool2; // rax
  void *v19; // rdi
  PIRP v20; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  __int128 v25; // [rsp+70h] [rbp+7h] BYREF
  __int64 v26; // [rsp+80h] [rbp+17h]

  v4 = a4;
  Timeout.QuadPart = 0LL;
  v26 = 0LL;
  v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
  memset(&Event, 0, sizeof(Event));
  v25 = 0LL;
  IoStatusBlock = 0LL;
  DriveGeometry = PmGetDriveGeometry(v7, &v25);
  if ( DriveGeometry < 0 )
    return (unsigned int)DriveGeometry;
  if ( a2->PartitionStyle )
  {
    if ( a2->PartitionStyle == 1 )
    {
      PartitionCount = a2->PartitionCount;
      v11 = 0LL;
      if ( PartitionCount )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)&a2->PartitionEntry[v11].Mbr - *(_QWORD *)&PARTITION_MSFT_SNAPSHOT_GUID.Data1;
          if ( !v12 )
            v12 = *(_QWORD *)a2->PartitionEntry[v11].Gpt.PartitionType.Data4
                - *(_QWORD *)PARTITION_MSFT_SNAPSHOT_GUID.Data4;
          if ( !v12 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= PartitionCount )
            return (unsigned int)-1073741275;
        }
        LowPart = a2->PartitionEntry[v11].PartitionLength.LowPart;
        Timeout = a2->PartitionEntry[v11].StartingOffset;
        goto LABEL_11;
      }
    }
    return (unsigned int)-1073741275;
  }
  v14 = 0;
  v15 = a2->PartitionCount;
  v16.QuadPart = (unsigned int)(7 * HIDWORD(v26));
  LowPart = 4 * HIDWORD(v26);
  Timeout = v16;
  if ( v15 )
  {
    p_StartingOffset = &a2->PartitionEntry[0].StartingOffset;
    while ( !LOBYTE(p_StartingOffset[3].LowPart)
         || p_StartingOffset->QuadPart >= v16.QuadPart && LowPart <= p_StartingOffset->QuadPart - v16.QuadPart )
    {
      ++v14;
      p_StartingOffset += 18;
      if ( v14 >= v15 )
        goto LABEL_11;
    }
    return (unsigned int)-1073741275;
  }
LABEL_11:
  if ( (unsigned int)v4 <= LowPart
    && (Pool2 = (void *)ExAllocatePool2(64LL, LowPart, 1146318160LL), (v19 = Pool2) != 0LL) )
  {
    memmove(Pool2, a3, v4);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20 = IoBuildSynchronousFsdRequest(4u, *((PDEVICE_OBJECT *)a1 + 1), v19, LowPart, &Timeout, &Event, &IoStatusBlock);
    if ( v20 )
    {
      v20->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
      DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v20);
      if ( DriveGeometry == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DriveGeometry = IoStatusBlock.Status;
      }
    }
    else
    {
      DriveGeometry = -1073741670;
    }
    ExFreePoolWithTag(v19, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)DriveGeometry;
}
