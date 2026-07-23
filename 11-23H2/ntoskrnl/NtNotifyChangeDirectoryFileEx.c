/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1407CBE60
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1407CBE00 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140301B48 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     IopProbeAndLockPages_2 @ 0x14055A39C (IopProbeAndLockPages_2.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  PVOID v12; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v14; // rcx
  ULONG v15; // r12d
  NTSTATUS result; // eax
  PFILE_OBJECT v17; // rbx
  ULONG *p_Flags; // rsi
  char v19; // di
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // rdi
  __int64 v25; // rsi
  DIRECTORY_NOTIFY_INFORMATION_CLASS v26; // ecx
  ULONG Flags; // eax
  char v28; // al
  NTSTATUS v29; // edi
  char v30; // di
  struct _KTHREAD *v31; // rax
  PFILE_OBJECT v32; // rbx
  __int64 v33; // rax
  __int64 Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v36; // r8
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-50h] BYREF
  PVOID v39; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  PIO_APC_ROUTINE v42; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v43; // [rsp+B8h] [rbp+20h]

  v43 = ApcContext;
  v42 = ApcRoutine;
  FileObject = 0LL;
  v12 = 0LL;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v15 = Length;
  }
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v17 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v29 = -1073741811;
      goto LABEL_41;
    }
    if ( Event )
    {
      Object = 0LL;
      v29 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v12 = Object;
      v39 = Object;
      if ( v29 < 0 )
        goto LABEL_41;
      KeResetEvent((PRKEVENT)Object);
    }
    p_Flags = &v17->Flags;
    if ( (v17->Flags & 2) == 0 )
    {
      v19 = 0;
      LOBYTE(v37) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v42, 0);
LABEL_15:
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v17->Event);
      RelatedDeviceObject = IoGetRelatedDeviceObject(v17);
      LOBYTE(v21) = v19 ^ 1;
      LOBYTE(v22) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v22, v21);
      v24 = (IRP *)Irp;
      Object = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v17;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v12;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v42;
        *(_QWORD *)(Irp + 96) = v43;
        v25 = *(_QWORD *)(Irp + 184);
        *(_BYTE *)(v25 - 72) = 12;
        v26 = DirectoryNotifyInformationClass;
        *(_BYTE *)(v25 - 71) = (DirectoryNotifyInformationClass != DirectoryNotifyInformation) + 2;
        *(_QWORD *)(v25 - 24) = v17;
        if ( !v15 )
        {
LABEL_22:
          *(_DWORD *)(v25 - 64) = v15;
          *(_DWORD *)(v25 - 56) = CompletionFilter;
          if ( *(_BYTE *)(v25 - 71) == 3 )
            *(_DWORD *)(v25 - 48) = v26;
          *(_BYTE *)(v25 - 70) = 0;
          v28 = *(_BYTE *)(v25 - 70);
          if ( WatchTree )
            v28 = 1;
          *(_BYTE *)(v25 - 70) = v28;
          return IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v24, v17, 0, PreviousMode, v37, 2u);
        }
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) == 0 )
        {
          if ( (Flags & 0x10) != 0 )
          {
            Mdl = IoAllocateMdl(Buffer, v15, 0, 1u, v24);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            IopProbeAndLockPages_2(
              (__int64)Mdl,
              PreviousMode,
              v36,
              (__int64)RelatedDeviceObject,
              *(unsigned __int8 *)(v25 - 72));
            v26 = DirectoryNotifyInformationClass;
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        Pool2 = ExAllocatePool2(65LL, v15, 1112764233LL);
        v24->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
        if ( Pool2 )
        {
          v24->Flags = 112;
          v26 = DirectoryNotifyInformationClass;
LABEL_21:
          v24->UserBuffer = Buffer;
          goto LABEL_22;
        }
        IopExceptionCleanupEx(v17, v24, v12, 0LL, (v17->Flags & 2) != 0);
      }
      else
      {
        IopAllocateIrpCleanup(v17, v12);
      }
      return -1073741670;
    }
    v30 = (v17->Flags & 4) != 0;
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = FileObject;
    v33 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    LOBYTE(v37) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v32->Busy, 1) )
    {
      v17 = FileObject;
      v29 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v30, v33, &v37);
    }
    else
    {
      if ( v33 )
        *(_BYTE *)(v33 + 18) = 1;
      v17 = FileObject;
      ObfReferenceObject(FileObject);
      v29 = 0;
    }
    if ( !(_BYTE)v37 )
    {
      v19 = 1;
      LOBYTE(v37) = 1;
      goto LABEL_15;
    }
    if ( v12 )
      ObfDereferenceObject(v12);
LABEL_41:
    ObfDereferenceObject(v17);
    return v29;
  }
  return result;
}
