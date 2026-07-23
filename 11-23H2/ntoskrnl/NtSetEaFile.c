/*
 * XREFs of NtSetEaFile @ 0x14094AE60
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopProbeAndLockPages_1 @ 0x140556190 (IopProbeAndLockPages_1.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IoCheckEaBufferValidity @ 0x1407CF5D0 (IoCheckEaBufferValidity.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  PIO_STATUS_BLOCK v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rcx
  char *v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r12
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  NTSTATUS v18; // ebx
  struct _KEVENT *v19; // rax
  __int64 v20; // rdx
  IRP *v21; // rax
  IRP *Irp; // rsi
  char v23; // di
  struct _KEVENT *v24; // rax
  struct _KTHREAD *v25; // rbx
  ULONG Flags; // eax
  ULONG v27; // r12d
  _FILE_FULL_EA_INFORMATION *Pool2; // rdi
  int v29; // eax
  PMDL Mdl; // rcx
  unsigned __int8 v31; // bl
  unsigned __int8 v32; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v33; // [rsp+41h] [rbp-77h]
  char v34; // [rsp+42h] [rbp-76h]
  NTSTATUS v35; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v41; // [rsp+70h] [rbp-48h]
  unsigned int v42[6]; // [rsp+78h] [rbp-40h] BYREF

  v5 = IoStatusBlock;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v33 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Length )
    {
      if ( ((unsigned __int8)Buffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)Buffer + Length;
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  v35 = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      v32 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &v32);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 18) = 1;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v18 = 0;
      }
      v35 = v18;
      if ( !v32 )
      {
        v32 = 1;
        v5 = IoStatusBlock;
LABEL_23:
        if ( (*v13 & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v20) = RelatedDeviceObject->StackSize;
        v21 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v20, 0LL);
        Irp = v21;
        v41 = v21;
        if ( v21 )
        {
          v21->Tail.Overlay.OriginalFileObject = v12;
          v21->Tail.Overlay.Thread = CurrentThread;
          v23 = v33;
          v21->RequestorMode = v33;
          if ( v32 )
          {
            v24 = 0LL;
          }
          else
          {
            v21->Flags = 4;
            v5 = (PIO_STATUS_BLOCK)v42;
            v24 = v7;
          }
          Irp->UserEvent = v24;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v25 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v25;
          v25->Header.Type = 8;
          v25->StackLimit = v12;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v27 = Length;
            if ( Length )
            {
              v34 = 0;
              Pool2 = (_FILE_FULL_EA_INFORMATION *)ExAllocatePool2(97LL, Length, 1112764233LL);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
              memmove(Pool2, Buffer, Length);
              v29 = IoCheckEaBufferValidity(Pool2, Length, &ErrorOffset);
              v35 = v29;
              if ( v29 < 0 )
              {
                v34 = 1;
                IoStatusBlock->Status = v29;
                IoStatusBlock->Information = ErrorOffset;
                RtlRaiseStatus(v29);
              }
              Irp->Flags |= 0x30u;
              v23 = v33;
              v25 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v27 = Length;
            if ( (Flags & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                IopProbeAndLockPages_1((__int64)Mdl, v23, 0, (__int64)RelatedDeviceObject, v25->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = Buffer;
            }
          }
          LODWORD(v25->Header.WaitListHead.Flink) = v27;
          v31 = v32;
          result = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)Irp, v12, 0, v23, v32, 2u);
          if ( !v31 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v23, v42, IoStatusBlock);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((volatile __int32 *)&v12->Type, 0LL);
          return -1073741670;
        }
        return result;
      }
    }
    else
    {
      v19 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
      v7 = v19;
      P = v19;
      if ( v19 )
      {
        KeInitializeEvent(v19, SynchronizationEvent, 0);
        v32 = 0;
        goto LABEL_23;
      }
      v18 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v18;
  }
  return result;
}
