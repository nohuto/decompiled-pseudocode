/*
 * XREFs of NtUnlockFile @ 0x14071CD90
 * Callers:
 *     <none>
 * Callees:
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  KPROCESSOR_MODE v8; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rbx
  __int64 v11; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v13; // r15
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  PFAST_IO_UNLOCK_SINGLE FastIoUnlockSingle; // rsi
  __int64 v17; // rdi
  char v18; // r14
  char v19; // r14
  bool v20; // di
  struct _KTHREAD *v21; // rax
  volatile __int32 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  NTSTATUS v26; // edi
  LONG *p_LockNV; // rsi
  struct _KEVENT *Pool2; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  IRP *v31; // rdi
  PIO_STATUS_BLOCK v32; // rax
  struct _KEVENT *v33; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *v35; // rax
  __int64 v36; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v39; // [rsp+58h] [rbp-60h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  PVOID v41; // [rsp+68h] [rbp-50h]
  __int128 v42; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-38h]
  __int128 v44; // [rsp+88h] [rbp-30h] BYREF

  QuadPart = 0LL;
  v39 = 0LL;
  HandleInformation = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *((_BYTE *)CurrentThread + 562);
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             v8,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v10 = (struct _FILE_OBJECT *)Object;
  v41 = Object;
  if ( result < 0 )
    return result;
  if ( v8 )
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
    v39 = Length->QuadPart;
    v10 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v39 = Length->QuadPart;
  }
  if ( (v10->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v10);
  v13 = AttachedDevice;
  DriverObject = AttachedDevice->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v42 = 0LL;
      if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v17 = sub_140A8A9AC();
      else
        v17 = 0LL;
      v18 = sub_14042A5E0(v10, &QuadPart);
      if ( v17 )
        sub_140A8A8D4(v17, FastIoUnlockSingle);
      if ( v18 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v42;
        ObfDereferenceObject(v10);
        return v42;
      }
    }
  }
  if ( (v10->Flags & 2) != 0 )
  {
    v19 = 1;
    v20 = (v10->Flags & 4) != 0;
    v21 = KeGetCurrentThread();
    --*((_WORD *)v21 + 242);
    v22 = (volatile __int32 *)Object;
    v23 = sub_140347C10((__int64)Object + 128, 0LL);
    LOBYTE(v36) = 0;
    if ( _InterlockedExchange(v22 + 29, 1) )
    {
      LOBYTE(v25) = v20;
      LOBYTE(v24) = v8;
      v10 = (struct _FILE_OBJECT *)Object;
      v26 = sub_140709FAC((volatile signed __int32 *)Object, v24, v25, v23, &v36);
    }
    else
    {
      if ( v23 )
        *(_BYTE *)(v23 + 18) = 1;
      v10 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v26 = 0;
    }
    if ( !(_BYTE)v36 )
    {
      p_LockNV = 0LL;
      HandleInformation = 0LL;
      goto LABEL_36;
    }
LABEL_34:
    ObfDereferenceObject(v10);
    return v26;
  }
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
  p_LockNV = &Pool2->Header.LockNV;
  HandleInformation = Pool2;
  if ( !Pool2 )
  {
    v26 = -1073741670;
    goto LABEL_34;
  }
  KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  v19 = 0;
LABEL_36:
  sub_1402AABB0((__int64)v10);
  LOBYTE(v29) = v13->StackSize;
  v30 = sub_1402AACA0((__int64)v13, v29, 0LL);
  v31 = (IRP *)v30;
  Object = (PVOID)v30;
  if ( v30 )
  {
    *(_QWORD *)(v30 + 192) = v10;
    *(_QWORD *)(v30 + 152) = CurrentThread;
    *(_BYTE *)(v30 + 64) = v8;
    if ( v19 )
    {
      v32 = IoStatusBlock;
      v33 = 0LL;
    }
    else
    {
      *(_DWORD *)(v30 + 16) = 4;
      v32 = (PIO_STATUS_BLOCK)&v44;
      v33 = (struct _KEVENT *)p_LockNV;
    }
    v31->UserEvent = v33;
    v31->UserIosb = v32;
    v31->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v31->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v41;
    v35 = (CHAR *)ExAllocatePool2(97LL, 8LL, 538996553LL);
    *(_QWORD *)v35 = v39;
    v31->Tail.Overlay.AuxiliaryBuffer = v35;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v35;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = sub_140731680(v13, v31, v8, v19, 2);
    if ( !v19 )
      return sub_1406BF8BC(result, p_LockNV, v31, v8, (unsigned int *)&v44, IoStatusBlock);
  }
  else
  {
    if ( p_LockNV )
      ExFreePoolWithTag(p_LockNV, 0);
    sub_140933BA4(v10, 0LL);
    return -1073741670;
  }
  return result;
}
