/*
 * XREFs of sub_1C0011880 @ 0x1C0011880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0011950 @ 0x1C0011950 (sub_1C0011950.c)
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C004B944 @ 0x1C004B944 (sub_1C004B944.c)
 *     sub_1C004C82C @ 0x1C004C82C (sub_1C004C82C.c)
 */

__int64 __fastcall sub_1C0011880(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *DeviceExtension; // rsi
  NTSTATUS Status; // edi
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rbp
  _QWORD *v9; // rax
  void *v10; // r14
  int v11; // edx
  int v12; // ecx
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 30LL, &unk_1C008A080, DeviceExtension, Irp);
  }
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = Irp->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_22;
  if ( (unsigned int)sub_1C0007798((__int64)DeviceExtension, 6) )
  {
    v6 = sub_1C0011950(DeviceExtension, Irp);
    Status = v6;
    if ( v6 != -2147483631 )
    {
      if ( v6 >= 0 )
      {
LABEL_9:
        sub_1C0011BE0(Irp);
        return 3221225494LL;
      }
LABEL_22:
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003F0C4(off_1C0093070->AttachedDevice, 31LL, &unk_1C008A080, DeviceExtension, Irp, Status);
      }
      goto LABEL_9;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    v9 = (_QWORD *)sub_1C0007CF4(64LL, 16LL, 1230463314LL, (__int64)DeviceObject);
    v10 = v9;
    if ( !WorkItem || !v9 )
    {
      Status = -1073741670;
      if ( WorkItem )
        IoFreeWorkItem(WorkItem);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x49576152u);
      goto LABEL_22;
    }
    *v9 = WorkItem;
    v9[1] = Irp;
    IoQueueWorkItem(WorkItem, sub_1C004C410, NormalWorkQueue, v9);
    if ( byte_1C0093BE8 )
    {
      v13 = 0LL;
      IoGetActivityIdIrp(Irp, &v13);
      if ( byte_1C0093A06 < 0 )
        sub_1C004B944(
          v12,
          v11,
          (unsigned int)&v13,
          DeviceExtension[582],
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 625),
          17);
    }
  }
  else
  {
    Status = sub_1C004C82C(DeviceObject, Irp, sub_1C004BFA0);
    if ( Status < 0 )
      goto LABEL_22;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 32LL, &unk_1C008A080, DeviceExtension, Irp, Status);
  }
  return 3221225494LL;
}
