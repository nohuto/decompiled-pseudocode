/*
 * XREFs of ?PmWritePartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAU_PARTITION_ATTRIBUTES_TABLE@@K@Z @ 0x1C0024E3C
 * Callers:
 *     PmSetPartitionAttributesMbr @ 0x1C000E374 (PmSetPartitionAttributesMbr.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     memset @ 0x1C000BA40 (memset.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 */

__int64 __fastcall PmWritePartitionAttributesMbr(struct _DEVICE_EXTENSION *a1, struct _PARTITION_ATTRIBUTES_TABLE *a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  int DriveGeometry; // ebx
  ULONG v6; // ebx
  __int64 Pool2; // rax
  void *v8; // rdi
  __int64 v9; // xmm1_8
  PIRP v10; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  __int128 v15; // [rsp+70h] [rbp+27h] BYREF
  ULONG Length[2]; // [rsp+80h] [rbp+37h]

  *(_QWORD *)Length = 0LL;
  v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  IoStatusBlock = 0LL;
  DriveGeometry = PmGetDriveGeometry(v4, &v15);
  if ( DriveGeometry >= 0 )
  {
    v6 = Length[1];
    Timeout.QuadPart = 2 * Length[1];
    if ( Length[1] >= 0x18 && (Pool2 = ExAllocatePool2(66LL, Length[1], 1413573968LL), (v8 = (void *)Pool2) != 0LL) )
    {
      v9 = *((_QWORD *)a2 + 2);
      *(_OWORD *)Pool2 = *(_OWORD *)a2;
      *(_QWORD *)(Pool2 + 16) = v9;
      memset((void *)(Pool2 + 24), 0, v6 - 24);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = IoBuildSynchronousFsdRequest(4u, *((PDEVICE_OBJECT *)a1 + 1), v8, v6, &Timeout, &Event, &IoStatusBlock);
      if ( v10 )
      {
        v10->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
        DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v10);
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
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)DriveGeometry;
}
