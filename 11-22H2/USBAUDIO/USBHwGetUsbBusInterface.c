/*
 * XREFs of USBHwGetUsbBusInterface @ 0x1C003D610
 * Callers:
 *     USBDeviceStart @ 0x1C003CF90 (USBDeviceStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwGetUsbBusInterface(__int64 a1, _QWORD *a2)
{
  NTSTATUS Status; // ebx
  PIRP Irp; // rsi
  void *Pool2; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v8; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  *a2 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Status = -1073741670;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
  if ( Irp )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 72LL, 1096972357LL);
    if ( Pool2 )
    {
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBD_SyncCompletionRoutine;
      CurrentStackLocation[-1].Context = &Event;
      CurrentStackLocation[-1].Control = -32;
      v8 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_WORD *)v8 = 2075;
      *(_QWORD *)(v8 + 24) = Pool2;
      *(_QWORD *)(v8 + 8) = &USB_BUS_INTERFACE_USBDI_GUID;
      *(_DWORD *)(v8 + 16) = 65608;
      Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), Irp);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = Irp->IoStatus.Status;
      }
      if ( Status < 0 )
      {
        ExFreePool(Pool2);
        Pool2 = 0LL;
      }
    }
    IoFreeIrp(Irp);
    if ( Status >= 0 )
    {
      if ( Pool2 )
        *a2 = Pool2;
      else
        return (unsigned int)-1073741438;
    }
  }
  return (unsigned int)Status;
}
