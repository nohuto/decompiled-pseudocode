/*
 * XREFs of NtLockFile @ 0x14071D220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A36D0 @ 0x1402A36D0 (sub_1402A36D0.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1404178E8 @ 0x1404178E8 (sub_1404178E8.c)
 *     sub_1404179B0 @ 0x1404179B0 (sub_1404179B0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
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
  struct _KEVENT *v11; // rsi
  KPROCESSOR_MODE v12; // r12
  NTSTATUS result; // eax
  __int64 v14; // rcx
  struct _FILE_OBJECT *v15; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v17; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  PFAST_IO_LOCK FastIoLock; // r15
  __int64 v22; // r14
  char v23; // al
  PIO_STATUS_BLOCK v24; // rcx
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  bool v28; // r14
  struct _KTHREAD *v29; // rax
  volatile __int32 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  NTSTATUS v34; // r14d
  char v35; // r15
  __int64 v36; // r8
  __int64 v37; // rdx
  IRP *v38; // rax
  IRP *v39; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v41; // al
  CHAR *Pool2; // rax
  char v43; // [rsp+50h] [rbp-88h] BYREF
  char v44; // [rsp+51h] [rbp-87h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v46; // [rsp+60h] [rbp-78h]
  LONGLONG QuadPart; // [rsp+70h] [rbp-68h] BYREF
  LONGLONG v48; // [rsp+78h] [rbp-60h]
  PIRP Irp; // [rsp+80h] [rbp-58h] BYREF
  PVOID v50; // [rsp+88h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION v51; // [rsp+90h] [rbp-48h] BYREF
  PVOID v52; // [rsp+98h] [rbp-40h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  LARGE_INTEGER v55; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v56; // [rsp+F8h] [rbp+20h]

  v56 = ApcContext;
  v55.QuadPart = (LONGLONG)ApcRoutine;
  Object = 0LL;
  v11 = 0LL;
  v50 = 0LL;
  QuadPart = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *((_BYTE *)CurrentThread + 562);
  result = sub_1402AC790(FileHandle, 0, v12, &Object, &v51);
  if ( result >= 0 )
  {
    if ( v12 )
    {
      if ( (v51.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      sub_1402AAB50((unsigned int **)&IoStatusBlock, (__int64 *)&v55, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v48 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
      if ( *((_QWORD *)Object + 22) && (v55.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v48 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
    }
    v15->LockOperation = 1;
    CurrentProcess = PsGetCurrentProcess();
    result = sub_1402A36D0((__int64)v15, CurrentProcess, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v52 = 0LL;
        v17 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v12, &v52, 0LL);
        v11 = (struct _KEVENT *)v52;
        v50 = v52;
        if ( v17 >= 0 )
          KeResetEvent((PRKEVENT)v52);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      DriverObject = RelatedDeviceObject->DriverObject;
      FastIoDispatch = DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v46 = 0LL;
          if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
            v22 = sub_140A8A9AC();
          else
            v22 = 0LL;
          v23 = sub_14042A5E0(v15, &QuadPart);
          v44 = v23;
          if ( v22 )
          {
            sub_140A8A8D4(v22, FastIoLock);
            v23 = v44;
          }
          if ( v23 )
          {
            if ( (v55.LowPart & 1) != 0 )
            {
              v24 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v46);
              v24->Status = v46;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v46;
            }
            if ( v11 )
            {
              if ( (v15->Flags & 0x8000000) == 0 )
                KeSetEvent(v11, 0, 0);
              ObfDereferenceObject(v11);
            }
            if ( v15->CompletionContext )
            {
              v25 = (int)v56;
              if ( v56 )
              {
                if ( (v15->Flags & 0x2000000) == 0 )
                {
                  v53 = 0LL;
                  Irp = 0LL;
                  v43 = 0;
                  sub_1404179B0((ULONG_PTR)v15, &v43, &v53, &Irp);
                  if ( v53 )
                  {
                    v26 = IoSetIoCompletion(v53, (_DWORD)Irp, v25, v46, *((__int64 *)&v46 + 1), 1);
                    v27 = v46;
                    if ( v26 < 0 )
                      v27 = -1073741670;
                    LODWORD(v46) = v27;
                  }
                  if ( v43 )
                    sub_1404178E8((ULONG_PTR)v15);
                }
              }
            }
            ObfDereferenceObject(v15);
            return v46;
          }
        }
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v28 = (v15->Flags & 4) != 0;
        v29 = KeGetCurrentThread();
        --*((_WORD *)v29 + 242);
        v30 = (volatile __int32 *)Object;
        v31 = sub_140347C10((__int64)Object + 128, 0LL);
        v43 = 0;
        if ( _InterlockedExchange(v30 + 29, 1) )
        {
          LOBYTE(v33) = v28;
          LOBYTE(v32) = v12;
          v15 = (struct _FILE_OBJECT *)Object;
          v34 = sub_140709FAC((volatile signed __int32 *)Object, v32, v33, v31, &v43);
        }
        else
        {
          if ( v31 )
            *(_BYTE *)(v31 + 18) = 1;
          v15 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v34 = 0;
        }
        if ( v43 )
        {
          if ( v11 )
            ObfDereferenceObject(v11);
          ObfDereferenceObject(v15);
          return v34;
        }
        v35 = 1;
      }
      else
      {
        v35 = 0;
      }
      sub_1402AABB0((__int64)v15);
      LOBYTE(v36) = v35 ^ 1;
      LOBYTE(v37) = RelatedDeviceObject->StackSize;
      v38 = (IRP *)sub_1402AACA0((__int64)RelatedDeviceObject, v37, v36);
      v39 = v38;
      Irp = v38;
      if ( v38 )
      {
        v38->Tail.Overlay.OriginalFileObject = v15;
        v38->Tail.Overlay.Thread = CurrentThread;
        v38->RequestorMode = v12;
        v38->UserEvent = v11;
        v38->UserIosb = IoStatusBlock;
        v38->Overlay.AllocationSize = v55;
        v38->Overlay.AsynchronousParameters.UserApcContext = v56;
        CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v15;
        CurrentStackLocation[-1].Flags = 0;
        v41 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v41 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v41 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (CHAR *)ExAllocatePool2(97LL, 8LL, 538996553LL);
        *(_QWORD *)Pool2 = v48;
        v39->Tail.Overlay.AuxiliaryBuffer = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        return sub_140731680(RelatedDeviceObject, v39, v12, v35, 2);
      }
      else
      {
        sub_140933BA4(v15, v11);
        return -1073741670;
      }
    }
  }
  return result;
}
