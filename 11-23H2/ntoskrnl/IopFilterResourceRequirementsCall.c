/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140790420
 * Callers:
 *     IopQueryDeviceResources @ 0x14078FE14 (IopQueryDeviceResources.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x14025A390 (IoGetAttachedDeviceReference.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     IovUtilWatermarkIrp @ 0x140302EF4 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v7; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v11 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a2 )
    {
      v7->IoStatus.Status = 0;
      *((_QWORD *)&v11 + 1) = a2;
      v7->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v11) = -1073741637;
      v7->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7->UserIosb = (PIO_STATUS_BLOCK)&v11;
    v7->UserEvent = &Event;
    v7->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v7);
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v9 = IofCallDriver(AttachedDeviceReference, v7);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v9 = v11;
    }
    *a3 = *((_QWORD *)&v11 + 1);
  }
  else
  {
    v9 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v9;
}
