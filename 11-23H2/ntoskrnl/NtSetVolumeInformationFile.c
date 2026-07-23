/*
 * XREFs of NtSetVolumeInformationFile @ 0x140881B10
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x14030196C (IopReferenceFileObject.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IoGetRelatedTargetDevice @ 0x14079478C (IoGetRelatedTargetDevice.c)
 *     IoReportTargetDeviceChange @ 0x140881F50 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  unsigned __int8 v7; // bl
  struct _KEVENT *v8; // r13
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v11; // rdx
  ULONG v12; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // rax
  char *v15; // rcx
  __int16 v16; // ax
  char v17; // al
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v19; // rsi
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v21; // rdi
  ULONG *p_Flags; // r12
  char v23; // r14
  struct _KTHREAD *v24; // rax
  struct _FILE_OBJECT *v25; // rbx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  IRP *v29; // rax
  IRP *v30; // r14
  struct _IO_STATUS_BLOCK *v31; // rax
  struct _KEVENT *v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  ULONG v34; // ebx
  struct _IRP *v35; // rax
  char v36; // dl
  int v37; // eax
  unsigned __int8 v38; // r12
  PVOID v39; // rcx
  struct _KEVENT *Pool2; // rax
  unsigned __int8 v41; // [rsp+40h] [rbp-C8h] BYREF
  KPROCESSOR_MODE v42; // [rsp+41h] [rbp-C7h]
  char v43; // [rsp+42h] [rbp-C6h]
  ULONG v44; // [rsp+44h] [rbp-C4h]
  struct _FILE_OBJECT *v45; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK *v47; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *v49; // [rsp+68h] [rbp-A0h]
  void *Src; // [rsp+70h] [rbp-98h]
  ULONG *v51; // [rsp+78h] [rbp-90h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+80h] [rbp-88h]
  PIRP Irp; // [rsp+88h] [rbp-80h]
  __int128 v54; // [rsp+90h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+A0h] [rbp-68h] BYREF
  GUID v56; // [rsp+A4h] [rbp-64h]
  int v57; // [rsp+B4h] [rbp-54h]
  __int64 v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C4h] [rbp-44h]

  v44 = Length;
  Src = FsInformation;
  v47 = IoStatusBlock;
  v7 = 0;
  v45 = 0LL;
  v8 = 0LL;
  P = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v11 = FsInformationClass;
    v12 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    v7 = 0;
    if ( !(_BYTE)v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30]
      && ((v16 = WORD2(Process[2].Affinity.StaticBitmap[20]), v16 == 332) || v16 == 452
        ? (v17 = 1, v43 = 1)
        : (v17 = 0, v43 = 0),
          v17) )
    {
      if ( !Length )
        goto LABEL_22;
      if ( ((unsigned __int8)FsInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      if ( !Length )
        goto LABEL_22;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v15 = (char *)FsInformation + Length;
    if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < FsInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    v11 = FsInformationClass;
  }
LABEL_22:
  result = IopReferenceFileObject(FileHandle, IopSetFsOperationAccess[v11], PreviousMode, (PVOID *)&v45, 0LL);
  if ( result < 0 )
    return result;
  v19 = v45;
  RelatedTargetDevice = IoGetRelatedTargetDevice(v45, &Object);
  v21 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v21 = 0LL;
  Object = v21;
  p_Flags = &v19->Flags;
  v51 = &v19->Flags;
  if ( (v19->Flags & 2) != 0 )
  {
    v23 = (v19->Flags & 4) != 0;
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = v45;
    v26 = KeAbPreAcquire((__int64)&v45->Lock, 0LL);
    v41 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v25->Busy, 1) )
    {
      v19 = v45;
      v27 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&v45->Type, v42, v23, v26, &v41);
    }
    else
    {
      if ( v26 )
        *(_BYTE *)(v26 + 18) = 1;
      v19 = v45;
      ObfReferenceObject(v45);
      v27 = 0;
    }
    if ( v41 )
    {
      ObfDereferenceObject(v19);
      v39 = Object;
      if ( !Object )
        return v27;
      goto LABEL_47;
    }
    v7 = 1;
    v21 = (struct _DEVICE_OBJECT *)Object;
  }
  else
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v8 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      ObfDereferenceObject(v19);
LABEL_62:
      if ( v21 )
        ObfDereferenceObject(v21);
      return -1073741670;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  }
  v41 = v7;
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v19->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v19);
  LOBYTE(v28) = RelatedDeviceObject->StackSize;
  v29 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v28, 0LL);
  v30 = v29;
  Irp = v29;
  if ( !v29 )
  {
    if ( (*p_Flags & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v19, 0LL);
    goto LABEL_62;
  }
  v29->Tail.Overlay.OriginalFileObject = v19;
  v29->Tail.Overlay.Thread = v49;
  v29->RequestorMode = v42;
  v54 = 0LL;
  if ( v7 )
  {
    v31 = v47;
    v32 = 0LL;
  }
  else
  {
    v29->Flags = 4;
    v31 = (struct _IO_STATUS_BLOCK *)&v54;
    v32 = v8;
  }
  v30->UserEvent = v32;
  v30->UserIosb = v31;
  v30->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 11;
  CurrentStackLocation[-1].FileObject = v19;
  v30->AssociatedIrp.MasterIrp = 0LL;
  v30->MdlAddress = 0LL;
  v34 = v44;
  v35 = (struct _IRP *)ExAllocatePool2(97LL, v44, 1112764233LL);
  v30->AssociatedIrp.MasterIrp = v35;
  memmove(v35, Src, v34);
  v36 = v42;
  if ( !v42
    || FsInformationClass != FileFsLabelInformation
    || (v37 = *(_DWORD *)v30->AssociatedIrp.MasterIrp, v37 >= 0) && v37 + 4 <= v44 )
  {
    v30->Flags |= 0x30u;
    CurrentStackLocation[-1].Parameters.Read.Length = v44;
    CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
    v38 = v41;
    v27 = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v30, v19, 0, v36, v41, 2u);
    if ( !v38 )
      v27 = IopSynchronousApiServiceTail(v27, v8, v30, v42, (unsigned int *)&v54, v47);
    if ( !v21 )
      return v27;
    if ( v27 >= 0 )
    {
      v57 = 0;
      v60 = 0;
      NotificationStructure = 2359297;
      v58 = 0LL;
      v59 = -1;
      v56 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v21, &NotificationStructure);
    }
    v39 = v21;
LABEL_47:
    ObfDereferenceObject(v39);
    return v27;
  }
  IopExceptionCleanupEx(v19, v30, 0LL, v8, (*v51 & 2) != 0);
  if ( v21 )
    ObfDereferenceObject(v21);
  return -1073741811;
}
