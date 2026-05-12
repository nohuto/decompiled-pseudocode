/*
 * XREFs of PartitionIoctlQueryProperty @ 0x1C001C65C
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionOffset @ 0x1C0002784 (PartitionOffset.c)
 *     PartitionPassThrough @ 0x1C00027B4 (PartitionPassThrough.c)
 *     PartitionForwardIrpSynchronously @ 0x1C001DBB8 (PartitionForwardIrpSynchronously.c)
 */

__int64 __fastcall PartitionIoctlQueryProperty(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v4; // rbp
  int v5; // edi
  struct _IRP *MasterIrp; // rsi
  __int64 v8; // r15
  char MdlAddress; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
  {
    v5 = -1073741820;
LABEL_8:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v5;
  }
  if ( *(_DWORD *)a2->AssociatedIrp.MasterIrp == 11 )
  {
    v5 = PartitionForwardIrpSynchronously();
    if ( v5 >= 0 && CurrentStackLocation->Parameters.Read.Length >= 0x28 )
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      if ( *(_QWORD *)&MasterIrp->Flags )
      {
        KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
        PartitionOffset(v4, 1);
        v8 = *(_QWORD *)&MasterIrp->Flags;
        MdlAddress = (char)MasterIrp->MdlAddress;
        PartitionOffset(v4, 1);
        LOBYTE(MasterIrp->MdlAddress) = MdlAddress | 0x20;
        v10 = PartitionOffset(v4, 1);
        v12 = v11 + v8;
        if ( v11 >= v13 )
          v12 = v11;
        MasterIrp->AssociatedIrp.MasterIrp = (struct _IRP *)(v12 - v10);
        KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
      }
    }
    goto LABEL_8;
  }
  return (unsigned int)PartitionPassThrough(a1, (__int64)a2);
}
