/*
 * XREFs of PartitionIoctlDsm @ 0x1C001D0A8
 * Callers:
 *     ?PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00027E0 (-PartitionDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PartitionSendRequest @ 0x1C0002A90 (PartitionSendRequest.c)
 *     PartitionLength @ 0x1C0002B2C (PartitionLength.c)
 *     PmEnumerateOverlaps @ 0x1C0004060 (PmEnumerateOverlaps.c)
 *     QuadAlignOffset @ 0x1C000B434 (QuadAlignOffset.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PartitionIoctlDsm(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v3; // r9d
  __int64 v4; // r13
  unsigned int v5; // r12d
  unsigned int Options; // r8d
  int v8; // ebx
  struct _IRP *MasterIrp; // rdi
  ULONG Flags; // r10d
  unsigned int *v11; // r14
  LONG IrpCount; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // r14d
  unsigned __int64 *v18; // rsi
  _QWORD **v19; // rax
  unsigned int v20; // ecx
  int v21; // r10d
  ULONG v22; // ebx
  unsigned int v23; // ecx
  unsigned int Length; // eax
  ULONG v25; // r12d
  struct _IRP *Pool2; // rax
  struct _IRP *v27; // rsi
  ULONG v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // eax
  LONG v31; // eax
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned __int64 *v34; // rbx
  unsigned __int64 v35; // rdi
  struct _IO_STACK_LOCATION *v36; // rax
  struct _IO_STACK_LOCATION *v37; // rax
  struct _IRP *v38; // rcx
  struct _IO_STACK_LOCATION *v39; // rax
  __int128 v41; // [rsp+30h] [rbp-28h] BYREF
  __int128 v42; // [rsp+40h] [rbp-18h]
  unsigned int *v44; // [rsp+A8h] [rbp+50h] BYREF
  char *v45; // [rsp+B0h] [rbp+58h] BYREF
  struct _IO_STACK_LOCATION *v46; // [rsp+B8h] [rbp+60h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v45 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v41 = 0LL;
  v46 = CurrentStackLocation;
  v42 = 0LL;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( Options < 0x1C )
    goto LABEL_2;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Flags = MasterIrp->Flags;
  v11 = (unsigned int *)&MasterIrp->MdlAddress + 1;
  v44 = (unsigned int *)&MasterIrp->MdlAddress + 1;
  if ( Flags )
  {
    v5 = Flags + *v11;
    if ( v5 < *v11 )
      goto LABEL_25;
    if ( *v11 < 0x1C || Options < v5 )
      goto LABEL_2;
  }
  else
  {
    v44 = (unsigned int *)&MasterIrp->MdlAddress + 1;
  }
  IrpCount = MasterIrp->AssociatedIrp.IrpCount;
  if ( IrpCount )
  {
    if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
      goto LABEL_2;
    v13 = *(&MasterIrp->Flags + 1);
    v3 = IrpCount + v13;
    if ( IrpCount + v13 >= v13 )
    {
      if ( v13 && (IrpCount & 0xF) == 0 && v13 >= 0x1C && Options >= v3 && (((_BYTE)MasterIrp + (_BYTE)v13) & 7) == 0 )
        goto LABEL_17;
LABEL_2:
      v8 = -1073741811;
LABEL_52:
      a2->IoStatus.Status = v8;
      IofCompleteRequest(a2, 0);
      return (unsigned int)v8;
    }
LABEL_25:
    v8 = -1073741675;
    goto LABEL_52;
  }
LABEL_17:
  if ( Flags && IrpCount )
  {
    v14 = *(&MasterIrp->Flags + 1);
    if ( !(*v11 >= v14 ? v3 <= *v11 : v5 <= v14) )
      goto LABEL_2;
  }
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v4 + 24) + 56LL), Executive, 0, 0, 0LL);
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    v16 = PartitionLength(v4, 1);
    v8 = PmEnumerateOverlaps(
           (_QWORD **)(v4 + 312),
           0LL,
           v16,
           (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))PartitionOverlapCount,
           (__int64)&v41);
    if ( v8 < 0 )
    {
LABEL_51:
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
      goto LABEL_52;
    }
  }
  else
  {
    v17 = MasterIrp->AssociatedIrp.IrpCount;
    v18 = (unsigned __int64 *)((char *)MasterIrp + *(&MasterIrp->Flags + 1));
    if ( v17 >= 0x10 )
    {
      v19 = (_QWORD **)(v4 + 312);
      do
      {
        v8 = PmEnumerateOverlaps(
               v19,
               *v18,
               v18[1],
               (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))PartitionOverlapCount,
               (__int64)&v41);
        if ( v8 < 0 )
          goto LABEL_51;
        v17 -= 16;
        v19 = (_QWORD **)(v4 + 312);
        v18 += 2;
      }
      while ( v17 >= 0x10 );
    }
    CurrentStackLocation = v46;
    v11 = v44;
  }
  if ( !(_DWORD)v42 )
  {
    v8 = -1073741811;
    goto LABEL_51;
  }
  v20 = 28;
  if ( MasterIrp->Flags )
    v20 = v5;
  LODWORD(v44) = v20;
  v8 = QuadAlignOffset(v20, &v44);
  if ( v8 < 0 )
    goto LABEL_51;
  v22 = (unsigned int)v44;
  v23 = (_DWORD)v44 + 16 * v21;
  if ( v23 < (unsigned int)v44 )
  {
    v8 = -1073741675;
    goto LABEL_51;
  }
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v23 >= Length )
    Length = (_DWORD)v44 + 16 * v21;
  v25 = Length;
  Pool2 = (struct _IRP *)ExAllocatePool2(74LL, Length, 1112108368LL);
  v27 = Pool2;
  if ( !Pool2 )
  {
    v8 = -1073741670;
    goto LABEL_51;
  }
  v28 = MasterIrp->Flags;
  v29 = *v11;
  *(_DWORD *)&Pool2->Type = 28;
  *(_DWORD *)(&Pool2->Size + 1) = *(_DWORD *)(&MasterIrp->Size + 1);
  v30 = (__int64)MasterIrp->MdlAddress & 0xFFFFFFFE;
  HIDWORD(v27->MdlAddress) = v29;
  LODWORD(v27->MdlAddress) = v30;
  v31 = 16 * v42;
  v27->Flags = v28;
  *(&v27->Flags + 1) = v22;
  v27->AssociatedIrp.IrpCount = v31;
  if ( v28 )
    memmove((char *)v27 + v29, (char *)MasterIrp + v29, v28);
  v45 = (char *)v27 + *(&v27->Flags + 1);
  if ( ((__int64)MasterIrp->MdlAddress & 1) != 0 )
  {
    v32 = PartitionLength(v4, 1);
    PmEnumerateOverlaps(
      (_QWORD **)(v4 + 312),
      0LL,
      v32,
      (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))PartitionOverlapDsm,
      (__int64)&v45);
  }
  else
  {
    v33 = MasterIrp->AssociatedIrp.IrpCount;
    v34 = (unsigned __int64 *)((char *)MasterIrp + *(&MasterIrp->Flags + 1));
    if ( v33 >= 0x10 )
    {
      v35 = (unsigned __int64)v33 >> 4;
      do
      {
        PmEnumerateOverlaps(
          (_QWORD **)(v4 + 312),
          *v34,
          v34[1],
          (__int64 (__fastcall *)(__int64, _QWORD *, unsigned __int64, unsigned __int64, __int64))PartitionOverlapDsm,
          (__int64)&v45);
        v34 += 2;
        --v35;
      }
      while ( v35 );
    }
  }
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v4 + 24) + 56LL), 0);
  v36 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v36[-1].MajorFunction = *(_OWORD *)&v36->MajorFunction;
  *(_OWORD *)&v36[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v36->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v36[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v36->Parameters.SetQuota + 6);
  v36[-1].FileObject = v36->FileObject;
  v36[-1].Control = 0;
  v37 = a2->Tail.Overlay.CurrentStackLocation;
  v37[-1].Flags |= 0x12u;
  v37[-1].Parameters.Create.Options = v25;
  v38 = a2->AssociatedIrp.MasterIrp;
  v39 = a2->Tail.Overlay.CurrentStackLocation;
  a2->AssociatedIrp.MasterIrp = v27;
  v39[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PartitionIoctlDsmCompletion;
  v39[-1].Context = v38;
  v39[-1].Control = -32;
  return (unsigned int)PartitionSendRequest(a1, a2);
}
