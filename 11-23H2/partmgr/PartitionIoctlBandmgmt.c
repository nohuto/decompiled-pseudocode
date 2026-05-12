/*
 * XREFs of PartitionIoctlBandmgmt @ 0x1C001C20C
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionOffset @ 0x1C0002784 (PartitionOffset.c)
 *     PartitionPassThrough @ 0x1C00027B4 (PartitionPassThrough.c)
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 */

__int64 __fastcall PartitionIoctlBandmgmt(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  _DWORD *v5; // rdi
  __int64 *p_AssociatedIrp; // r14
  _QWORD *p_MdlAddress; // rbx
  unsigned int v8; // r8d
  struct _IRP *MasterIrp; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // ebx

  v2 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0LL;
  p_AssociatedIrp = 0LL;
  p_MdlAddress = 0LL;
  v8 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x2D148Cu:
      p_AssociatedIrp = (__int64 *)&MasterIrp->AssociatedIrp;
      goto LABEL_3;
    case 0x2D149Cu:
    case 0x2DD494u:
      v8 = 24;
      v5 = &MasterIrp->Size + 1;
      p_MdlAddress = &MasterIrp->MdlAddress;
      break;
    case 0x2DD498u:
      v8 = 40;
      v5 = (_DWORD *)&MasterIrp->MdlAddress + 1;
      p_MdlAddress = &MasterIrp->Flags;
      break;
    case 0x2DD4A0u:
      v5 = &MasterIrp->Size + 1;
      p_MdlAddress = &MasterIrp->MdlAddress;
      goto LABEL_4;
    case 0x2DD4A8u:
LABEL_3:
      p_MdlAddress = &MasterIrp->Flags;
      v5 = (_DWORD *)&MasterIrp->MdlAddress + 1;
LABEL_4:
      v8 = 32;
      break;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < v8 )
  {
    v16 = -1073741820;
LABEL_29:
    a2->IoStatus.Status = v16;
    IofCompleteRequest(a2, 0);
    return v16;
  }
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v2 + 24) + 56LL), Executive, 0, 0, 0LL);
  if ( PartitionOffset(v2, 1) != *(_QWORD *)(v2 + 176) )
  {
    v16 = -1073741637;
LABEL_28:
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
    goto LABEL_29;
  }
  v11 = 0x7FFFFFFFFFFFFFFFLL;
  if ( *v5 != -1 || *p_MdlAddress == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_11;
  v12 = PartitionLength(v2, 1);
  if ( v13 >= v12 )
  {
    v16 = -1073741811;
    goto LABEL_28;
  }
  v14 = PartitionOffset(v2, 1);
  *p_MdlAddress = v15 + v14;
LABEL_11:
  if ( p_AssociatedIrp && *p_AssociatedIrp == v11 )
    *p_AssociatedIrp = PartitionLength(v2, 1);
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v2 + 24) + 56LL), 0);
  return (unsigned int)PartitionPassThrough(a1, (__int64)a2);
}
