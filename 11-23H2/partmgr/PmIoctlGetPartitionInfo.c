/*
 * XREFs of PmIoctlGetPartitionInfo @ 0x1C0025960
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlGetPartitionInfo(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v4; // rbx
  int Status; // ebp
  struct _IRP *MasterIrp; // rsi
  struct _MDL *v7; // rdx
  struct _MDL *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  if ( CurrentStackLocation->Parameters.Read.Length >= 0x20 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    CurrentStackLocation->Parameters.Create.Options = 0;
    CurrentStackLocation->Parameters.Read.Length = 8;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 475228;
    a2->AssociatedIrp.MasterIrp = (struct _IRP *)&v9;
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    Status = a2->IoStatus.Status;
    a2->AssociatedIrp.MasterIrp = MasterIrp;
    if ( Status >= 0 )
    {
      *(_OWORD *)&MasterIrp->Type = 0LL;
      *(_OWORD *)&MasterIrp->Flags = 0LL;
      KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
      *(_QWORD *)&MasterIrp->Type = 0LL;
      v7 = v9;
      MasterIrp->Flags = 0;
      *(&MasterIrp->Flags + 1) = 0;
      MasterIrp->AssociatedIrp.IrpCount = 0;
      MasterIrp->MdlAddress = v7;
      a2->IoStatus.Information = 32LL;
      KeReleaseMutex((PRKMUTEX)(v4 + 56), 0);
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}
