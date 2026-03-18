/*
 * XREFs of USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C008752C
 * Callers:
 *     USBD_CreateHandle @ 0x1C0087C0C (USBD_CreateHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBDInternal_BuildAndSendQueryInterfaceSynchronously(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        const _GUID *Guid,
        _INTERFACE *Interface)
{
  PIRP Irp; // rax
  _IRP *v9; // rbx
  unsigned int Status; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v12; // rax
  _KEVENT event; // [rsp+40h] [rbp-28h] BYREF

  memset(&event, 0, sizeof(event));
  KeInitializeEvent(&event, NotificationEvent, 0);
  Irp = IoAllocateIrp(TargetDeviceObject->StackSize, 0);
  v9 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)Interface;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Guid;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = Interface->Size;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = Interface->Version;
    if ( IoSetCompletionRoutineEx(DeviceObject, Irp, USBD_SyncCompletionRoutine, &event, 1u, 1u, 1u) < 0 )
    {
      v12 = v9->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = USBD_SyncCompletionRoutine;
      v12[-1].Context = &event;
      v12[-1].Control = -32;
    }
    v9->IoStatus.Status = -1073741637;
    Status = IofCallDriver(TargetDeviceObject, v9);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
      Status = v9->IoStatus.Status;
    }
    IoFreeIrp(v9);
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Failed to allocate Query Interface Irp for Target Device Ojbect 0x%p\n", TargetDeviceObject);
    return (unsigned int)-1073741670;
  }
  return Status;
}
