/*
 * XREFs of NtWriteFile @ 0x14071D850
 * Callers:
 *     sub_1405FB258 @ 0x1405FB258 (sub_1405FB258.c)
 *     sub_140618180 @ 0x140618180 (sub_140618180.c)
 * Callees:
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     sub_14029C520 @ 0x14029C520 (sub_14029C520.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402A3680 @ 0x1402A3680 (sub_1402A3680.c)
 *     sub_1402A36B0 @ 0x1402A36B0 (sub_1402A36B0.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC840 @ 0x1402AC840 (sub_1402AC840.c)
 *     sub_1402AC870 @ 0x1402AC870 (sub_1402AC870.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140658DCC @ 0x140658DCC (sub_140658DCC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_14071E230 @ 0x14071E230 (sub_14071E230.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v10; // r12
  struct _KEVENT *v12; // r14
  unsigned __int8 v13; // si
  NTSTATUS v14; // ebx
  PFILE_OBJECT v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  ULONG *p_Flags; // r12
  PVOID v19; // r13
  PLARGE_INTEGER v20; // rsi
  int SectorSize; // r8d
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // r9d
  PDEVICE_OBJECT v26; // rbx
  ULONG Flags; // r12d
  bool v28; // r12
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  char v31; // r12
  __int64 v32; // rbx
  char v33; // si
  __int64 v34; // rax
  IRP *v35; // rsi
  __int64 v36; // r14
  ULONG v37; // eax
  ULONG v38; // ebx
  struct _IRP *Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v41; // r8
  char v42; // r15
  unsigned __int8 v43; // [rsp+60h] [rbp-B8h]
  _BYTE v44[15]; // [rsp+61h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp-A8h]
  ULONG v46; // [rsp+78h] [rbp-A0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-98h]
  int v48; // [rsp+88h] [rbp-90h]
  PVOID Object; // [rsp+90h] [rbp-88h] BYREF
  int v50[4]; // [rsp+98h] [rbp-80h]
  PVOID v51; // [rsp+A8h] [rbp-70h]
  PVOID v52; // [rsp+B0h] [rbp-68h]
  PFAST_IO_DISPATCH FastIoDispatch; // [rsp+B8h] [rbp-60h]
  PIO_STATUS_BLOCK CurrentThread; // [rsp+C0h] [rbp-58h]
  __int64 v55; // [rsp+C8h] [rbp-50h]
  ULONG *v56; // [rsp+D0h] [rbp-48h]
  __int64 v58; // [rsp+130h] [rbp+18h] BYREF
  PVOID v59; // [rsp+138h] [rbp+20h]

  v59 = ApcContext;
  v58 = (__int64)ApcRoutine;
  v10 = Event;
  if ( dword_140C0959C == 1 || dword_140C0959C && sub_14065863C() )
  {
    v52 = 0LL;
    *(_QWORD *)v50 = 0LL;
    v14 = sub_14071E230((ULONG_PTR)FileHandle);
    if ( v14 < 0 || !sub_1402AC840((__int64)v52) )
    {
      if ( v14 < 0 )
        return v14;
      return sub_140658DCC(
               0LL,
               v10,
               v58,
               (__int64)ApcContext,
               IoStatusBlock,
               (__int64)Buffer,
               Length,
               ByteOffset,
               Key,
               v50[1]);
    }
LABEL_125:
    ObfDereferenceObject(0LL);
    return -1073739504;
  }
  FileObject = 0LL;
  v55 = 0LL;
  v12 = 0LL;
  v51 = 0LL;
  v46 = 0;
  *(_QWORD *)&v44[7] = 0LL;
  CurrentThread = (PIO_STATUS_BLOCK)KeGetCurrentThread();
  v13 = BYTE2(CurrentThread[35].Pointer);
  v43 = v13;
  v14 = sub_14071E230((ULONG_PTR)FileHandle);
  v15 = 0LL;
  if ( v14 >= 0 && sub_1402AC840((__int64)FileObject) )
    goto LABEL_125;
  if ( v14 < 0 )
    return v14;
  DeviceObject = IoGetRelatedDeviceObject(0LL);
  if ( !v13 )
  {
    v20 = ByteOffset;
    if ( ByteOffset )
      *(LARGE_INTEGER *)&v44[7] = *ByteOffset;
    v19 = Buffer;
    if ( Key )
      v46 = *Key;
    goto LABEL_46;
  }
  v48 = 0;
  v16 = (__int64)IoStatusBlock;
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v16 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v16 = *(_DWORD *)v16;
  v15 = FileObject;
  p_Flags = &FileObject->Flags;
  sub_1402AAB50((unsigned int **)&IoStatusBlock, &v58, FileObject->Flags & 2);
  v19 = Buffer;
  if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( FileObject->CompletionContext && (v58 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_36;
  v20 = ByteOffset;
  if ( ByteOffset )
  {
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    *(LARGE_INTEGER *)&v44[7] = *ByteOffset;
    v15 = FileObject;
  }
  if ( (*p_Flags & 8) != 0 )
  {
    SectorSize = DeviceObject->SectorSize;
    if ( (_WORD)SectorSize )
    {
      v22 = DeviceObject->SectorSize;
      v23 = v22;
      v24 = v22;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_25:
        if ( (_WORD)SectorSize && Length % v24 || (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_36;
LABEL_29:
        if ( ByteOffset
          && *(_QWORD *)&v44[7] != -1LL
          && (*(_DWORD *)&v44[7] != -2 || *(_DWORD *)&v44[11] != -1 || (*p_Flags & 2) == 0)
          && (_WORD)SectorSize
          && ((v22 - 1) & *(_DWORD *)&v44[7]) != 0 )
        {
LABEL_36:
          ObfDereferenceObject(v15);
          return -1073741811;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v24 = v23;
    if ( (DeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_29;
    goto LABEL_25;
  }
LABEL_37:
  if ( Key )
  {
    if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
      v17 = (__int64)Key;
    v46 = *(_DWORD *)v17;
    v15 = FileObject;
  }
  v10 = Event;
LABEL_46:
  if ( (BYTE4(v55) & 6) == 4 )
    *(_QWORD *)&v44[7] = -1LL;
  if ( v10 )
  {
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v10, 2u, (POBJECT_TYPE)ExEventObjectType, v43, &Object, 0LL);
    v12 = (struct _KEVENT *)Object;
    v51 = Object;
    if ( v14 < 0 )
    {
LABEL_60:
      ObfDereferenceObject(v15);
      return v14;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  v26 = DeviceObject;
  FastIoDispatch = DeviceObject->DriverObject->FastIoDispatch;
  v56 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 2) != 0 )
  {
    v28 = (v15->Flags & 4) != 0;
    v29 = KeGetCurrentThread();
    --*((_WORD *)v29 + 242);
    v30 = sub_140347C10((__int64)&FileObject->Lock, 0LL);
    v44[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v15 = FileObject;
      v14 = sub_140709FAC((volatile signed __int32 *)&FileObject->Type, v43, v28, v30, v44);
    }
    else
    {
      if ( v30 )
        *(_BYTE *)(v30 + 18) = 1;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v14 = 0;
    }
    if ( v44[0] )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      goto LABEL_60;
    }
    v31 = 1;
    v44[0] = 1;
    if ( !v20 && !*(_DWORD *)&v44[7] || *(_DWORD *)&v44[7] == -2 && *(_DWORD *)&v44[11] == -1 )
      *(_QWORD *)&v44[7] = v15->CurrentByteOffset.QuadPart;
    if ( v15->PrivateCacheMap )
    {
      *(_OWORD *)v50 = 0LL;
      FastIoDispatch = (PFAST_IO_DISPATCH)FastIoDispatch->FastIoWrite;
      if ( *(int *)&v44[11] < 0 && (*(_DWORD *)&v44[11] != -1 || *(_DWORD *)&v44[7] != -1) )
      {
        if ( v12 )
          ObfDereferenceObject(v12);
LABEL_73:
        sub_1402AD350((volatile __int32 *)&v15->Type);
LABEL_74:
        ObfDereferenceObject(v15);
        return -1073741811;
      }
      if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DeviceObject->DriverObject) )
        v32 = sub_140A8A9AC();
      else
        v32 = 0LL;
      v33 = sub_14042A5E0(v15, &v44[7]);
      if ( v32 )
        sub_140A8A8D4(v32, FastIoDispatch);
      if ( v33 && !v50[0] )
      {
        sub_1402A36B0();
        sub_1402A3680(v50[2], 0LL);
        *IoStatusBlock = *(PIO_STATUS_BLOCK)v50;
        if ( Event )
        {
          if ( (v15->Flags & 0x8000000) == 0 )
            KeSetEvent(v12, 0, 0);
          ObfDereferenceObject(v12);
        }
        sub_1402AD350((volatile __int32 *)&v15->Type);
        ObfDereferenceObject(v15);
        return v50[0];
      }
    }
    v26 = DeviceObject;
LABEL_95:
    if ( *(int *)&v44[11] < 0 && (*(_DWORD *)&v44[11] != -1 || *(_DWORD *)&v44[7] != -1) )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      if ( !v31 )
        goto LABEL_74;
      goto LABEL_73;
    }
    sub_1402AABB0((__int64)v15);
    v34 = sub_1402AACA0((__int64)v26, (unsigned __int8)v26->StackSize, (unsigned __int8)v31 ^ 1u);
    v35 = (IRP *)v34;
    Object = (PVOID)v34;
    if ( !v34 )
    {
      if ( v12 )
        ObfDereferenceObject(v12);
      if ( v31 )
        sub_1402AD350((volatile __int32 *)&v15->Type);
      ObfDereferenceObject(v15);
      return -1073741670;
    }
    *(_QWORD *)(v34 + 192) = v15;
    *(_QWORD *)(v34 + 152) = CurrentThread;
    *(_QWORD *)(v34 + 160) = 0LL;
    *(_BYTE *)(v34 + 64) = v43;
    *(_BYTE *)(v34 + 65) = 0;
    *(_BYTE *)(v34 + 68) = 0;
    *(_QWORD *)(v34 + 104) = 0LL;
    *(_QWORD *)(v34 + 80) = v12;
    CurrentThread = IoStatusBlock;
    *(_QWORD *)(v34 + 72) = IoStatusBlock;
    *(_QWORD *)(v34 + 88) = v58;
    *(_QWORD *)(v34 + 96) = v59;
    v36 = *(_QWORD *)(v34 + 184);
    *(_DWORD *)(v36 - 72) = 4;
    *(_QWORD *)(v36 - 24) = v15;
    if ( (*v56 & 0x10) != 0 )
      *(_BYTE *)(v36 - 70) = 4;
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 8) = 0LL;
    v37 = v26->Flags;
    if ( (v37 & 4) != 0 )
    {
      if ( Length )
      {
        v38 = Length;
        Pool2 = (struct _IRP *)ExAllocatePool2(105LL, Length, 1112764233LL);
        v35->AssociatedIrp.MasterIrp = Pool2;
        memmove(Pool2, v19, v38);
        v26 = DeviceObject;
        v35->Flags = 48;
      }
      else
      {
        v35->Flags = 16;
      }
    }
    else
    {
      v35->Flags = 0;
      if ( (v37 & 0x10) != 0 )
      {
        if ( Length )
        {
          Mdl = IoAllocateMdl(v19, Length, 0, 1u, v35);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v42 = v43;
          sub_14029C520((__int64)Mdl, v43, v41, (__int64)v26, *(unsigned __int8 *)(v36 - 72));
          goto LABEL_120;
        }
      }
      else
      {
        v35->UserBuffer = v19;
      }
    }
    v42 = v43;
LABEL_120:
    v35->Flags |= (v15->Flags & 8 | 0x5000) >> 3;
    *(_DWORD *)(v36 - 64) = Length;
    *(_DWORD *)(v36 - 56) = v46;
    *(_QWORD *)(v36 - 48) = *(_QWORD *)&v44[7];
    if ( sub_1402AC870((__int64)v15, 16) )
      *(_DWORD *)(v36 - 52) = CurrentThread->Information;
    return sub_140731680(v26, v35, v42, v31, 1);
  }
  if ( v20 || (Flags & 0x280) != 0 )
  {
    v31 = 0;
    v44[0] = 0;
    goto LABEL_95;
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  ObfDereferenceObject(v15);
  return -1073741811;
}
