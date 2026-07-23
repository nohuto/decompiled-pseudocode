/*
 * XREFs of sub_140395B50 @ 0x140395B50
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     PoSetPowerState @ 0x1403A5380 (PoSetPowerState.c)
 */

__int64 __fastcall sub_140395B50(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int Status; // ebx
  ULONG Options; // ecx
  _DWORD *SecurityContext; // rcx
  int v9; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  if ( !CurrentStackLocation->MinorFunction )
    goto LABEL_9;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    v9 = dword_140C22284;
    *SecurityContext = dword_140C22284;
    SecurityContext[1] = v9;
    SecurityContext[2] = v9;
    goto LABEL_6;
  }
  if ( CurrentStackLocation->MinorFunction != 2 )
  {
    if ( CurrentStackLocation->MinorFunction == 3 )
      goto LABEL_6;
LABEL_9:
    Status = Irp->IoStatus.Status;
    goto LABEL_7;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options == 1 )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State);
      goto LABEL_6;
    }
    Status = -1073741637;
  }
  if ( Status == -1073741637 )
    goto LABEL_9;
LABEL_6:
  Irp->IoStatus.Status = Status;
LABEL_7:
  IofCompleteRequest(Irp, 0);
  return Status;
}
