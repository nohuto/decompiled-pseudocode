/*
 * XREFs of NtQueryEaFile @ 0x1407CA290
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
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944B78 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  struct _KEVENT *v11; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  char *v14; // rax
  UNICODE_STRING *v15; // rbx
  UNICODE_STRING *v16; // rdi
  signed int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  NTSTATUS result; // eax
  int v22; // edi
  NTSTATUS v23; // edi
  char v24; // r15
  struct _FILE_OBJECT *v25; // r14
  _DWORD *v26; // r13
  char v27; // di
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // rbx
  __int64 v30; // r9
  NTSTATUS v31; // ebx
  __int64 v32; // rdx
  IRP *v33; // rax
  IRP *Irp; // rdi
  ULONG *p_Flags; // r12
  PIO_STATUS_BLOCK v36; // rax
  struct _KEVENT *v37; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DEVICE_OBJECT *v39; // rcx
  ULONG Flags; // eax
  ULONG v41; // eax
  char v42; // r12
  char v43; // al
  char v44; // bl
  struct _KEVENT *v45; // rax
  UNICODE_STRING *Pool2; // rax
  bool v47; // zf
  __int64 v48; // rax
  PMDL Mdl; // rcx
  char v50; // [rsp+40h] [rbp-88h]
  char v51; // [rsp+41h] [rbp-87h]
  _WORD v52[7]; // [rsp+42h] [rbp-86h] BYREF
  ULONG v53; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+68h] [rbp-60h]
  UNICODE_STRING *v57; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  PIRP v59; // [rsp+80h] [rbp-48h]
  __int128 v60; // [rsp+88h] [rbp-40h] BYREF

  Object = 0LL;
  v11 = 0LL;
  P = 0LL;
  *(_QWORD *)&v52[3] = 0LL;
  v51 = 0;
  v53 = 0;
  v60 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v50 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v51 = 1;
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(65LL, EaListLength, 1631940425LL);
      v15 = Pool2;
      *(_QWORD *)&v52[3] = Pool2;
      if ( !Pool2 )
        return -1073741670;
      memmove(Pool2, EaList, EaListLength);
    }
    else
    {
      v15 = *(UNICODE_STRING **)&v52[3];
    }
    if ( EaIndex )
      v53 = *EaIndex;
LABEL_31:
    v23 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    v24 = 0;
    if ( v23 < 0 )
    {
      if ( v51 )
        ExFreePoolWithTag(v15, 0);
      return v23;
    }
    v25 = (struct _FILE_OBJECT *)Object;
    v26 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v27 = (*((_DWORD *)Object + 20) & 4) != 0;
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v29 = (volatile __int32 *)Object;
      v30 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      LOBYTE(v52[0]) = 0;
      if ( _InterlockedExchange(v29 + 29, 1) )
      {
        v25 = (struct _FILE_OBJECT *)Object;
        v31 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v50, v27, v30, v52);
      }
      else
      {
        if ( v30 )
          *(_BYTE *)(v30 + 18) = 1;
        v25 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v31 = 0;
      }
      if ( !LOBYTE(v52[0]) )
      {
        v24 = 1;
        v15 = *(UNICODE_STRING **)&v52[3];
LABEL_39:
        LOBYTE(v52[0]) = v24;
        if ( (*v26 & 0x4000000) == 0 )
          KeResetEvent(&v25->Event);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v25);
        LOBYTE(v32) = RelatedDeviceObject->StackSize;
        v33 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v32, 0LL);
        Irp = v33;
        v59 = v33;
        if ( v33 )
        {
          v33->Tail.Overlay.OriginalFileObject = v25;
          v33->Tail.Overlay.Thread = CurrentThread;
          v33->RequestorMode = v50;
          p_Flags = &v33->Flags;
          if ( v24 )
          {
            v36 = IoStatusBlock;
            v37 = 0LL;
          }
          else
          {
            *p_Flags = 4;
            v36 = (PIO_STATUS_BLOCK)&v60;
            v37 = (struct _KEVENT *)P;
          }
          Irp->UserEvent = v37;
          Irp->UserIosb = v36;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v25;
          if ( v51 )
          {
            Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v15;
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v15;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
          }
          v39 = RelatedDeviceObject;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) == 0 )
          {
            if ( (Flags & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v42 = v50;
                IopProbeAndLockPages_1(
                  (__int64)Mdl,
                  v50,
                  1,
                  (__int64)RelatedDeviceObject,
                  CurrentStackLocation[-1].MajorFunction);
                v39 = RelatedDeviceObject;
                v41 = Length;
                goto LABEL_51;
              }
              goto LABEL_49;
            }
LABEL_48:
            Irp->UserBuffer = Buffer;
LABEL_49:
            v41 = Length;
LABEL_50:
            v42 = v50;
LABEL_51:
            CurrentStackLocation[-1].Parameters.Read.Length = v41;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v53;
            CurrentStackLocation[-1].Flags = 0;
            v43 = 0;
            if ( RestartScan )
            {
              CurrentStackLocation[-1].Flags = 1;
              v43 = 1;
            }
            if ( ReturnSingleEntry )
            {
              v43 |= 2u;
              CurrentStackLocation[-1].Flags = v43;
            }
            if ( EaIndex )
              CurrentStackLocation[-1].Flags = v43 | 4;
            v44 = v52[0];
            result = IopSynchronousServiceTail(v39, (__int64)Irp, v25, 0, v42, v52[0], 2u);
            if ( !v44 )
              return IopSynchronousApiServiceTail(result, P, Irp, v42, (unsigned int *)&v60, IoStatusBlock);
            return result;
          }
          v41 = Length;
          if ( !Length )
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
            *p_Flags |= 0x50u;
            goto LABEL_50;
          }
          v48 = ExAllocatePool2(65LL, Length, 1112764233LL);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v48;
          if ( v48 )
          {
            *p_Flags |= 0x70u;
            v39 = RelatedDeviceObject;
            goto LABEL_48;
          }
          IopExceptionCleanupEx(v25, Irp, 0LL, P, (*v26 & 2) != 0);
          v47 = v15 == 0LL;
        }
        else
        {
          if ( (*v26 & 2) == 0 )
            ExFreePoolWithTag(v11, 0);
          IopAllocateIrpCleanup(v25, 0LL);
          v47 = v51 == 0;
        }
        if ( !v47 )
          ExFreePoolWithTag(v15, 0);
        return -1073741670;
      }
      if ( v51 )
        ExFreePoolWithTag(*(PVOID *)&v52[3], 0);
    }
    else
    {
      v45 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
      v11 = v45;
      P = v45;
      if ( v45 )
      {
        KeInitializeEvent(v45, SynchronizationEvent, 0);
        goto LABEL_39;
      }
      if ( v51 )
        ExFreePoolWithTag(v15, 0);
      v31 = -1073741670;
    }
    ObfDereferenceObject(v25);
    return v31;
  }
  v13 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v13 = (__int64)IoStatusBlock;
  *(_DWORD *)v13 = *(_DWORD *)v13;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v20 = (__int64)EaIndex;
    v53 = *(_DWORD *)v20;
  }
  if ( !EaList || !EaListLength )
  {
    v15 = *(UNICODE_STRING **)&v52[3];
    goto LABEL_31;
  }
  v57 = 0LL;
  *(_DWORD *)&v52[1] = 0;
  v51 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (UNICODE_STRING *)ExAllocatePool2(97LL, EaListLength, 1631940425LL);
  *(_QWORD *)&v52[3] = v15;
  memmove(v15, EaList, EaListLength);
  v16 = v15;
  v57 = v15;
  v17 = EaListLength;
  *(_DWORD *)&v52[1] = EaListLength;
  while ( 1 )
  {
    if ( v17 < 5 )
    {
      *(_DWORD *)&v52[1] = 0;
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)&v52[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v18 = *((unsigned __int8 *)&v16->MaximumLength + 2) + 6;
    if ( v17 < v18 )
      break;
    v19 = *(unsigned int *)&v16->Length;
    if ( !(_DWORD)v19 )
    {
      *(_DWORD *)&v52[1] = v17 - v18;
      if ( (int)(v17 - v18) >= 0 )
      {
        v11 = 0LL;
        goto LABEL_31;
      }
      break;
    }
    if ( ((*((unsigned __int8 *)&v16->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v17 -= v19;
    *(_DWORD *)&v52[1] = v17;
    if ( v17 < 0 )
      break;
    v16 = (UNICODE_STRING *)((char *)v16 + v19);
    v57 = v16;
  }
  v22 = (_DWORD)v16 - (_DWORD)v15;
  *(_DWORD *)&v52[1] = v22;
  ExFreePoolWithTag(v15, 0);
  *(_QWORD *)&v52[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v22;
  return -2147483628;
}
