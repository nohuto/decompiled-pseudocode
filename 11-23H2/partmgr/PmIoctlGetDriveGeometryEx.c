/*
 * XREFs of PmIoctlGetDriveGeometryEx @ 0x1C00225C4
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmIoctlGetDriveGeometryEx(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v4; // rsi
  unsigned int Length; // r14d
  struct _IRP *MasterIrp; // rbx
  int Status; // ebp
  __int64 v8; // rax
  int v9; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length < 0x20 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    memset(a2->AssociatedIrp.MasterIrp, 0, Length);
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    CurrentStackLocation->Parameters.Read.Length = 24;
    CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 458752;
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    Status = a2->IoStatus.Status;
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.Read.Length = 8;
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart = 475228;
      a2->AssociatedIrp.MasterIrp = (struct _IRP *)&MasterIrp->AssociatedIrp;
      IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      Status = a2->IoStatus.Status;
      a2->AssociatedIrp.MasterIrp = MasterIrp;
      if ( Status >= 0 )
      {
        v8 = 40LL;
        if ( Length < 0x28 )
          v8 = Length;
        a2->IoStatus.Information = v8;
        if ( Length >= 0x38 )
        {
          a2->IoStatus.Information = 56LL;
          KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
          Status = PmGetDriveLayoutEx((KSPIN_LOCK *)v4, 0LL);
          if ( Status >= 0 )
          {
            LODWORD(MasterIrp->ThreadListEntry.Flink) = 24;
            v9 = *(_DWORD *)(v4 + 912);
            HIDWORD(MasterIrp->ThreadListEntry.Flink) = v9;
            if ( v9 )
            {
              if ( v9 == 1 )
                *(_OWORD *)&MasterIrp->ThreadListEntry.Blink = *(_OWORD *)(v4 + 920);
            }
            else
            {
              LODWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(v4 + 920);
              HIDWORD(MasterIrp->ThreadListEntry.Blink) = *(_DWORD *)(v4 + 924);
            }
          }
          KeReleaseMutex((PRKMUTEX)(v4 + 56), 0);
          if ( Length >= 0x70 )
          {
            a2->IoStatus.Information = 112LL;
            *(struct _LIST_ENTRY **)((char *)&MasterIrp->ThreadListEntry.Flink
                                   + LODWORD(MasterIrp->ThreadListEntry.Flink)) = (struct _LIST_ENTRY *)56;
          }
        }
      }
    }
  }
  return (unsigned int)Status;
}
