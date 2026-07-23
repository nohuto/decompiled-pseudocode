/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140939960
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055A55C @ 0x14055A55C (sub_14055A55C.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     sub_140933E58 @ 0x140933E58 (sub_140933E58.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  HANDLE v11; // r12
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int16 v16; // ax
  bool v17; // zf
  KPROCESSOR_MODE v18; // al
  ULONG v19; // r8d
  PSID v20; // r13
  __int64 v21; // rax
  ULONG v22; // eax
  ULONG v23; // r14d
  ULONG v24; // r15d
  ULONG v25; // ecx
  NTSTATUS result; // eax
  unsigned int *Pool2; // rbx
  unsigned int *v28; // rax
  PSID v29; // rax
  NTSTATUS v30; // esi
  struct _FILE_OBJECT *v31; // r14
  _DWORD *v32; // r12
  bool v33; // si
  struct _KTHREAD *v34; // rax
  volatile __int32 *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  NTSTATUS v39; // ebx
  struct _KEVENT *v40; // rax
  __int64 v41; // rdx
  IRP *v42; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v44; // rax
  struct _KEVENT *v45; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v47; // r15
  ULONG Flags; // eax
  __int64 v49; // rax
  ULONG v50; // ebx
  PMDL Mdl; // rcx
  __int64 v52; // r8
  char v53; // al
  char v54; // [rsp+40h] [rbp-98h]
  KPROCESSOR_MODE v55[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  unsigned int *v58; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v60; // [rsp+70h] [rbp-68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h] BYREF
  struct _KTHREAD *v62; // [rsp+80h] [rbp-58h]
  unsigned int v63[20]; // [rsp+88h] [rbp-50h] BYREF

  v11 = FileHandle;
  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v55[7] = 0LL;
  LODWORD(v60) = 0;
  Sid = 0LL;
  v58 = 0LL;
  *(_OWORD *)v63 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v62 = CurrentThread;
  v13 = *((_BYTE *)CurrentThread + 562);
  v55[0] = v13;
  if ( v13 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = *((_QWORD *)CurrentThread + 23);
    if ( !*(_QWORD *)(v15 + 1408) )
      goto LABEL_9;
    v16 = *(_WORD *)(v15 + 2412);
    if ( v16 == 332 || (v17 = v16 == 452, v18 = 0, v17) )
      v18 = 1;
    v55[3] = v18;
    v19 = 4;
    if ( !v18 )
LABEL_9:
      v19 = 8;
    ProbeForWrite(Buffer, Length, v19);
    v20 = StartSid;
    if ( StartSid )
    {
      v21 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v55[1] = *(_BYTE *)v21;
      v22 = RtlLengthRequiredSid(*(unsigned __int8 *)v21);
      v23 = v22;
      LODWORD(v60) = v22;
      if ( v22 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v22 > 0x7FFFFFFF0000LL || (char *)StartSid + v22 < StartSid )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v55[1] = 0;
      v23 = (unsigned int)v60;
    }
    if ( SidList && (v24 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v25 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v25 > ~v23 )
        return -1073741811;
      if ( v25 < SidListLength )
        return -1073741811;
      Pool2 = (unsigned int *)ExAllocatePool2(97LL, v25 + v23, 538996553LL);
      *(_QWORD *)&v55[7] = Pool2;
      v58 = Pool2;
      memmove(Pool2, SidList, SidListLength);
    }
    else
    {
      v24 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(289LL, v23, 538996553LL);
        *(_QWORD *)&v55[7] = Pool2;
      }
      else
      {
        Pool2 = *(unsigned int **)&v55[7];
      }
    }
    if ( StartSid )
    {
      Sid = (char *)Pool2 + ((v24 + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v23);
      *((_BYTE *)Sid + 1) = v55[1];
    }
    v13 = v55[0];
    v11 = FileHandle;
  }
  else
  {
    v24 = SidListLength;
    if ( SidList )
    {
      v28 = v58;
      if ( SidListLength )
        v28 = (unsigned int *)SidList;
      v58 = v28;
    }
    v29 = Sid;
    v20 = StartSid;
    if ( StartSid )
      v29 = StartSid;
    Sid = v29;
    Pool2 = *(unsigned int **)&v55[7];
  }
  if ( v58 )
  {
    DeviceObject = 0LL;
    v30 = sub_140933E58(v58, v24, &DeviceObject);
    if ( v30 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)DeviceObject;
LABEL_46:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v30;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741704;
  }
  v30 = sub_1402AC790(v11, 0, v13, &Object, 0LL);
  if ( v30 < 0 )
    goto LABEL_46;
  v31 = (struct _FILE_OBJECT *)Object;
  v32 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v33 = (*((_DWORD *)Object + 20) & 4) != 0;
    v34 = KeGetCurrentThread();
    --*((_WORD *)v34 + 242);
    v35 = (volatile __int32 *)Object;
    v38 = sub_140347C10((__int64)Object + 128, 0LL);
    v55[2] = 0;
    if ( _InterlockedExchange(v35 + 29, 1) )
    {
      LOBYTE(v37) = v33;
      LOBYTE(v36) = v55[0];
      v31 = (struct _FILE_OBJECT *)Object;
      v39 = sub_140709FAC((volatile signed __int32 *)Object, v36, v37, v38, &v55[2]);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 18) = 1;
      v31 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v39 = 0;
    }
    if ( v55[2] )
    {
      if ( *(_QWORD *)&v55[7] )
        ExFreePoolWithTag(*(PVOID *)&v55[7], 0);
LABEL_69:
      ObfDereferenceObject(v31);
      return v39;
    }
    v54 = 1;
    v24 = SidListLength;
    Pool2 = *(unsigned int **)&v55[7];
  }
  else
  {
    v40 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
    P = v40;
    if ( !v40 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v39 = -1073741670;
      goto LABEL_69;
    }
    KeInitializeEvent(v40, SynchronizationEvent, 0);
    v54 = 0;
  }
  sub_1402AABB0((__int64)v31);
  DeviceObject = IoGetRelatedDeviceObject(v31);
  LOBYTE(v41) = DeviceObject->StackSize;
  v42 = (IRP *)sub_1402AACA0((__int64)DeviceObject, v41, 0LL);
  Irp = v42;
  v60 = v42;
  if ( !v42 )
  {
    if ( (*v32 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    sub_140933BA4((volatile __int32 *)&v31->Type, 0LL);
    goto LABEL_82;
  }
  v42->Tail.Overlay.OriginalFileObject = v31;
  v42->Tail.Overlay.Thread = v62;
  v42->RequestorMode = v55[0];
  if ( v54 )
  {
    v44 = IoStatusBlock;
    v45 = 0LL;
  }
  else
  {
    v42->Flags = 4;
    v44 = (PIO_STATUS_BLOCK)v63;
    v45 = (struct _KEVENT *)P;
  }
  Irp->UserEvent = v45;
  Irp->UserIosb = v44;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = v31;
  Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)Pool2;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v58;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v24;
  v47 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v49 = ExAllocatePool2(65LL, Length, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v49;
      if ( !v49 )
      {
        sub_140658670((volatile __int32 *)&v31->Type, Irp, 0LL, P, (v31->Flags & 2) != 0);
LABEL_82:
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        return -1073741670;
      }
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v50 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_14055A55C(Mdl, v55[0], v52, (__int64)v47, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_92;
  }
  Irp->UserBuffer = Buffer;
  v50 = Length;
LABEL_92:
  CurrentStackLocation[-1].Parameters.Read.Length = v50;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v53 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v53 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v53 |= 2u;
    CurrentStackLocation[-1].Flags = v53;
  }
  if ( v20 )
    CurrentStackLocation[-1].Flags = v53 | 4;
  result = sub_140731680(v47, Irp, v31, 0, v55[0], v54, 2u);
  if ( !v54 )
    return sub_1406BF8BC(result, P, Irp, v55[0], v63, IoStatusBlock);
  return result;
}
