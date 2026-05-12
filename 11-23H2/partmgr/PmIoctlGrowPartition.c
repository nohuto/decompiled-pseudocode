/*
 * XREFs of PmIoctlGrowPartition @ 0x1C0025BC0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     PmGrowPartition @ 0x1C000F6AC (PmGrowPartition.c)
 */

__int64 __fastcall PmIoctlGrowPartition(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int Status; // ebx
  __int64 v5; // rbp
  struct _IRP *MasterIrp; // rsi
  int DriveLayout; // eax
  PVOID v8; // rdi
  PVOID P; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  v11 = 0LL;
  P = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->MdlAddress )
    {
      CurrentStackLocation->Parameters.Create.Options = 0;
      CurrentStackLocation->Parameters.Read.Length = 8;
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 475228;
      a2->AssociatedIrp.MasterIrp = (struct _IRP *)&v11;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v5 + 16), a2);
      Status = a2->IoStatus.Status;
      a2->AssociatedIrp.MasterIrp = MasterIrp;
      if ( Status >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v5 + 56), Executive, 0, 0, 0LL);
        DriveLayout = PmGetDriveLayoutEx((KSPIN_LOCK *)v5, &P);
        v8 = P;
        Status = DriveLayout;
        if ( DriveLayout >= 0 )
          Status = PmGrowPartition((KSPIN_LOCK *)v5, (__int64)P, (int *)&MasterIrp->Type, v11);
        KeReleaseMutex((PRKMUTEX)(v5 + 56), 0);
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return (unsigned int)Status;
}
