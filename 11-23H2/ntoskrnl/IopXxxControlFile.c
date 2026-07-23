/*
 * XREFs of IopXxxControlFile @ 0x1406E5510
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140684C04 (PfpVolumePrefetchMetadata.c)
 *     NtDeviceIoControlFile @ 0x1406E54A0 (NtDeviceIoControlFile.c)
 *     PfpPrefetchEntireDirectory @ 0x14075EABC (PfpPrefetchEntireDirectory.c)
 *     NtFsControlFile @ 0x1407BB200 (NtFsControlFile.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfSnPrefetchFileMetadata @ 0x1407D806C (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     IoThreadToProcess @ 0x14028A210 (IoThreadToProcess.c)
 *     IoGetAttachedDevice @ 0x1402AF6A0 (IoGetAttachedDevice.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1402B9480 (IoSetIoCompletionEx2.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IopSetFileObjectExtensionFlag @ 0x140302D9C (IopSetFileObjectExtensionFlag.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x14035B864 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopDecrementCompletionContextUsageCount @ 0x14035DDA8 (IopDecrementCompletionContextUsageCount.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopIsStandardFsctlIoControlCode @ 0x14055612C (IopIsStandardFsctlIoControlCode.c)
 *     MmUpdateMdlTracker @ 0x14061D804 (MmUpdateMdlTracker.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x140737DB0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     PsIsProcessAppContainer @ 0x14077F27C (PsIsProcessAppContainer.c)
 *     AstAddBloomFilter @ 0x1407AE2B4 (AstAddBloomFilter.c)
 *     AstTestBloomFilter @ 0x1407AE340 (AstTestBloomFilter.c)
 *     RtlIsSandboxedToken @ 0x1407F3A60 (RtlIsSandboxedToken.c)
 *     ExRaiseAccessViolation @ 0x140874020 (ExRaiseAccessViolation.c)
 *     IopCopyOffloadCapable @ 0x140875C88 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     IopValidateJunctionTarget @ 0x1409467E4 (IopValidateJunctionTarget.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409EB9FC (EtwpTimLogMitigationForProcess.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        IRP *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *a7,
        unsigned int a8,
        volatile void *Address,
        int a10,
        char a11)
{
  char *v12; // r8
  PVOID v13; // r9
  LOCK_OPERATION v14; // r13d
  int v15; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v17; // rcx
  ULONG v18; // eax
  int v19; // ebx
  struct _FILE_OBJECT *v20; // rsi
  _DWORD *v21; // rax
  unsigned int v22; // edi
  _KPROCESS *Process; // rcx
  __int16 v24; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  unsigned int v26; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  struct _DEVICE_OBJECT *v30; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoDeviceControl)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // r14
  void *v33; // rdi
  char v34; // bl
  IRP *v35; // rax
  IRP *v36; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v38; // r8
  ULONG v39; // ecx
  ULONG v40; // edx
  int v41; // eax
  __int64 v42; // rcx
  struct _IRP *v43; // rax
  struct _MDL *Mdl; // rdi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  char *v48; // rcx
  int v49; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile __int32 *v51; // rbx
  __int64 v52; // rax
  unsigned int v53; // ebx
  __int64 v54; // rbx
  struct _IO_STATUS_BLOCK *v55; // rcx
  int v56; // r9d
  HANDLE v57; // r14
  PVOID v58; // r14
  ULONG v59; // eax
  __int64 v60; // rcx
  struct _IRP *Pool2; // rax
  __int64 v62; // rcx
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // rsi
  char v66; // di
  char v67; // al
  char v68; // di
  __int64 *v69; // r8
  char IsProcessAppContainer; // al
  struct _KPROCESS *v71; // rax
  int v72; // eax
  struct _IRP *MasterIrp; // rax
  unsigned __int8 v74; // [rsp+50h] [rbp-198h]
  char IsSandboxedToken; // [rsp+51h] [rbp-197h]
  unsigned int Size; // [rsp+54h] [rbp-194h]
  ULONG Size_4; // [rsp+58h] [rbp-190h]
  char v78; // [rsp+5Ch] [rbp-18Ch]
  unsigned int v79; // [rsp+60h] [rbp-188h] BYREF
  char v80; // [rsp+68h] [rbp-180h] BYREF
  char v81; // [rsp+69h] [rbp-17Fh] BYREF
  char v82; // [rsp+6Ah] [rbp-17Eh]
  SIZE_T Length; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h] BYREF
  int v85; // [rsp+80h] [rbp-168h]
  char v86; // [rsp+84h] [rbp-164h]
  PVOID v87; // [rsp+88h] [rbp-160h]
  void *Src; // [rsp+90h] [rbp-158h]
  int v89; // [rsp+98h] [rbp-150h]
  unsigned int v90; // [rsp+9Ch] [rbp-14Ch]
  PVOID VirtualAddress; // [rsp+A0h] [rbp-148h]
  __int128 v92; // [rsp+A8h] [rbp-140h] BYREF
  struct _IO_STATUS_BLOCK *v93; // [rsp+B8h] [rbp-130h]
  PVOID P; // [rsp+C0h] [rbp-128h] BYREF
  PDEVICE_OBJECT v95; // [rsp+C8h] [rbp-120h]
  HANDLE Handlea; // [rsp+D0h] [rbp-118h]
  PIRP Irp; // [rsp+D8h] [rbp-110h]
  unsigned int v98; // [rsp+E0h] [rbp-108h] BYREF
  __int64 v99; // [rsp+E8h] [rbp-100h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F0h] [rbp-F8h] BYREF
  PVOID v101; // [rsp+F8h] [rbp-F0h] BYREF
  __int64 v102; // [rsp+100h] [rbp-E8h] BYREF
  PETHREAD Thread; // [rsp+108h] [rbp-E0h]
  __int64 v104; // [rsp+110h] [rbp-D8h] BYREF
  struct _DEVICE_OBJECT *v105; // [rsp+118h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-C8h] BYREF
  struct _KTHREAD *v107; // [rsp+140h] [rbp-A8h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+150h] [rbp-98h] BYREF
  __int64 *v109; // [rsp+170h] [rbp-78h]
  __int64 v110; // [rsp+178h] [rbp-70h]
  struct _DEVICE_OBJECT **v111; // [rsp+180h] [rbp-68h]
  __int64 v112; // [rsp+188h] [rbp-60h]
  unsigned int *v113; // [rsp+190h] [rbp-58h]
  __int64 v114; // [rsp+198h] [rbp-50h]

  Handlea = a2;
  v82 = a11;
  Irp = a2;
  v93 = a5;
  v12 = a7;
  Src = a7;
  v79 = a8;
  v13 = (PVOID)Address;
  VirtualAddress = (PVOID)Address;
  LODWORD(Length) = a10;
  v14 = IoReadAccess;
  v87 = 0LL;
  HandleInformation = 0LL;
  v92 = 0LL;
  v15 = a6 & 3;
  v85 = v15;
  v90 = v15;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  if ( IoFsctlProcessMitigationEnabled )
  {
    if ( !PreviousMode )
      goto LABEL_152;
    if ( !a11 && !IopIsStandardFsctlIoControlCode(a6) )
    {
      v65 = *(_QWORD *)(v64 + 184);
      v66 = *(_DWORD *)(v65 + 2928);
      v67 = v66 & 4;
      v68 = v66 & 2;
      if ( v68 || v67 )
      {
        if ( (*(_DWORD *)(v65 + 2928) & 4) != 0 )
        {
          v69 = MITIGATION_AUDIT_PROHIBIT_FSCTL_SYSTEM_CALLS;
          if ( v68 )
            v69 = MITIGATION_ENFORCE_PROHIBIT_FSCTL_SYSTEM_CALLS;
          EtwpTimLogMitigationForProcess(3LL, (unsigned int)(v68 != 0) + 1, v69, v65);
          _InterlockedAnd((volatile signed __int32 *)(v65 + 2928), 0xFFFFFFFB);
          v13 = VirtualAddress;
          v12 = (char *)Src;
        }
        if ( v68 )
          return 3221225506LL;
      }
      v15 = v85;
    }
  }
  if ( !PreviousMode )
  {
LABEL_152:
    Size = v79;
    Size_4 = Length;
    goto LABEL_19;
  }
  v17 = (__int64)v93;
  if ( (unsigned __int64)v93 >= 0x7FFFFFFF0000LL )
    v17 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v17 = *(_DWORD *)v17;
  if ( v15 )
  {
    v18 = Length;
LABEL_7:
    Size_4 = v18;
    goto LABEL_8;
  }
  if ( !v13 )
  {
    v18 = 0;
    LODWORD(Length) = 0;
    goto LABEL_7;
  }
  Size_4 = Length;
  ProbeForWrite(v13, (unsigned int)Length, 1u);
  v12 = (char *)Src;
LABEL_8:
  if ( v15 == 3 )
  {
    Size = v79;
  }
  else if ( v12 )
  {
    Size = v79;
    if ( v79 && ((unsigned __int64)&v12[v79] > 0x7FFFFFFF0000LL || &v12[v79] < v12) )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    Size = 0;
    v79 = 0;
  }
LABEL_19:
  Object = 0LL;
  v19 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v20 = (struct _FILE_OBJECT *)Object;
  if ( v19 >= 0 && (v21 = (_DWORD *)*((_QWORD *)Object + 26)) != 0LL && (*v21 & 4) != 0 )
  {
    IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
    v20 = (struct _FILE_OBJECT *)Object;
    if ( IsProcessAppContainer )
    {
      ObfDereferenceObject(Object);
      v19 = -1073739504;
    }
    v22 = v79;
    Size = v79;
    Size_4 = Length;
  }
  else
  {
    v22 = Size;
  }
  if ( v19 < 0 )
    return (unsigned int)v19;
  if ( v20->CompletionContext && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v20);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v20);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v19 = IopCopyOffloadCapable(v20, a6);
    if ( v19 < 0 )
      goto LABEL_192;
  }
  else if ( a6 == 590892 )
  {
    v19 = IopSetFileObjectExtensionFlag((__int64)v20, 16, 1);
    if ( v19 < 0 )
    {
      ObfDereferenceObject(v20);
      return (unsigned int)v19;
    }
  }
  if ( Handlea )
  {
    v101 = 0LL;
    v19 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v101, 0LL);
    v87 = v101;
    if ( v19 >= 0 )
    {
      KeResetEvent((PRKEVENT)v101);
      goto LABEL_30;
    }
LABEL_192:
    ObfDereferenceObject(v20);
    return (unsigned int)v19;
  }
LABEL_30:
  P = 0LL;
  IsSandboxedToken = 0;
  v78 = 0;
  if ( PreviousMode && (a6 == 589988 && v22 >= 4 || a6 == 590860 && v22 >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v71 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v71, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    v86 = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v89 = 0;
      if ( a6 == 590860 )
        v72 = *((_DWORD *)Src + 8);
      else
        v72 = *(_DWORD *)Src;
      v89 = v72;
      if ( v72 == -1610612733 )
      {
        v78 = 1;
        v19 = IopValidateJunctionTarget(a6, Src, Size, Size_4, &P, &v79);
        Size = v79;
      }
      if ( v19 < 0 )
      {
        if ( v87 )
          ObfDereferenceObject(v87);
        goto LABEL_192;
      }
    }
  }
  if ( (v20->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v51 = (volatile __int32 *)Object;
    v52 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v80 = 0;
    if ( _InterlockedExchange(v51 + 29, 1) )
    {
      v20 = (struct _FILE_OBJECT *)Object;
      v53 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v80);
    }
    else
    {
      if ( v52 )
        *(_BYTE *)(v52 + 18) = 1;
      v20 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v53 = 0;
    }
    if ( v80 )
    {
      if ( v87 )
        ObfDereferenceObject(v87);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v20);
      return v53;
    }
    v74 = 1;
    Size = v79;
    v26 = Length;
    Size_4 = Length;
  }
  else
  {
    v74 = 0;
    if ( PreviousMode )
    {
      v107 = KeGetCurrentThread();
      Process = v107->ApcState.Process;
      if ( Process[1].Affinity.StaticBitmap[30] )
      {
        v24 = WORD2(Process[2].Affinity.StaticBitmap[20]);
        if ( v24 == 332 || v24 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)v93->Status;
          Status->Status = Status->Status;
          v93 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v20 = (struct _FILE_OBJECT *)Object;
      Size = v79;
      v26 = Length;
      Size_4 = Length;
    }
    else
    {
      v26 = Size_4;
    }
  }
  if ( (v20->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v20->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v20);
  v30 = AttachedDevice;
  v95 = AttachedDevice;
  if ( a11 )
  {
    if ( AstIsActive )
    {
      if ( dword_140C038E0 )
      {
        if ( (BYTE2(AttachedDevice[-1].DeviceObjectExtension) & 2) != 0
          && !(unsigned __int8)AstTestBloomFilter(v29, AttachedDevice, a6) )
        {
          AstAddBloomFilter(v62, v30, a6);
          if ( (unsigned int)dword_140C038E0 > 5 )
          {
            if ( tlgKeywordOn((__int64)&dword_140C038E0, 0x200000000000LL) )
            {
              v104 = 0x80000000LL;
              v109 = &v104;
              v110 = 8LL;
              v105 = v30;
              v111 = &v105;
              v112 = 8LL;
              v98 = a6;
              v113 = &v98;
              v114 = 4LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C038E0,
                (unsigned __int8 *)byte_14002C8B5,
                0LL,
                0LL,
                5u,
                &v108);
            }
          }
        }
      }
    }
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = v30->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( PreviousMode && VirtualAddress )
          {
            if ( v85 == 1 )
            {
              if ( v26 )
              {
                v48 = (char *)VirtualAddress + v26;
                if ( (unsigned __int64)v48 > 0x7FFFFFFF0000LL || v48 < VirtualAddress )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v85 == 2 && v26 )
            {
              v46 = (unsigned __int64)VirtualAddress;
              v47 = (unsigned __int64)VirtualAddress + v26 - 1;
              if ( (unsigned __int64)VirtualAddress > v47 || v47 >= 0x7FFFFFFF0000LL )
                ExRaiseAccessViolation();
              v28 = (v47 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              do
              {
                *(_BYTE *)v46 = *(_BYTE *)v46;
                v46 = (v46 & 0xFFFFFFFFFFFFF000uLL) + 4096;
              }
              while ( v46 != v28 );
              v20 = (struct _FILE_OBJECT *)Object;
              Size = v79;
              v26 = Length;
              Size_4 = Length;
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
            v20 = (struct _FILE_OBJECT *)Object;
            Size = v79;
            v26 = Length;
            Size_4 = Length;
          }
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v30->DriverObject) )
            v33 = (void *)VfFastIoSnapState();
          else
            v33 = 0LL;
          LOBYTE(v28) = 1;
          v34 = FastIoDeviceControl(v20, v28, Src, Size, VirtualAddress, v26, a6, &v92, v95);
          if ( v33 )
            VfFastIoCheckState(v33);
          if ( v34 )
          {
            v54 = 0LL;
            v99 = 0LL;
            v102 = 0LL;
            v81 = 0;
            if ( (a3.LowPart & 1) != 0 )
            {
              v55 = v93;
              HIDWORD(v93->Pointer) = DWORD2(v92);
              v55->Status = v92;
            }
            else
            {
              *(_OWORD *)&v93->Status = v92;
            }
            v56 = v92;
            v57 = Handlea;
            if ( v20->CompletionContext
              && ((v20->Flags & 0x2000000) == 0 || (v92 & 0xC0000000) == 0x80000000)
              && (v92 & 0xC0000000) != 0xC0000000 )
            {
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v20, &v81, &v99, &v102);
              v56 = v92;
              v54 = v99;
            }
            if ( v57 )
            {
              if ( (v20->Flags & 0x8000000) == 0 || v54 && (v56 & 0xC0000000) == 0x80000000 )
              {
                v58 = v87;
                KeSetEvent((PRKEVENT)v87, 0, 0);
              }
              else
              {
                v58 = v87;
              }
              ObfDereferenceObject(v58);
              v56 = v92;
            }
            if ( v74 )
            {
              IopReleaseFileObjectLock((volatile __int32 *)&v20->Type);
              v56 = v92;
            }
            if ( v54 && a4 )
            {
              if ( (int)IoSetIoCompletionEx2(v54, v102, a4, v56, *((__int64 *)&v92 + 1), 1u, 0LL) < 0 )
              {
                v63 = -1073741670;
                LODWORD(v92) = -1073741670;
              }
              else
              {
                v63 = v92;
              }
              if ( (v63 & 0xC0000000) == 0x80000000 )
                LODWORD(v92) = 259;
            }
            if ( v81 )
              IopDecrementCompletionContextUsageCount((ULONG_PTR)v20);
            ObfDereferenceObject(v20);
            return (unsigned int)v92;
          }
          v30 = v95;
        }
      }
    }
  }
  Handlea = &v20->Flags;
  if ( (v20->Flags & 0x4000000) == 0 )
    KeResetEvent(&v20->Event);
  v35 = (IRP *)IopAllocateIrpExReturn((__int64)v30, (unsigned __int8)v30->StackSize, v74 ^ 1u);
  v36 = v35;
  Irp = v35;
  if ( v35 )
  {
    v35->Tail.Overlay.OriginalFileObject = v20;
    v35->Tail.Overlay.Thread = Thread;
    v35->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v35->RequestorMode = PreviousMode;
    v35->PendingReturned = 0;
    v35->Cancel = 0;
    v35->CancelRoutine = 0LL;
    v35->UserEvent = (PKEVENT)v87;
    v35->UserIosb = v93;
    v35->Overlay.AllocationSize = a3;
    v35->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v35->Tail.Overlay.CurrentStackLocation;
    v38 = v82;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = (v82 != 0) + 13;
    CurrentStackLocation[-1].FileObject = v20;
    v39 = Size_4;
    CurrentStackLocation[-1].Parameters.Read.Length = Size_4;
    v40 = Size;
    CurrentStackLocation[-1].Parameters.Create.Options = Size;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v35->MdlAddress = 0LL;
    v35->AssociatedIrp.MasterIrp = 0LL;
    v41 = v85;
    if ( (v30->Flags & 0x80000) != 0 )
    {
      if ( !IsSandboxedToken )
        v41 = 3;
      v85 = v41;
    }
    if ( v41 == 2 )
      goto LABEL_62;
    if ( !v41 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size || Size_4 )
      {
        if ( P )
        {
          v36->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          v59 = Size_4;
          if ( Size > Size_4 )
            v59 = Size;
          v60 = 105LL;
          if ( !v38 )
            v60 = 97LL;
          Pool2 = (struct _IRP *)ExAllocatePool2(v60, v59, 1112764233LL);
          v36->AssociatedIrp.MasterIrp = Pool2;
          if ( Src )
            memmove(Pool2, Src, Size);
          v40 = Size;
          v39 = Size_4;
        }
        v36->Flags = 48;
        v36->UserBuffer = VirtualAddress;
        if ( v39 )
          v36->Flags = 112;
      }
      else
      {
        v36->Flags = 0;
        v36->UserBuffer = 0LL;
      }
      if ( v40 < v39 )
        memset((char *)v36->AssociatedIrp.MasterIrp + v40, 0, v39 - v40);
      goto LABEL_73;
    }
    v49 = v41 - 1;
    if ( !v49 )
    {
LABEL_62:
      v36->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( Size && Src )
      {
        v42 = 107LL;
        if ( !v38 )
          v42 = 99LL;
        v43 = (struct _IRP *)ExAllocatePool2(v42, Size, 1112764233LL);
        v36->AssociatedIrp.MasterIrp = v43;
        memmove(v43, Src, Size);
        v36->Flags = 48;
        v39 = Size_4;
      }
      if ( v39 )
      {
        Mdl = IoAllocateMdl(VirtualAddress, v39, 0, 1u, v36);
        v36->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v90 = *(_DWORD *)&CurrentStackLocation[-1].MajorFunction;
        LOBYTE(v14) = v85 != 1;
        MmProbeAndLockPages(Mdl, PreviousMode, v14);
        if ( (MmTrackLockedPages & 1) != 0 )
          MmUpdateMdlTracker((unsigned __int64)Mdl, (__int64)v95->DriverObject->MajorFunction[v90], (__int64)v95);
      }
      v30 = v95;
    }
    else if ( v49 == 2 )
    {
      v36->Flags = 0;
      v36->UserBuffer = VirtualAddress;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_73:
    CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1 | (unsigned __int8)(2
                                                                                            * (HandleInformation.GrantedAccess & 2));
    if ( !a11 )
      v36->Flags |= 0x800u;
    if ( a6 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(MmWriteableSharedUserData + 732));
      v20 = (struct _FILE_OBJECT *)Object;
    }
    if ( !IsSandboxedToken || v78 )
      return IopSynchronousServiceTail(v30, (__int64)v36, v20, v82 == 0, PreviousMode, v74, 2u);
    MasterIrp = v36->AssociatedIrp.MasterIrp;
    if ( a6 == 590860 )
      MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
    if ( *(_DWORD *)&MasterIrp->Type != -1610612733 )
      return IopSynchronousServiceTail(v30, (__int64)v36, v20, v82 == 0, PreviousMode, v74, 2u);
    IopExceptionCleanupEx(v20, v36, v87, 0LL, (*(_DWORD *)Handlea & 2) != 0);
    return 3221225485LL;
  }
  IopAllocateIrpCleanup(v20, v87);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
