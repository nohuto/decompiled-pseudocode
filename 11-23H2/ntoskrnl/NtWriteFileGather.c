/*
 * XREFs of NtWriteFileGather @ 0x1407E85C0
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140301B48 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x1403D55A0 (MmProbeAndLockSelectedPages.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopExceptionFilter @ 0x140555BA8 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x14061D804 (MmUpdateMdlTracker.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
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
  PULONG v9; // r12
  PLARGE_INTEGER v10; // r13
  struct _KEVENT *v11; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  unsigned __int8 GrantedAccess; // bl
  PFILE_OBJECT v15; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v17; // r8
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rax
  __int16 v24; // ax
  bool v25; // zf
  char v26; // al
  char v27; // cl
  __int64 v28; // rdi
  ULONG v29; // r10d
  _FILE_SEGMENT_ELEMENT *Pool2; // rbx
  ULONG v31; // r9d
  int SectorSize; // ecx
  int v33; // r14d
  ULONG *p_Flags; // rbx
  ULONG v35; // r14d
  bool v36; // r14
  struct _KTHREAD *v37; // rax
  PFILE_OBJECT v38; // rbx
  __int64 v39; // rax
  NTSTATUS v40; // ebx
  KPROCESSOR_MODE v41; // r14
  char v42; // r8
  unsigned __int8 v43; // r12
  IRP *Irp; // rax
  __int64 v45; // rsi
  PIO_STATUS_BLOCK v46; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG v48; // r15d
  struct _MDL *Mdl; // rax
  unsigned __int64 v50; // rbx
  __int64 MajorFunction; // r15
  _DWORD *FileObjectExtension; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v54[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v57; // [rsp+68h] [rbp-90h]
  ULONG *v58; // [rsp+70h] [rbp-88h]
  int v59; // [rsp+78h] [rbp-80h]
  struct _DEVICE_OBJECT *v60; // [rsp+80h] [rbp-78h]
  PVOID Object; // [rsp+88h] [rbp-70h] BYREF
  int v62; // [rsp+90h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION v63; // [rsp+98h] [rbp-60h] BYREF
  PVOID v64; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  __int64 v66; // [rsp+B0h] [rbp-48h]
  LARGE_INTEGER v68; // [rsp+110h] [rbp+18h] BYREF
  PVOID v69; // [rsp+118h] [rbp+20h]

  v69 = ApcContext;
  v68.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Key;
  v10 = ByteOffset;
  FileObject = 0LL;
  P = 0LL;
  v63 = 0LL;
  v11 = 0LL;
  v64 = 0LL;
  v57 = 0;
  *(_QWORD *)&v54[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v63);
  if ( result < 0 )
    return result;
  GrantedAccess = v63.GrantedAccess;
  LODWORD(v58) = v63.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v60 = RelatedDeviceObject;
  Flags = v15->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v15);
    return -1073741811;
  }
  v20 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v15);
      return -1073741790;
    }
    v59 = 0;
    v21 = (__int64)IoStatusBlock;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v68, FileObject->Flags & 2);
    Flags = (__int64)KeGetCurrentThread();
    v66 = Flags;
    v23 = *(_QWORD *)(Flags + 184);
    if ( !*(_QWORD *)(v23 + 1408) )
      goto LABEL_21;
    v24 = *(_WORD *)(v23 + 2412);
    if ( v24 == 332 || (v25 = v24 == 452, v26 = 0, v25) )
      v26 = 1;
    v54[15] = v26;
    v27 = 1;
    if ( !v26 )
LABEL_21:
      v27 = 0;
    v54[16] = v27;
    v28 = v20;
    if ( 8 * v20 )
    {
      if ( v27 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v28] > 0x7FFFFFFF0000LL || &SegmentArray[v28] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v29 = Length;
    if ( Length )
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v20, 1095987017LL);
      P = Pool2;
      memmove(Pool2, SegmentArray, 8 * v20);
      SegmentArray = Pool2;
      Flags = 0LL;
      v62 = 0;
      while ( (unsigned int)Flags < (unsigned int)v20 )
      {
        if ( ((__int64)SegmentArray[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v62 = Flags;
      }
      GrantedAccess = (unsigned __int8)v58;
      v29 = Length;
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v68.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v10 )
    {
      if ( ((unsigned __int8)v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(LARGE_INTEGER *)&v54[7] = *v10;
      v15 = FileObject;
    }
    v31 = v15->Flags;
    if ( (v31 & 8) != 0 )
    {
      SectorSize = v60->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v17 = v60->SectorSize;
        if ( ((SectorSize - 1) & v29) != 0 )
        {
          Flags = v29 % (unsigned int)v17;
          if ( v29 % (unsigned int)v17 )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( v10
        && *(_QWORD *)&v54[7] != -1LL
        && (*(_DWORD *)&v54[7] != -2 || *(_DWORD *)&v54[11] != -1 || (v31 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v54[7]) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v22 = (__int64)v9;
      v57 = *(_DWORD *)v22;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(LARGE_INTEGER *)&v54[7] = *v10;
    if ( v9 )
      v57 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v54[7] = -1;
    *(_DWORD *)&v54[11] = -1;
  }
  if ( Event )
  {
    Object = 0LL;
    v33 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v11 = (struct _KEVENT *)Object;
    v64 = Object;
    if ( v33 < 0 )
    {
      ObfDereferenceObject(v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v33;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  p_Flags = &v15->Flags;
  v58 = &v15->Flags;
  v35 = v15->Flags;
  if ( (v35 & 2) != 0 )
  {
    v36 = (v15->Flags & 4) != 0;
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    v38 = FileObject;
    v39 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    v54[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v38->Busy, 1) )
    {
      v42 = v36;
      v41 = AccessMode;
      v15 = FileObject;
      v40 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, AccessMode, v42, v39, v54);
    }
    else
    {
      if ( v39 )
        *(_BYTE *)(v39 + 18) = 1;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v40 = 0;
      v41 = AccessMode;
    }
    if ( v54[0] )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
      ObfDereferenceObject(v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v40;
    }
    v43 = 1;
    if ( !v10 && !*(_DWORD *)&v54[7] || *(_DWORD *)&v54[7] == -2 && *(_DWORD *)&v54[11] == -1 )
      *(_QWORD *)&v54[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v58;
  }
  else
  {
    if ( !v10 && (v35 & 0x280) == 0 )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
      goto LABEL_105;
    }
    v43 = 0;
    v41 = AccessMode;
  }
  if ( *(int *)&v54[11] < 0 && (*(_DWORD *)&v54[11] != -1 || *(_DWORD *)&v54[7] != -1) )
  {
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v43 )
      IopReleaseFileObjectLock((volatile __int32 *)&v15->Type);
LABEL_105:
    ObfDereferenceObject(v15);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741811;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v15->Event);
  LOBYTE(v17) = v43 ^ 1;
  LOBYTE(Flags) = v60->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)v60, Flags, v17);
  v45 = (__int64)Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v41;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v11;
    v46 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v68;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v69;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v15;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v48 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      v50 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(v50, (__int64)v60->DriverObject->MajorFunction[MajorFunction], (__int64)v60);
      *(_FILE_SEGMENT_ELEMENT *)(v45 + 112) = (_FILE_SEGMENT_ELEMENT)SegmentArray->Buffer;
      v48 = Length;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    *(_DWORD *)(v45 + 16) |= (*v58 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v48;
    CurrentStackLocation[-1].Parameters.Create.Options = v57;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v54[7];
    FileObjectExtension = v15->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v46->Information;
    return IopSynchronousServiceTail(v60, v45, v15, 1, AccessMode, v43, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v15, v11);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
