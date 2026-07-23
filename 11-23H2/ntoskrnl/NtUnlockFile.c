/*
 * XREFs of NtUnlockFile @ 0x1407B4DB0
 * Callers:
 *     <none>
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x1402AF6A0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rbx
  __int64 v11; // rcx
  ULONG *p_Flags; // r12
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // r15
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v18; // rdi
  char v19; // r14
  unsigned __int8 v20; // r14
  char v21; // di
  struct _KTHREAD *v22; // rax
  volatile __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  NTSTATUS v26; // edi
  struct _KEVENT *v27; // rsi
  struct _KEVENT *Pool2; // rax
  __int64 Irp; // rax
  IRP *v30; // rdi
  PIO_STATUS_BLOCK v31; // rax
  struct _KEVENT *v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *v34; // rax
  __int64 v35; // [rsp+40h] [rbp-88h] BYREF
  PVOID Object; // [rsp+48h] [rbp-80h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-78h] BYREF
  LONGLONG v38; // [rsp+58h] [rbp-70h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-68h] BYREF
  PVOID v40; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  __int128 v42; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v43[6]; // [rsp+88h] [rbp-40h] BYREF

  QuadPart = 0LL;
  v38 = 0LL;
  HandleInformation = 0LL;
  *(_OWORD *)v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v10 = (struct _FILE_OBJECT *)Object;
  v40 = Object;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v38 = Length->QuadPart;
    v10 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v38 = Length->QuadPart;
  }
  p_Flags = &v10->Flags;
  if ( (v10->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v10);
  v14 = AttachedDevice;
  DriverObject = AttachedDevice->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v42 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v18 = (void *)VfFastIoSnapState();
      else
        v18 = 0LL;
      v19 = FastIoUnlockSingle(v10, &QuadPart, &v38, CurrentThread->ApcState.Process, Key, &v42, v14);
      if ( v18 )
        VfFastIoCheckState(v18);
      if ( v19 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v42;
        ObfDereferenceObject(v10);
        return v42;
      }
    }
  }
  if ( (*p_Flags & 2) == 0 )
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v27 = Pool2;
    HandleInformation = Pool2;
    if ( Pool2 )
    {
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v20 = 0;
      goto LABEL_38;
    }
    v26 = -1073741670;
LABEL_36:
    ObfDereferenceObject(v10);
    return v26;
  }
  v20 = 1;
  v21 = (*p_Flags & 4) != 0;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v23 = (volatile __int32 *)Object;
  v24 = KeAbPreAcquire((__int64)Object + 128, 0LL);
  LOBYTE(v35) = 0;
  if ( _InterlockedExchange(v23 + 29, 1) )
  {
    v10 = (struct _FILE_OBJECT *)Object;
    v26 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v21, v24, &v35);
  }
  else
  {
    if ( v24 )
      *(_BYTE *)(v24 + 18) = 1;
    v10 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
    v26 = 0;
  }
  if ( (_BYTE)v35 )
    goto LABEL_36;
  v27 = 0LL;
  HandleInformation = 0LL;
LABEL_38:
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v10->Event);
  LOBYTE(v25) = v14->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v14, v25, 0LL);
  v30 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v10;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v20 )
    {
      v31 = IoStatusBlock;
      v32 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v31 = (PIO_STATUS_BLOCK)v43;
      v32 = v27;
    }
    v30->UserEvent = v32;
    v30->UserIosb = v31;
    v30->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v40;
    v34 = (CHAR *)ExAllocatePool2(97LL, 8LL, 1699508041LL);
    *(_QWORD *)v34 = v38;
    v30->Tail.Overlay.AuxiliaryBuffer = v34;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v34;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v14, (__int64)v30, (struct _FILE_OBJECT *)v40, 0, PreviousMode, v20, 2u);
    if ( !v20 )
      return IopSynchronousApiServiceTail(result, v27, v30, PreviousMode, v43, IoStatusBlock);
  }
  else
  {
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    IopAllocateIrpCleanup(v10, 0LL);
    return -1073741670;
  }
  return result;
}
