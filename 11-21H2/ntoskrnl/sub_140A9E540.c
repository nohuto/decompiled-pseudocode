/*
 * XREFs of sub_140A9E540 @ 0x140A9E540
 * Callers:
 *     <none>
 * Callees:
 *     IoDetachDevice @ 0x140256080 (IoDetachDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1403A7530 (IoReleaseRemoveLockAndWaitEx.c)
 */

NTSTATUS __fastcall sub_140A9E540(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdx
  int v5; // eax
  int v6; // edi
  struct _DEVICE_OBJECT *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  UCHAR MinorFunction; // cl
  struct _IO_STACK_LOCATION *v11; // rax
  IRP *v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rcx
  struct _IO_STACK_LOCATION *v14; // rax
  NTSTATUS Status; // ebp
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v16 = DeviceExtension;
  while ( (DeviceExtension[25] & 1) == 0 )
    _mm_pause();
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v16 + 1, Irp, &byte_140A7DE10, 1u, 0x20u);
  v6 = v5;
  if ( v5 < 0 )
  {
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)v16 + 1);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( !MinorFunction )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = (__int64 (__fastcall *)(__int64, __int64))sub_140A9E960;
    v12 = Irp;
    v11[-1].Control = -32;
LABEL_14:
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v13;
    v11[-1].Context = &v16;
    return IofCallDriver(v8, v12);
  }
  if ( MinorFunction != 2 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = Irp;
    v11[-1].Control = -32;
    if ( MinorFunction == 22 )
      v13 = sub_140A9E300;
    else
      v13 = (__int64 (__fastcall *)(__int64, __int64))sub_140A9E8F0;
    goto LABEL_14;
  }
  KeInitializeEvent((PRKEVENT)(v16 + 16), NotificationEvent, 0);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140A9E930;
  v14[-1].Context = &v16;
  v14[-1].Control = -32;
  Status = IofCallDriver(v8, Irp);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(v16 + 16, Executive, 0, 0, 0LL);
    Status = Irp->IoStatus.Status;
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v16 + 1, Irp, 0x20u);
  IoDetachDevice(v8);
  IoDeleteDevice(DeviceObject);
  IofCompleteRequest(Irp, 0);
  return Status;
}
