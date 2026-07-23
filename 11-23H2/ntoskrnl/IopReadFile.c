/*
 * XREFs of IopReadFile @ 0x14074C3B0
 * Callers:
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     NtReadFile @ 0x14074C2A0 (NtReadFile.c)
 *     IopIoRingDispatchRead @ 0x14094961C (IopIoRingDispatchRead.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x14028F3F4 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopSetCopyInformationExtension @ 0x14028FBFC (IopSetCopyInformationExtension.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     IopExceptionFilter @ 0x140555BA8 (IopExceptionFilter.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseAccessViolation @ 0x140874020 (ExRaiseAccessViolation.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140ACB224 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB2FC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *Object,
        HANDLE Handle,
        __int64 a3,
        void *a4,
        struct _IO_STATUS_BLOCK *a5,
        struct _IRP *VirtualAddress,
        ULONG Length,
        __int64 a8,
        ULONG *a9,
        PVOID a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        PMDL *a13,
        _OWORD *a14)
{
  IRP *v16; // r15
  char v17; // di
  ULONG v18; // r12d
  ULONG *p_Flags; // rdi
  bool v20; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // r9
  __int64 v22; // rcx
  _KPROCESS *Process; // rcx
  __int64 v24; // rax
  bool v25; // zf
  struct _IRP *v26; // r12
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  int v32; // ebx
  __int16 v33; // ax
  __int64 Status; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  bool v36; // bl
  __int64 Irp; // rax
  struct _IO_STATUS_BLOCK *v38; // rax
  PVOID v39; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _DEVICE_OBJECT *v41; // rdi
  ULONG Flags; // eax
  PVOID *p_UserBuffer; // r8
  ULONG v44; // r13d
  int v45; // ecx
  unsigned __int8 v46; // dl
  _DWORD *FileObjectExtension; // rax
  struct _KTHREAD *v49; // rax
  __int64 v50; // r9
  __int64 v51; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  PDEVICE_OBJECT v53; // rbx
  void *v54; // rdi
  char v55; // bl
  struct _KTHREAD *v56; // rax
  struct _KTHREAD *v57; // rcx
  unsigned __int64 v58; // rax
  PVOID v59; // rbx
  unsigned int SectorSize; // ecx
  int v61; // edx
  ULONG v62; // eax
  __int64 Pool2; // rax
  struct _MDL *Mdl; // rax
  KPROCESSOR_MODE v65; // dl
  bool v66; // [rsp+50h] [rbp-A8h]
  KPROCESSOR_MODE PreviousMode; // [rsp+51h] [rbp-A7h]
  bool v68; // [rsp+52h] [rbp-A6h]
  char v69; // [rsp+54h] [rbp-A4h] BYREF
  char v70; // [rsp+55h] [rbp-A3h]
  char v71; // [rsp+56h] [rbp-A2h]
  int v72; // [rsp+58h] [rbp-A0h]
  PVOID v73; // [rsp+60h] [rbp-98h]
  LARGE_INTEGER CurrentByteOffset; // [rsp+68h] [rbp-90h] BYREF
  ULONG v75; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT v76; // [rsp+78h] [rbp-80h]
  __int64 v77; // [rsp+80h] [rbp-78h]
  int v78; // [rsp+88h] [rbp-70h]
  __int128 v79; // [rsp+90h] [rbp-68h] BYREF
  PVOID v80[2]; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-48h]
  struct _KTHREAD *v82; // [rsp+B8h] [rbp-40h]
  __int64 v83; // [rsp+110h] [rbp+18h]

  v83 = a3;
  v16 = 0LL;
  v77 = 0LL;
  v72 = 0;
  v17 = 0;
  v73 = 0LL;
  v75 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  v70 = 1;
  if ( a10 && (a3 || Handle || Object->CompletionContext) )
  {
    v32 = -1073741811;
    v26 = VirtualAddress;
    goto LABEL_61;
  }
  if ( a13 && *a13 )
  {
    v18 = Length;
    if ( (*a13)->ByteCount < Length )
    {
      v32 = -1073741811;
      v26 = VirtualAddress;
      goto LABEL_61;
    }
  }
  else
  {
    v18 = Length;
  }
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  p_Flags = &Object->Flags;
  v80[1] = &Object->Flags;
  v20 = a12 >= 0 && (Object->Flags & 2) != 0;
  v68 = v20;
  v66 = v20;
  v78 = a12 & 0x40000000;
  v71 = (a12 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v76 = RelatedDeviceObject;
  if ( !PreviousMode || a10 )
  {
    v30 = a8;
    if ( a8 )
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    v26 = VirtualAddress;
    if ( a9 )
      v75 = *a9;
  }
  else
  {
    v22 = (__int64)a5;
    a3 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v82 = KeGetCurrentThread();
    Process = v82->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v33 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( (v33 == 332 || v33 == 452) && !v20 )
      {
        Status = (unsigned int)a5->Status;
        *(_DWORD *)Status = *(_DWORD *)Status;
        a5 = (struct _IO_STATUS_BLOCK *)Status;
        v83 |= 1uLL;
      }
    }
    if ( a14 )
    {
      v26 = VirtualAddress;
    }
    else
    {
      v24 = v18;
      v25 = v18 == 0;
      v26 = VirtualAddress;
      if ( !v25 )
      {
        v27 = (unsigned __int64)VirtualAddress;
        v28 = (unsigned __int64)VirtualAddress + v24 - 1;
        if ( (unsigned __int64)VirtualAddress > v28 || v28 >= 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v29 = (v28 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v27 = *(_BYTE *)v27;
          v27 = (v27 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v27 != v29 );
      }
    }
    if ( Object->CompletionContext && (v83 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v72 = -1073741811;
      v17 = v20;
      v32 = -1073741811;
      goto LABEL_61;
    }
    v30 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    }
    v31 = (__int64)a9;
    if ( a9 )
    {
      if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
        v31 = 0x7FFFFFFF0000LL;
      v75 = *(_DWORD *)v31;
    }
  }
  if ( !PreviousMode || (*p_Flags & 8) == 0 )
    goto LABEL_36;
  SectorSize = RelatedDeviceObject->SectorSize;
  v61 = SectorSize - 1;
  if ( (_WORD)SectorSize )
  {
    v62 = Length;
    if ( (v61 & Length) != 0 )
      goto LABEL_127;
  }
  if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v26) != 0 )
  {
    v62 = Length;
LABEL_127:
    if ( (_WORD)SectorSize && v62 % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v26) != 0 )
      goto LABEL_131;
    v61 = SectorSize - 1;
  }
  if ( v30 && (_WORD)SectorSize && (v61 & CurrentByteOffset.LowPart) != 0 )
  {
    v32 = -1073741811;
    goto LABEL_60;
  }
LABEL_36:
  if ( Handle )
  {
    v80[0] = 0LL;
    v32 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v80, 0LL);
    v73 = v80[0];
    v72 = v32;
    v17 = v66;
    if ( v32 < 0 )
      goto LABEL_61;
    KeResetEvent((PRKEVENT)v80[0]);
    RelatedDeviceObject = v76;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v36 = v68;
  if ( !v68 )
  {
    if ( !v30 && (Object->Flags & 0x280) == 0 )
    {
      if ( v73 )
      {
        ObfDereferenceObject(v73);
        v32 = -1073741811;
        goto LABEL_60;
      }
      goto LABEL_131;
    }
LABEL_39:
    if ( CurrentByteOffset.HighPart >= 0 )
    {
      if ( !a10 && (Object->Flags & 0x4000000) == 0 )
      {
        KeResetEvent(&Object->Event);
        RelatedDeviceObject = v76;
      }
      LOBYTE(a3) = !v68;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, a3);
      v16 = (IRP *)Irp;
      v77 = Irp;
      if ( !Irp )
      {
        if ( v73 )
          ObfDereferenceObject(v73);
        if ( v68 )
          IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
        v32 = -1073741670;
        goto LABEL_60;
      }
      *(_QWORD *)(Irp + 192) = Object;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_DWORD *)(Irp + 16) = 0;
      *(_QWORD *)(Irp + 80) = v73;
      if ( a10 )
      {
        ObfReferenceObjectWithTag(a10, 0x49526F49u);
        v16->Flags |= 0x200000u;
        v38 = a11;
        v39 = a10;
      }
      else
      {
        *(_QWORD *)(Irp + 88) = v83;
        v38 = a5;
        v39 = a4;
      }
      v16->Overlay.AsynchronousParameters.UserApcContext = v39;
      v16->UserIosb = v38;
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = Object;
      v16->AssociatedIrp.MasterIrp = 0LL;
      v16->MdlAddress = 0LL;
      v41 = v76;
      Flags = v76->Flags;
      if ( (Flags & 4) != 0 )
      {
        v44 = Length;
        if ( Length )
        {
          if ( a14 )
          {
            v16->AssociatedIrp.MasterIrp = v26;
            v16->Flags |= 0x50u;
          }
          else
          {
            Pool2 = ExAllocatePool2(73LL, Length, 1112764233LL);
            v16->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
            if ( !Pool2 )
            {
              v32 = -1073741670;
              goto LABEL_60;
            }
            v16->Flags |= 0x70u;
          }
          p_UserBuffer = &v16->UserBuffer;
          v16->UserBuffer = v26;
          goto LABEL_50;
        }
        v16->Flags |= 0x50u;
      }
      else
      {
        if ( (Flags & 0x10) == 0 )
        {
          v16->UserBuffer = v26;
          p_UserBuffer = &v16->UserBuffer;
          if ( a13 && (p_UserBuffer = &v16->UserBuffer, *a13) )
          {
            v16->MdlAddress = *a13;
            *a13 = 0LL;
            p_UserBuffer = &v16->UserBuffer;
            v44 = Length;
            if ( a10 )
            {
              v16->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcContext | 1);
              p_UserBuffer = &v16->UserBuffer;
            }
          }
          else
          {
            v44 = Length;
          }
          goto LABEL_50;
        }
        v44 = Length;
        if ( Length )
        {
          Mdl = IoAllocateMdl(v26, Length, 0, 1u, v16);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          if ( a14 )
            v65 = 0;
          else
            v65 = PreviousMode;
          MmProbeAndLockPages(Mdl, v65, IoWriteAccess);
        }
      }
      p_UserBuffer = &v16->UserBuffer;
LABEL_50:
      v45 = v16->Flags | 0x100;
      v16->Flags = v45;
      if ( (Object->Flags & 8) != 0 )
      {
        v45 |= 1u;
        v16->Flags = v45;
      }
      if ( !v78 )
        v16->Flags = v45 | 0x800;
      if ( a14 )
      {
        v16->RequestorMode = 0;
        *p_UserBuffer = v26;
        v32 = IopSetCopyInformationExtension((__int64)v16, a14);
        v46 = v66;
        v17 = v66;
        if ( v32 < 0 )
          goto LABEL_61;
        v41 = v76;
      }
      else
      {
        v46 = v66;
      }
      CurrentStackLocation[-1].Parameters.Read.Length = v44;
      CurrentStackLocation[-1].Parameters.Create.Options = v75;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
      FileObjectExtension = Object->FileObjectExtension;
      if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = a5->Information;
      v32 = IopSynchronousServiceTail(v41, (__int64)v16, Object, v71, PreviousMode, v46, 0);
      v70 = 0;
LABEL_60:
      v17 = v66;
      goto LABEL_61;
    }
    if ( v73 )
      ObfDereferenceObject(v73);
    if ( v36 )
    {
LABEL_151:
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
      v32 = -1073741811;
      goto LABEL_60;
    }
LABEL_131:
    v32 = -1073741811;
    goto LABEL_60;
  }
  v49 = KeGetCurrentThread();
  --v49->KernelApcDisable;
  v50 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
  v69 = 0;
  if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
  {
    v32 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v69);
  }
  else
  {
    if ( v50 )
      *(_BYTE *)(v50 + 18) = 1;
    ObfReferenceObject(Object);
    v32 = 0;
  }
  v72 = v32;
  if ( v69 )
  {
    if ( v73 )
      ObfDereferenceObject(v73);
    goto LABEL_60;
  }
  if ( !v30 || CurrentByteOffset.QuadPart == -2 )
    CurrentByteOffset = Object->CurrentByteOffset;
  if ( !Object->PrivateCacheMap || a14 )
    goto LABEL_95;
  v79 = 0LL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( CurrentByteOffset.HighPart < 0 )
  {
    if ( v73 )
      ObfDereferenceObject(v73);
    goto LABEL_151;
  }
  v53 = v76;
  if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v76->DriverObject) )
    v54 = (void *)VfFastIoSnapState();
  else
    v54 = 0LL;
  LOBYTE(v51) = 1;
  v55 = FastIoRead(Object, &CurrentByteOffset, Length, v51, v75, v26, &v79, v53);
  if ( v54 )
    VfFastIoCheckState(v54);
  if ( !v55 || (_DWORD)v79 && (_DWORD)v79 != -1073741807 && (_DWORD)v79 != -2147483643 )
  {
LABEL_95:
    v36 = v68;
    RelatedDeviceObject = v76;
    goto LABEL_39;
  }
  v56 = KeGetCurrentThread();
  ++v56->ReadOperationCount;
  __incgsdword(0x2EDCu);
  v57 = KeGetCurrentThread();
  v58 = DWORD2(v79);
  v57->ReadTransferCount += DWORD2(v79);
  __addgsqword(0x2EE8u, v58);
  *(_OWORD *)&a5->Status = v79;
  v59 = v73;
  v17 = v66;
  if ( Handle )
  {
    if ( (Object->Flags & 0x8000000) == 0 )
      KeSetEvent((PRKEVENT)v73, 0, 0);
    ObfDereferenceObject(v59);
  }
  IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
  v32 = v79;
LABEL_61:
  if ( v70 )
  {
    if ( a14 )
      IopFreeCopyObjectsFromDataBuffer((__int64)v26, 1, a3);
    if ( v16 )
      IopExceptionCleanupEx(Object, v16, v73, 0LL, v17);
    else
      ObfDereferenceObject(Object);
  }
  return (unsigned int)v32;
}
