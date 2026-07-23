/*
 * XREFs of NtQueryVolumeInformationFile @ 0x140686AF0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140686890 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x1406869B4 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     IopGetMountFlag @ 0x140206E40 (IopGetMountFlag.c)
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     IopGetDriverPathInformation @ 0x1405556C4 (IopGetDriverPathInformation.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765710 (IopWaitAndAcquireFileObjectLock.c)
 *     PsIsProcessAppContainer @ 0x14077F59C (PsIsProcessAppContainer.c)
 *     ExRaiseAccessViolation @ 0x1408742B0 (ExRaiseAccessViolation.c)
 *     IopAllocateIrpCleanup @ 0x1409441F4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944A28 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // esi
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r10
  __int64 v11; // rbx
  ULONG v12; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // rax
  bool v15; // al
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int16 v19; // cx
  ACCESS_MASK v20; // edx
  int v21; // ebx
  char *v22; // rdi
  _DWORD *v23; // rax
  _DWORD *v24; // r12
  unsigned int v25; // ecx
  int MountFlag; // ecx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  NTSTATUS result; // eax
  unsigned int v32; // ecx
  struct _KTHREAD *v33; // rax
  volatile __int32 *v34; // rbx
  __int64 v35; // rax
  char v36; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *v38; // rax
  PIO_STATUS_BLOCK v39; // rdx
  struct _KEVENT *v40; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _DWORD *v42; // rdi
  struct _IRP *v43; // rax
  __int64 v44; // r9
  IRP *v45; // rsi
  char v46; // bl
  unsigned __int8 v47; // r14
  struct _KEVENT *Pool2; // rax
  char IsProcessAppContainer; // al
  _BYTE *v50; // rbx
  NTSTATUS DriverPathInformation; // eax
  NTSTATUS v52; // r13d
  int Object; // [rsp+20h] [rbp-A8h]
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  char v55; // [rsp+40h] [rbp-88h] BYREF
  KPROCESSOR_MODE v56; // [rsp+41h] [rbp-87h]
  bool v57; // [rsp+42h] [rbp-86h]
  PVOID p_Flags; // [rsp+48h] [rbp-80h] BYREF
  NTSTATUS v59; // [rsp+50h] [rbp-78h]
  PVOID v60; // [rsp+58h] [rbp-70h]
  struct _DEVICE_OBJECT *v61; // [rsp+60h] [rbp-68h]
  PVOID P; // [rsp+68h] [rbp-60h]
  PIRP Irp; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v64; // [rsp+78h] [rbp-50h]
  PVOID v65; // [rsp+80h] [rbp-48h]
  __int128 v66; // [rsp+88h] [rbp-40h] BYREF

  v8 = 0;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v64 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v56 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v11 = FsInformationClass;
    v12 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    Process = CurrentThread->ApcState.Process;
    v15 = 0;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v19 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v19 == 332 || v19 == 452 )
        v15 = 1;
    }
    v57 = v15;
    if ( v15 )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v56;
    }
    else if ( Length )
    {
      v16 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v17 || v17 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v16 = *(_BYTE *)v16;
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v16 != v18 );
    }
  }
  else
  {
    v11 = FsInformationClass;
  }
  v20 = IopQueryFsOperationAccess[v11];
  p_Flags = 0LL;
  v21 = ObReferenceObjectByHandle(FileHandle, v20, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &p_Flags, 0LL);
  v22 = (char *)p_Flags;
  v65 = p_Flags;
  if ( v21 >= 0 )
  {
    v23 = (_DWORD *)*((_QWORD *)p_Flags + 26);
    if ( v23 )
    {
      if ( (*v23 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v22 = (char *)p_Flags;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(p_Flags);
          v21 = -1073739504;
        }
      }
    }
  }
  if ( v21 < 0 )
    return v21;
  v24 = v22 + 80;
  Irp = (PIRP)(v22 + 80);
  v25 = *((_DWORD *)v22 + 20);
  if ( (v25 & 0x800) != 0 )
  {
    if ( FsInformationClass != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v22);
      return -1073741808;
    }
  }
  else if ( FsInformationClass != FileFsDeviceInformation )
  {
    goto LABEL_40;
  }
  if ( (*((_DWORD *)v22 + 20) & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v22 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v27 = *((_QWORD *)v22 + 1);
    v28 = *(_QWORD *)(v27 + 56);
    if ( v28 )
    {
      v29 = *((_QWORD *)v22 + 2);
      if ( v29 == v28 )
      {
        MountFlag = *(_WORD *)(v29 + 4) & 1;
        v22 = (char *)p_Flags;
      }
      else
      {
        MountFlag = IopGetMountFlag(*((_QWORD *)v22 + 1));
      }
    }
    if ( Length < 8 )
    {
      v8 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v27 + 72);
      v30 = *(_DWORD *)(v27 + 52);
      *((_DWORD *)FsInformation + 1) = v30;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v30 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v59 = 0;
    }
    ObfDereferenceObject(v22);
    return v8;
  }
LABEL_40:
  if ( (v25 & 2) != 0 )
  {
    v32 = v25 >> 2;
    LOBYTE(v32) = v32 & 1;
    LODWORD(v61) = v32;
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = (volatile __int32 *)p_Flags;
    v35 = KeAbPreAcquire((__int64)p_Flags + 128, 0LL);
    v55 = 0;
    if ( _InterlockedExchange(v34 + 29, 1) )
    {
      v22 = (char *)p_Flags;
      v21 = IopWaitAndAcquireFileObjectLock(p_Flags, (__int64)&v55);
    }
    else
    {
      if ( v35 )
        *(_BYTE *)(v35 + 18) = 1;
      v22 = (char *)p_Flags;
      ObfReferenceObject(p_Flags);
      v21 = 0;
    }
    if ( !v55 )
    {
      v36 = 1;
      goto LABEL_47;
    }
    ObfDereferenceObject(v22);
    return v21;
  }
  v36 = 0;
LABEL_47:
  v55 = v36;
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    P = 0LL;
    P = (PVOID)ExAllocatePool2(97LL, Length, 1112764233LL);
    memmove(P, FsInformation, Length);
    v50 = P;
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)P, Length);
    v52 = DriverPathInformation;
    v59 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v50;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v50 )
      ExFreePoolWithTag(v50, 0);
    if ( (*v24 & 2) != 0 )
      IopReleaseFileObjectLock((volatile __int32 *)v22);
    ObfDereferenceObject(v22);
    return v52;
  }
  else
  {
    if ( (*v24 & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v22 + 152));
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
    v61 = RelatedDeviceObject;
    if ( (*v24 & 2) == 0 )
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
      v60 = Pool2;
      if ( !Pool2 )
      {
        ObfDereferenceObject(v22);
        return -1073741670;
      }
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      RelatedDeviceObject = v61;
    }
    v38 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)RelatedDeviceObject,
                   (unsigned __int8)RelatedDeviceObject->StackSize,
                   0LL);
    Irp = v38;
    if ( v38 )
    {
      v38->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
      v38->Tail.Overlay.Thread = v64;
      v38->RequestorMode = v56;
      v66 = 0LL;
      p_Flags = &v38->Flags;
      if ( v36 )
      {
        v39 = IoStatusBlock;
        v40 = 0LL;
      }
      else
      {
        v38->Flags = 4;
        v39 = (PIO_STATUS_BLOCK)&v66;
        v40 = (struct _KEVENT *)v60;
        p_Flags = &v38->Flags;
      }
      v38->UserEvent = v40;
      v38->UserIosb = v39;
      v38->Overlay.AllocationSize.QuadPart = 0LL;
      CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 10;
      v42 = v65;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v65;
      v38->UserBuffer = FsInformation;
      v38->AssociatedIrp.MasterIrp = 0LL;
      v38->MdlAddress = 0LL;
      v43 = (struct _IRP *)ExAllocatePool2(65LL, Length, 1112764233LL);
      v45 = Irp;
      Irp->AssociatedIrp.MasterIrp = v43;
      if ( v43 )
      {
        *(_DWORD *)p_Flags |= 0x870u;
        CurrentStackLocation[-1].Parameters.Read.Length = Length;
        CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
        v46 = v55;
        LOBYTE(HandleInformation) = v55;
        v47 = v56;
        LOBYTE(Object) = v56;
        LOBYTE(v44) = 1;
        result = IopSynchronousServiceTail(v61, v45, v42, v44, Object, HandleInformation, 2);
        if ( !v46 )
          return IopSynchronousApiServiceTail((unsigned int)result, v60, v45, v47, &v66, IoStatusBlock);
      }
      else
      {
        IopExceptionCleanupEx(v42, v45, 0LL, v60, (v42[20] & 2) != 0);
        return -1073741670;
      }
    }
    else
    {
      if ( (*v24 & 2) == 0 )
        ExFreePoolWithTag(v60, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      return -1073741670;
    }
  }
  return result;
}
