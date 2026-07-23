/*
 * XREFs of VfIrpSendSynchronousIrp @ 0x140ACDAC8
 * Callers:
 *     VfPnpTestStartedPdoStack @ 0x140AE6E10 (VfPnpTestStartedPdoStack.c)
 *     VfPowerTestStartedPdoStack @ 0x140AE7780 (VfPowerTestStartedPdoStack.c)
 *     VfWmiTestStartedPdoStack @ 0x140AE79A0 (VfWmiTestStartedPdoStack.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x14025A390 (IoGetAttachedDeviceReference.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     IovUtilWatermarkIrp @ 0x140302EF4 (IovUtilWatermarkIrp.c)
 *     IoAllocateIrpEx @ 0x140311240 (IoAllocateIrpEx.c)
 */

__int64 __fastcall VfIrpSendSynchronousIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        ULONG_PTR a5,
        ULONG_PTR *a6,
        NTSTATUS *a7)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rbp
  __int64 v10; // rdx
  PSLIST_ENTRY Irp; // rax
  IRP *v12; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct _IO_STACK_LOCATION *v18; // rax
  NTSTATUS Status; // r14d
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  LOBYTE(v10) = AttachedDeviceReference->StackSize;
  Irp = IoAllocateIrpEx((__int64)AttachedDeviceReference, v10, 0LL);
  v12 = (IRP *)Irp;
  if ( Irp )
  {
    if ( a3 )
      IovUtilWatermarkIrp((__int64)Irp, 2LL);
    v12->IoStatus.Status = -1073741637;
    v12->IoStatus.Information = a5;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v15 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v16 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v15;
    v17 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v16;
    *(_QWORD *)&v16 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v17;
    CurrentStackLocation[-1].Context = (PVOID)v16;
    v18 = v12->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&ViIrpSynchronousCompletionRoutine;
    v18[-1].Context = &Event;
    v18[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, v12);
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v12->IoStatus.Status;
    }
    if ( a7 )
      *a7 = Status;
    if ( a6 )
      *a6 = v12->IoStatus.Information;
    IoFreeIrp(v12);
    return 1LL;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 0LL;
  }
}
