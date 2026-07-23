/*
 * XREFs of NtLockFile @ 0x140765680
 * Callers:
 *     <none>
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1402B9480 (IoSetIoCompletionEx2.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     IopSetLockOperationProcess @ 0x1403019FC (IopSetLockOperationProcess.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140301B48 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14035B864 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14035DDA8 (IopDecrementCompletionContextUsageCount.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  PLARGE_INTEGER v11; // r14
  PLARGE_INTEGER v12; // r15
  struct _KEVENT *v13; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rax
  struct _FILE_OBJECT *v18; // rbx
  __int64 v19; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  __int64 FastIoDispatch; // rdx
  __int64 (__fastcall *v23)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r15
  void *v24; // r14
  char v25; // r12
  PIO_STATUS_BLOCK v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  int v30; // edx
  ULONG *p_Flags; // r12
  char v32; // r14
  struct _KTHREAD *v33; // rax
  volatile __int32 *v34; // rbx
  __int64 v35; // rax
  NTSTATUS v36; // r14d
  unsigned __int8 v37; // r15
  IRP *v38; // rax
  __int64 v39; // r14
  char v40; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v42; // al
  LONGLONG *Pool2; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v45; // [rsp+50h] [rbp-88h] BYREF
  KPROCESSOR_MODE v46; // [rsp+51h] [rbp-87h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v48; // [rsp+60h] [rbp-78h] BYREF
  LONGLONG QuadPart; // [rsp+70h] [rbp-68h] BYREF
  LONGLONG v50; // [rsp+78h] [rbp-60h] BYREF
  PIRP Irp; // [rsp+80h] [rbp-58h] BYREF
  PVOID v52; // [rsp+88h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION v53; // [rsp+90h] [rbp-48h] BYREF
  PVOID v54; // [rsp+98h] [rbp-40h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  LARGE_INTEGER v57; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v58; // [rsp+F8h] [rbp+20h]

  v58 = ApcContext;
  v57.QuadPart = (LONGLONG)ApcRoutine;
  v11 = Length;
  v12 = ByteOffset;
  Object = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  QuadPart = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v53);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v53.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v16 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v57, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)v12 & 3) != 0 || (QuadPart = v12->QuadPart, ((unsigned __int8)v11 & 3) != 0) )
        ExRaiseDatatypeMisalignment();
      v50 = v11->QuadPart;
      v17 = Object;
      if ( *((_QWORD *)Object + 22) && (v57.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = v12->QuadPart;
      v50 = v11->QuadPart;
      v17 = Object;
    }
    v17[72] = 1;
    v18 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v54 = 0LL;
        v27 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v54, 0LL);
        v13 = (struct _KEVENT *)v54;
        v52 = v54;
        if ( v27 >= 0 )
          KeResetEvent((PRKEVENT)v54);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
      DriverObject = RelatedDeviceObject->DriverObject;
      FastIoDispatch = (__int64)DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        v23 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))(FastIoDispatch + 48);
        if ( v23 )
        {
          v48 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
            v24 = (void *)VfFastIoSnapState();
          else
            v24 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v25 = v23(
                  v18,
                  &QuadPart,
                  &v50,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v48,
                  RelatedDeviceObject);
          if ( v24 )
            VfFastIoCheckState(v24);
          if ( v25 )
          {
            if ( (v57.LowPart & 1) != 0 )
            {
              v26 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v48);
              v26->Status = v48;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v48;
            }
            if ( v13 )
            {
              if ( (v18->Flags & 0x8000000) == 0 )
                KeSetEvent(v13, 0, 0);
              ObfDereferenceObject(v13);
            }
            if ( v18->CompletionContext )
            {
              v28 = (__int64)v58;
              if ( v58 )
              {
                if ( (v18->Flags & 0x2000000) == 0 )
                {
                  v55 = 0LL;
                  Irp = 0LL;
                  v45 = 0;
                  IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v18, &v45, &v55, &Irp);
                  if ( v55 )
                  {
                    v29 = IoSetIoCompletionEx2(v55, (__int64)Irp, v28, v48, *((__int64 *)&v48 + 1), 1u, 0LL);
                    v30 = v48;
                    if ( v29 < 0 )
                      v30 = -1073741670;
                    LODWORD(v48) = v30;
                  }
                  if ( v45 )
                    IopDecrementCompletionContextUsageCount((ULONG_PTR)v18);
                }
              }
            }
            ObfDereferenceObject(v18);
            return v48;
          }
        }
      }
      p_Flags = &v18->Flags;
      if ( (v18->Flags & 2) != 0 )
      {
        v32 = (v18->Flags & 4) != 0;
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        v34 = (volatile __int32 *)Object;
        v35 = KeAbPreAcquire((__int64)Object + 128, 0LL);
        v45 = 0;
        if ( _InterlockedExchange(v34 + 29, 1) )
        {
          v18 = (struct _FILE_OBJECT *)Object;
          v36 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v46, v32, v35, &v45);
        }
        else
        {
          if ( v35 )
            *(_BYTE *)(v35 + 18) = 1;
          v18 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v36 = 0;
        }
        if ( v45 )
        {
          if ( v13 )
            ObfDereferenceObject(v13);
          ObfDereferenceObject(v18);
          return v36;
        }
        v37 = 1;
      }
      else
      {
        v37 = 0;
      }
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v18->Event);
      LOBYTE(v19) = v37 ^ 1;
      LOBYTE(FastIoDispatch) = RelatedDeviceObject->StackSize;
      v38 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, FastIoDispatch, v19);
      v39 = (__int64)v38;
      Irp = v38;
      if ( v38 )
      {
        v38->Tail.Overlay.OriginalFileObject = v18;
        v38->Tail.Overlay.Thread = CurrentThread;
        v40 = v46;
        v38->RequestorMode = v46;
        v38->UserEvent = v13;
        v38->UserIosb = IoStatusBlock;
        v38->Overlay.AllocationSize = v57;
        v38->Overlay.AsynchronousParameters.UserApcContext = v58;
        CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v18;
        CurrentStackLocation[-1].Flags = 0;
        v42 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v42 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v42 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (LONGLONG *)ExAllocatePool2(97LL, 8LL, 1699508041LL);
        *Pool2 = v50;
        *(_QWORD *)(v39 + 160) = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v39, v18, 0, v40, v37, 2u);
      }
      else
      {
        IopAllocateIrpCleanup(v18, v13);
        return -1073741670;
      }
    }
  }
  return result;
}
