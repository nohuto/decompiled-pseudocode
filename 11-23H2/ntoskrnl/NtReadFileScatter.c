/*
 * XREFs of NtReadFileScatter @ 0x1407E7340
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
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
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
  PLARGE_INTEGER v9; // r12
  int v10; // r13d
  struct _KEVENT *v11; // r15
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v14; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  PDEVICE_OBJECT v18; // r14
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // edi
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rbx
  int SectorSize; // ecx
  _KPROCESS *Process; // rcx
  char v27; // cl
  __int64 v28; // rbx
  _FILE_SEGMENT_ELEMENT *Pool2; // rdi
  __int16 v30; // ax
  bool v31; // zf
  char v32; // al
  int v33; // esi
  ULONG *p_Flags; // r14
  ULONG Flags; // esi
  unsigned __int8 v36; // r12
  IRP *Irp; // rax
  __int64 v38; // rsi
  PIO_STATUS_BLOCK v39; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_SEGMENT_ELEMENT v42; // r14
  _DWORD *FileObjectExtension; // rax
  char v44; // si
  struct _KTHREAD *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  NTSTATUS v48; // edi
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v50[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v53; // [rsp+60h] [rbp-78h]
  int v54; // [rsp+64h] [rbp-74h]
  PVOID Object; // [rsp+68h] [rbp-70h] BYREF
  int v56; // [rsp+70h] [rbp-68h]
  PVOID v57; // [rsp+78h] [rbp-60h]
  struct _DEVICE_OBJECT *v58; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  ULONG *v60; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v61; // [rsp+98h] [rbp-40h]
  LARGE_INTEGER v63; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v64; // [rsp+F8h] [rbp+20h]

  v64 = ApcContext;
  v63.QuadPart = (LONGLONG)ApcRoutine;
  v9 = ByteOffset;
  v10 = 0;
  *(_QWORD *)&v50[7] = 0LL;
  P = 0LL;
  v11 = 0LL;
  v57 = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v50[7], 0LL);
  if ( result < 0 )
    return result;
  v14 = *(struct _FILE_OBJECT **)&v50[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v50[7]);
  v18 = RelatedDeviceObject;
  v58 = RelatedDeviceObject;
  if ( (v14->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v16 = 0x40000100100348LL, !_bittest64(&v16, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v14);
    return -1073741811;
  }
  v20 = Length;
  LOBYTE(v10) = (Length & 0xFFF) != 0;
  v21 = (Length >> 12) + v10;
  if ( PreviousMode )
  {
    v54 = 0;
    v22 = (__int64)IoStatusBlock;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v24 = *(_QWORD *)&v50[7];
    IopMarkApcRoutineIfAsynchronousIo32(
      (unsigned int **)&IoStatusBlock,
      (__int64 *)&v63,
      *(_BYTE *)(*(_QWORD *)&v50[7] + 80LL) & 2);
    if ( *(_QWORD *)(v24 + 176) && (v63.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_42;
    if ( v9 )
    {
      if ( ((unsigned __int8)v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = v9->QuadPart;
      v24 = *(_QWORD *)&v50[7];
    }
    if ( (*(_DWORD *)(v24 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v17 = v18->SectorSize, ((SectorSize - 1) & v20) != 0)
        && (v16 = v20 % (unsigned int)v17) != 0
        || v9 && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
LABEL_42:
        ObfDereferenceObject((PVOID)v24);
        return -1073741811;
      }
    }
    v61 = KeGetCurrentThread();
    Process = v61->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_24;
    v30 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v30 == 332 || (v31 = v30 == 452, v32 = 0, v31) )
      v32 = 1;
    v50[1] = v32;
    v27 = 1;
    if ( !v32 )
LABEL_24:
      v27 = 0;
    v50[2] = v27;
    v28 = v21;
    if ( 8 * v21 )
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
    if ( v20 )
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v21, 1095987017LL);
      P = Pool2;
      memmove(Pool2, SegmentArray, 8 * v21);
      SegmentArray = Pool2;
      v16 = 0LL;
      v56 = 0;
      while ( (unsigned int)v16 < (unsigned int)v21 )
      {
        if ( ((__int64)SegmentArray[(unsigned int)v16].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v16 = (unsigned int)(v16 + 1);
        v56 = v16;
      }
    }
    else
    {
      Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    if ( Key )
    {
      if ( (unsigned __int64)Key < 0x7FFFFFFF0000LL )
        v23 = (__int64)Key;
      v53 = *(_DWORD *)v23;
      Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    v14 = *(struct _FILE_OBJECT **)&v50[7];
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v9 )
      QuadPart = v9->QuadPart;
    Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
    if ( Key )
      v53 = *Key;
  }
  if ( Event )
  {
    Object = 0LL;
    v33 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v11 = (struct _KEVENT *)Object;
    v57 = Object;
    if ( v33 < 0 )
    {
      ObfDereferenceObject(v14);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v33;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  p_Flags = &v14->Flags;
  v60 = &v14->Flags;
  Flags = v14->Flags;
  if ( (Flags & 2) != 0 )
  {
    v44 = (v14->Flags & 4) != 0;
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    v46 = *(_QWORD *)&v50[7];
    v47 = KeAbPreAcquire(*(_QWORD *)&v50[7] + 128LL, 0LL);
    v50[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v46 + 116), 1) )
    {
      v14 = *(struct _FILE_OBJECT **)&v50[7];
      v48 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v50[7], AccessMode, v44, v47, v50);
    }
    else
    {
      if ( v47 )
        *(_BYTE *)(v47 + 18) = 1;
      v14 = *(struct _FILE_OBJECT **)&v50[7];
      ObfReferenceObject(*(PVOID *)&v50[7]);
      v48 = 0;
    }
    if ( v50[0] )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v48;
    }
    if ( !v9 || QuadPart == -2 )
      QuadPart = v14->CurrentByteOffset.QuadPart;
    v36 = 1;
    Pool2 = (_FILE_SEGMENT_ELEMENT *)P;
  }
  else
  {
    if ( !v9 && (Flags & 0x280) == 0 )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
LABEL_107:
      ObfDereferenceObject(v14);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return -1073741811;
    }
    v36 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v36 )
      IopReleaseFileObjectLock((volatile __int32 *)&v14->Type);
    goto LABEL_107;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v14->Event);
  LOBYTE(v17) = v36 ^ 1;
  LOBYTE(v16) = v58->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)v58, v16, v17);
  v38 = (__int64)Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v14;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v11;
    v39 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v63;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v64;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = v14;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v42 = SegmentArray;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoWriteAccess);
      *(_FILE_SEGMENT_ELEMENT *)(v38 + 112) = (_FILE_SEGMENT_ELEMENT)v42->Buffer;
      p_Flags = v60;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    *(_DWORD *)(v38 + 16) |= (*p_Flags & 8 | 0x4800) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    FileObjectExtension = v14->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = v39->Information;
    return IopSynchronousServiceTail(v58, v38, v14, 1, AccessMode, v36, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v14, v11);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741670;
  }
}
