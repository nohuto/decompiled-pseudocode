/*
 * XREFs of RaQueryInterface @ 0x1C004DD88
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaInitializeBus @ 0x1C008DBFC (RaInitializeBus.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5)
{
  PIRP Irp; // rax
  IRP *v9; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v9 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = 1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
  Status = RaSendIrpSynchronous(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v9->IoStatus.Status;
  IoFreeIrp(v9);
  return (unsigned int)Status;
}
