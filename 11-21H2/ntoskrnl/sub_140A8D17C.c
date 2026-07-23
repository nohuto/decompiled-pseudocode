/*
 * XREFs of sub_140A8D17C @ 0x140A8D17C
 * Callers:
 *     sub_140AA60B0 @ 0x140AA60B0 (sub_140AA60B0.c)
 *     sub_140AA6990 @ 0x140AA6990 (sub_140AA6990.c)
 *     sub_140AA6BB0 @ 0x140AA6BB0 (sub_140AA6BB0.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 *     IoGetAttachedDeviceReference @ 0x1403109B0 (IoGetAttachedDeviceReference.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

__int64 __fastcall sub_140A8D17C(
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
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct _IO_STACK_LOCATION *v17; // rax
  NTSTATUS Status; // r14d
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  LOBYTE(v10) = AttachedDeviceReference->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)AttachedDeviceReference, v10, 0LL);
  if ( Irp )
  {
    if ( a3 )
      sub_1402D3080();
    Irp->IoStatus.Status = -1073741637;
    Irp->IoStatus.Information = a5;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v14 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v15 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v16 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&sub_140A8D530;
    v17[-1].Context = &Event;
    v17[-1].Control = -32;
    Status = IofCallDriver(AttachedDeviceReference, Irp);
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = Irp->IoStatus.Status;
    }
    if ( a7 )
      *a7 = Status;
    if ( a6 )
      *a6 = Irp->IoStatus.Information;
    IoFreeIrp(Irp);
    return 1LL;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 0LL;
  }
}
