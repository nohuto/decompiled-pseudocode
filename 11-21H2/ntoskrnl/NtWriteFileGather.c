/*
 * XREFs of NtWriteFileGather @ 0x1406E3F70
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AC870 @ 0x1402AC870 (sub_1402AC870.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtWriteFileGather(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  PLARGE_INTEGER v9; // r13
  struct _KEVENT *v10; // r15
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // r12
  PFILE_OBJECT v13; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  PDEVICE_OBJECT v15; // r14
  ULONG *p_Flags; // rbx
  ULONG Flags; // edx
  unsigned __int64 DeviceType; // rcx
  __int64 v19; // r8
  __int64 v20; // rsi
  KPROCESSOR_MODE v21; // cl
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rax
  __int16 v25; // ax
  bool v26; // zf
  char v27; // al
  char v28; // cl
  __int64 v29; // rdi
  ULONG v30; // r10d
  _FILE_SEGMENT_ELEMENT *Pool2; // rbx
  unsigned int i; // edx
  ULONG v33; // r9d
  unsigned int SectorSize; // ecx
  int v35; // esi
  struct _KTHREAD *v36; // rax
  PFILE_OBJECT v37; // rbx
  __int64 v38; // rax
  NTSTATUS v39; // ebx
  char v40; // r12
  __int64 v41; // r8
  struct _DEVICE_OBJECT *v42; // r13
  __int64 v43; // rdx
  IRP *v44; // rax
  IRP *v45; // rsi
  PIO_STATUS_BLOCK v46; // r15
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v49; // rbx
  unsigned int MajorFunction; // r13d
  __int64 v51; // rcx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  _BYTE v53[23]; // [rsp+41h] [rbp-A7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-90h] BYREF
  PVOID P; // [rsp+60h] [rbp-88h]
  ULONG v56; // [rsp+68h] [rbp-80h]
  int v57; // [rsp+6Ch] [rbp-7Ch]
  ULONG *v58; // [rsp+70h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-70h]
  PVOID Object; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v61; // [rsp+88h] [rbp-60h]
  ACCESS_MASK v62; // [rsp+8Ch] [rbp-5Ch]
  struct _OBJECT_HANDLE_INFORMATION v63; // [rsp+90h] [rbp-58h] BYREF
  PVOID v64; // [rsp+98h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v66; // [rsp+A8h] [rbp-40h]
  LARGE_INTEGER v68; // [rsp+100h] [rbp+18h] BYREF
  PVOID v69; // [rsp+108h] [rbp+20h]

  v69 = ApcContext;
  v68.QuadPart = (LONGLONG)ApcRoutine;
  v9 = ByteOffset;
  FileObject = 0LL;
  P = 0LL;
  v63 = 0LL;
  v10 = 0LL;
  v64 = 0LL;
  v56 = 0;
  *(_QWORD *)&v53[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  AccessMode = *((_BYTE *)CurrentThread + 562);
  result = sub_1402AC790(FileHandle, 0, AccessMode, (PVOID *)&FileObject, &v63);
  if ( result < 0 )
    return result;
  GrantedAccess = v63.GrantedAccess;
  v62 = v63.GrantedAccess;
  v13 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v15 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v13->Flags;
  v58 = &v13->Flags;
  Flags = v13->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v19 = 0x40000100100348LL, !_bittest64(&v19, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v13);
    return -1073741811;
  }
  v20 = (Length >> 12) + ((Length & 0xFFF) != 0);
  v21 = AccessMode;
  if ( AccessMode )
  {
    if ( ((~(unsigned __int8)(Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v13);
      return -1073741790;
    }
    v57 = 0;
    v22 = (__int64)IoStatusBlock;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    sub_1402AAB50((unsigned int **)&IoStatusBlock, (__int64 *)&v68, *(_BYTE *)p_Flags & 2);
    v66 = KeGetCurrentThread();
    v24 = *((_QWORD *)v66 + 23);
    if ( !*(_QWORD *)(v24 + 1408) )
      goto LABEL_18;
    v25 = *(_WORD *)(v24 + 2412);
    if ( v25 == 332 || (v26 = v25 == 452, v27 = 0, v26) )
      v27 = 1;
    v53[15] = v27;
    v28 = 1;
    if ( !v27 )
LABEL_18:
      v28 = 0;
    v53[16] = v28;
    v29 = v20;
    if ( 8 * v20 )
    {
      if ( v28 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v29] > 0x7FFFFFFF0000LL || &SegmentArray[v29] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v30 = Length;
    if ( Length )
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v20, 538996553LL);
      P = Pool2;
      memmove(Pool2, SegmentArray, 8 * v20);
      SegmentArray = Pool2;
      for ( i = 0; ; ++i )
      {
        v61 = i;
        if ( i >= (unsigned int)v20 )
          break;
        if ( ((__int64)SegmentArray[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
      v15 = DeviceObject;
      v30 = Length;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && (v68.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v9 )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v53[7] = *v9;
      v13 = FileObject;
    }
    p_Flags = &v13->Flags;
    v58 = &v13->Flags;
    v33 = v13->Flags;
    if ( (v33 & 8) != 0 )
    {
      SectorSize = v15->SectorSize;
      if ( (_WORD)SectorSize && ((SectorSize - 1) & v30) != 0 && v30 % SectorSize )
        RtlRaiseStatus(-1073741811);
      if ( v9
        && *(_QWORD *)&v53[7] != -1LL
        && (*(_DWORD *)&v53[7] != -2 || *(_DWORD *)&v53[11] != -1 || (v33 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v53[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v23 = (__int64)Key;
      v56 = *(_DWORD *)v23;
      v13 = FileObject;
    }
    GrantedAccess = v62;
    v21 = AccessMode;
  }
  else
  {
    if ( v9 )
      *(LARGE_INTEGER *)&v53[7] = *v9;
    if ( Key )
      v56 = *Key;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v53[7] = -1;
    *(_DWORD *)&v53[11] = -1;
  }
  if ( Event )
  {
    Object = 0LL;
    v35 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v21, &Object, 0LL);
    v10 = (struct _KEVENT *)Object;
    v64 = Object;
    if ( v35 < 0 )
    {
      ObfDereferenceObject(v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v35;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v36 = KeGetCurrentThread();
    --*((_WORD *)v36 + 242);
    v37 = FileObject;
    v38 = sub_140347C10((__int64)&FileObject->Lock, 0LL);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v37->Busy, 1) )
    {
      v13 = FileObject;
      v39 = sub_140709FAC(FileObject, (__int64)v53);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 18) = 1;
      v13 = FileObject;
      ObfReferenceObject(FileObject);
      v39 = 0;
    }
    if ( v53[0] )
    {
      if ( v10 )
        ObfDereferenceObject(v10);
      ObfDereferenceObject(v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v39;
    }
    v40 = 1;
    if ( !v9 && !*(_DWORD *)&v53[7] || *(_DWORD *)&v53[7] == -2 && *(_DWORD *)&v53[11] == -1 )
      *(_QWORD *)&v53[7] = v13->CurrentByteOffset.QuadPart;
    p_Flags = v58;
  }
  else
  {
    if ( !v9 && (*p_Flags & 0x280) == 0 )
    {
      if ( v10 )
        ObfDereferenceObject(v10);
      goto LABEL_96;
    }
    v40 = 0;
  }
  if ( *(int *)&v53[11] < 0 && (*(_DWORD *)&v53[11] != -1 || *(_DWORD *)&v53[7] != -1) )
  {
    if ( v10 )
      ObfDereferenceObject(v10);
    if ( v40 )
      sub_1402AD350((volatile __int32 *)&v13->Type);
LABEL_96:
    ObfDereferenceObject(v13);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741811;
  }
  sub_1402AABB0((__int64)v13);
  LOBYTE(v41) = v40 ^ 1;
  v42 = DeviceObject;
  LOBYTE(v43) = DeviceObject->StackSize;
  v44 = (IRP *)sub_1402AACA0((__int64)DeviceObject, v43, v41);
  v45 = v44;
  Object = v44;
  if ( v44 )
  {
    v44->Tail.Overlay.OriginalFileObject = v13;
    v44->Tail.Overlay.Thread = CurrentThread;
    v44->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v44->RequestorMode = AccessMode;
    v44->PendingReturned = 0;
    v44->Cancel = 0;
    v44->CancelRoutine = 0LL;
    v44->UserEvent = v10;
    v46 = IoStatusBlock;
    v44->UserIosb = IoStatusBlock;
    v44->Overlay.AllocationSize = v68;
    v44->Overlay.AsynchronousParameters.UserApcContext = v69;
    CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v13;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    v44->AssociatedIrp.MasterIrp = 0LL;
    v44->MdlAddress = 0LL;
    v44->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, v44);
      v49 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (dword_140D06994 & 1) != 0 )
      {
        v51 = MajorFunction;
        v42 = DeviceObject;
        sub_140584F10(v49, (__int64)DeviceObject->DriverObject->MajorFunction[v51], (__int64)DeviceObject);
      }
      else
      {
        v42 = DeviceObject;
      }
      v45->UserBuffer = SegmentArray->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v45->Flags |= (*v58 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v53[7];
    if ( sub_1402AC870((__int64)v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v46->Information;
    return sub_140731680(v42, v45, AccessMode, v40, 1);
  }
  else
  {
    sub_140933BA4(v13, v10);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
