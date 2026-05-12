/*
 * XREFs of ?PmReadPartitionAttributesMbr@@YAJPEAU_DEVICE_EXTENSION@@PEAPEAU_PARTITION_ATTRIBUTES_TABLE@@PEAK@Z @ 0x1C0024CC0
 * Callers:
 *     PmGetPartitionAttributesMbr @ 0x1C0004CCC (PmGetPartitionAttributesMbr.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     PmGetDriveGeometry @ 0x1C002006C (PmGetDriveGeometry.c)
 */

__int64 __fastcall PmReadPartitionAttributesMbr(
        struct _DEVICE_EXTENSION *a1,
        struct _PARTITION_ATTRIBUTES_TABLE **a2,
        unsigned int *a3)
{
  struct _DEVICE_OBJECT *v5; // rcx
  int DriveGeometry; // ebx
  ULONG v8; // esi
  void *Pool2; // rdi
  PIRP v10; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF
  ULONG Length[2]; // [rsp+80h] [rbp+17h]

  *a2 = 0LL;
  *a3 = 0;
  v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 1);
  *(_QWORD *)Length = 0LL;
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  IoStatusBlock = 0LL;
  DriveGeometry = PmGetDriveGeometry(v5, &v15);
  if ( DriveGeometry >= 0 )
  {
    v8 = Length[1];
    Timeout.QuadPart = 2 * Length[1];
    Pool2 = (void *)ExAllocatePool2(66LL, Length[1], 1413573968LL);
    if ( Pool2 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = IoBuildSynchronousFsdRequest(3u, *((PDEVICE_OBJECT *)a1 + 1), Pool2, v8, &Timeout, &Event, &IoStatusBlock);
      if ( v10 )
      {
        v10->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
        DriveGeometry = IofCallDriver(*((PDEVICE_OBJECT *)a1 + 1), v10);
        if ( DriveGeometry == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          DriveGeometry = IoStatusBlock.Status;
        }
        if ( DriveGeometry >= 0 )
        {
          *a2 = (struct _PARTITION_ATTRIBUTES_TABLE *)Pool2;
          *a3 = v8;
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
  }
  return (unsigned int)DriveGeometry;
}
