/*
 * XREFs of PmIoctlGetPartitionInfoEx @ 0x1C00235A8
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmIoctlGetPartitionInfoEx(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int Status; // esi
  struct _IRP *MasterIrp; // rbx
  int v7; // edx
  __int128 v8; // xmm1
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.Length >= 0x90 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    CurrentStackLocation->Parameters.Read.Length = 8;
    CurrentStackLocation->Parameters.Create.Options = 0;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 475228;
    a2->AssociatedIrp.MasterIrp = (struct _IRP *)&v10;
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v2 + 16), a2);
    Status = a2->IoStatus.Status;
    a2->AssociatedIrp.MasterIrp = MasterIrp;
    if ( Status >= 0 )
    {
      memset(MasterIrp, 0, 0x90uLL);
      KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
      Status = PmGetDriveLayoutEx((KSPIN_LOCK *)v2, 0LL);
      if ( Status >= 0 )
      {
        v7 = *(_DWORD *)(v2 + 912);
        *(_DWORD *)&MasterIrp->Type = v7;
        MasterIrp->MdlAddress = 0LL;
        *(_QWORD *)&MasterIrp->Flags = v10;
        MasterIrp->AssociatedIrp.IrpCount = 0;
        BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = 0;
        if ( v7 )
        {
          if ( v7 == 1 )
          {
            MasterIrp->ThreadListEntry = (LIST_ENTRY)GUID_NULL;
            v8 = *(_OWORD *)(v2 + 920);
            *(_QWORD *)&MasterIrp->RequestorMode = 0LL;
            *(_OWORD *)&MasterIrp->IoStatus.Status = v8;
            LOWORD(MasterIrp->UserIosb) = 0;
          }
        }
        else
        {
          LOWORD(MasterIrp->ThreadListEntry.Flink) = 0;
          BYTE2(MasterIrp->ThreadListEntry.Flink) = 0;
          HIDWORD(MasterIrp->ThreadListEntry.Flink) = 0;
        }
        a2->IoStatus.Information = 144LL;
      }
      KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)Status;
}
