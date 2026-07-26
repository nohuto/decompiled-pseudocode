/*
 * XREFs of ?ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0076394
 * Callers:
 *     ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C006E660 (-ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovInitVf(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // ebx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v5; // rax

  v2 = 0;
  Irp = IoAllocateIrp(a1->NextDeviceObject->StackSize + 1, 0);
  if ( Irp )
  {
    KeInitializeEvent(&a1->InvalidateBlockEvent, NotificationEvent, 0);
    a1->InvalidateBlockIoctlVf = Irp;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 15;
    CurrentStackLocation[-1].DeviceObject = a1->NextDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2801671;
    CurrentStackLocation[-1].Parameters.Read.Length = 8;
    Irp->UserBuffer = &a1->InvalidateBlockVfParams;
    v5 = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->IoStatus.Status = -1073741637;
    v5[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisIovInvalidateBlockCompletion;
    v5[-1].Context = a1;
    v5[-1].Control = -32;
    if ( IofCallDriver(a1->NextDeviceObject, Irp) != 259 )
      KeSetEvent(&a1->InvalidateBlockEvent, 0, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
