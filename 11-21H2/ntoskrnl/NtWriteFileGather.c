/*
 * XREFs of NtWriteFileGather @ 0x1406E3F70
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     IopExceptionFilter @ 0x14025E7A8 (IopExceptionFilter.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     IopCheckFileObjectExtensionFlag @ 0x1402AC870 (IopCheckFileObjectExtensionFlag.c)
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MmUpdateMdlTracker @ 0x140584F10 (MmUpdateMdlTracker.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall NtWriteFileGather(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        union _FILE_SEGMENT_ELEMENT *Src,
        ULONG Length,
        __int64 a8,
        ULONG *a9)
{
  __int64 v9; // r13
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
  _KPROCESS *Process; // rax
  __int16 v25; // ax
  bool v26; // zf
  char v27; // al
  char v28; // cl
  __int64 v29; // rdi
  ULONG v30; // r10d
  union _FILE_SEGMENT_ELEMENT *Pool2; // rbx
  unsigned int i; // edx
  ULONG v33; // r9d
  unsigned int SectorSize; // ecx
  NTSTATUS v35; // esi
  struct _KTHREAD *v36; // rax
  PFILE_OBJECT v37; // rbx
  __int64 v38; // rax
  int v39; // ebx
  char v40; // r12
  __int64 v41; // r8
  struct _DEVICE_OBJECT *v42; // r13
  __int64 v43; // rdx
  IRP *Irp; // rax
  IRP *v45; // rsi
  __int64 v46; // r15
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
  __int64 v68; // [rsp+100h] [rbp+18h] BYREF
  void *v69; // [rsp+108h] [rbp+20h]

  v69 = a4;
  v68 = a3;
  v9 = a8;
  FileObject = 0LL;
  P = 0LL;
  v63 = 0LL;
  v10 = 0LL;
  v64 = 0LL;
  v56 = 0;
  *(_QWORD *)&v53[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(a1, 0, AccessMode, (PVOID *)&FileObject, &v63);
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
    v22 = a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v68, *(_BYTE *)p_Flags & 2);
    v66 = KeGetCurrentThread();
    Process = v66->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_18;
    v25 = WORD2(Process[2].Affinity.StaticBitmap[20]);
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
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v29] > 0x7FFFFFFF0000LL || &Src[v29] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v30 = Length;
    if ( Length )
    {
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v20, 538996553LL);
      P = Pool2;
      memmove(Pool2, Src, 8 * v20);
      Src = Pool2;
      for ( i = 0; ; ++i )
      {
        v61 = i;
        if ( i >= (unsigned int)v20 )
          break;
        if ( ((__int64)Src[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
      v15 = DeviceObject;
      v30 = Length;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && (v68 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    if ( v9 )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_QWORD *)&v53[7] = *(_QWORD *)v9;
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
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a9;
      v56 = *(_DWORD *)v23;
      v13 = FileObject;
    }
    GrantedAccess = v62;
    v21 = AccessMode;
  }
  else
  {
    if ( v9 )
      *(_QWORD *)&v53[7] = *(_QWORD *)v9;
    if ( a9 )
      v56 = *a9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v53[7] = -1;
    *(_DWORD *)&v53[11] = -1;
  }
  if ( a2 )
  {
    Object = 0LL;
    v35 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v21, &Object, 0LL);
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
    --v36->KernelApcDisable;
    v37 = FileObject;
    v38 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v37->Busy, 1) )
    {
      v13 = FileObject;
      v39 = IopWaitAndAcquireFileObjectLock(FileObject, (__int64)v53);
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
      IopReleaseFileObjectLock((volatile __int32 *)&v13->Type);
LABEL_96:
    ObfDereferenceObject(v13);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741811;
  }
  IopResetEvent((__int64)v13);
  LOBYTE(v41) = v40 ^ 1;
  v42 = DeviceObject;
  LOBYTE(v43) = DeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v43, v41);
  v45 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v10;
    v46 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v68;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v69;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v13;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      v49 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v51 = MajorFunction;
        v42 = DeviceObject;
        MmUpdateMdlTracker(v49, (__int64)DeviceObject->DriverObject->MajorFunction[v51], (__int64)DeviceObject);
      }
      else
      {
        v42 = DeviceObject;
      }
      v45->UserBuffer = Src->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v45->Flags |= (*v58 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v53[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v46 + 8);
    return IopSynchronousServiceTail(v42, v45, AccessMode, v40, 1);
  }
  else
  {
    IopAllocateIrpCleanup(v13, v10);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
