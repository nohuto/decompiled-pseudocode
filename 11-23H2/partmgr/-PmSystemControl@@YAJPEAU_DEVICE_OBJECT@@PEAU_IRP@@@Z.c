/*
 * XREFs of ?PmSystemControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rsi
  unsigned int v4; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rax
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+30h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v4 = 0;
  IrpDisposition = IrpForward;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 13 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 16 )
    {
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      if ( Parameters->NamedPipeType == 1 )
        *((_QWORD *)DeviceExtension + 89) = *(_QWORD *)&Parameters->CompletionMode;
      else
        v4 = -1073741637;
    }
    else
    {
      v4 = -1073741820;
    }
    Irp->IoStatus.Information = 0LL;
    Irp->IoStatus.Status = v4;
    goto LABEL_10;
  }
  v4 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 728), DeviceObject, Irp, &IrpDisposition);
  if ( IrpDisposition )
  {
    if ( IrpDisposition != IrpNotCompleted )
    {
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), Irp);
    }
LABEL_10:
    IofCompleteRequest(Irp, 0);
  }
  return v4;
}
