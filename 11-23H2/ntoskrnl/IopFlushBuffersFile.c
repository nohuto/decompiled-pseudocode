/*
 * XREFs of IopFlushBuffersFile @ 0x140686004
 * Callers:
 *     NtFlushBuffersFileEx @ 0x140685F70 (NtFlushBuffersFileEx.c)
 *     IopIoRingDispatchFlush @ 0x14094953C (IopIoRingDispatchFlush.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     IopExceptionFilter @ 0x140555BA8 (IopExceptionFilter.c)
 *     IopSynchronousApiServiceTail @ 0x140687008 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1406E3EC0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopFlushBuffersFile(
        PFILE_OBJECT FileObject,
        char a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        PVOID Object,
        _OWORD *a7,
        unsigned __int64 a8)
{
  PFILE_OBJECT v8; // rsi
  struct _KEVENT *v9; // r12
  char v10; // r14
  PVOID v11; // r15
  unsigned __int64 v12; // r13
  bool v13; // dl
  __int64 v14; // rcx
  struct _KTHREAD *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v19; // rdx
  __int64 Irp; // rax
  __int64 v21; // r14
  char v22; // dl
  bool v23; // cl
  _OWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  struct _KEVENT *Pool2; // rax
  int v29; // [rsp+20h] [rbp-78h]
  bool v30; // [rsp+40h] [rbp-58h]
  char PreviousMode; // [rsp+41h] [rbp-57h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-48h]
  _OWORD v33[4]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v35; // [rsp+B0h] [rbp+18h] BYREF

  v8 = FileObject;
  v33[0] = 0LL;
  v9 = 0LL;
  v10 = 0;
  LOBYTE(v35) = 0;
  if ( a3 || a4 )
    goto LABEL_47;
  v11 = Object;
  v12 = a8;
  if ( Object )
  {
    if ( !a8 )
      goto LABEL_5;
LABEL_47:
    v17 = -1073741811;
    goto LABEL_34;
  }
  if ( !a8 )
    goto LABEL_47;
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v13 = (FileObject->Flags & 2) != 0 && !Object;
  v30 = v13;
  if ( CurrentThread->PreviousMode && !Object )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( a8 < 0x7FFFFFFF0000LL )
      v14 = a8;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  if ( ((~(unsigned __int8)(v8->Flags >> 5) & 4 | 2) & a5) == 0 )
  {
    v17 = -1073741790;
    goto LABEL_34;
  }
  if ( !v13 )
  {
    if ( v11 )
    {
LABEL_24:
      RelatedDeviceObject = IoGetRelatedDeviceObject(v8);
      LOBYTE(v19) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v19, 0LL);
      v21 = Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v8;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        v22 = PreviousMode;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_DWORD *)(Irp + 16) = 0;
        if ( v11 )
        {
          ObfReferenceObjectWithTag(v11, 0x49526F49u);
          *(_DWORD *)(v21 + 16) |= 0x200000u;
          *(_QWORD *)(v21 + 96) = v11;
          v24 = a7;
          v23 = v30;
          v22 = PreviousMode;
        }
        else
        {
          v23 = v30;
          if ( v30 )
          {
            *(_QWORD *)(Irp + 80) = 0LL;
            v24 = (_OWORD *)v12;
          }
          else
          {
            *(_QWORD *)(Irp + 80) = v9;
            *(_DWORD *)(Irp + 16) = 4;
            v24 = v33;
          }
        }
        *(_QWORD *)(v21 + 72) = v24;
        *(_QWORD *)(v21 + 88) = 0LL;
        v25 = *(_QWORD *)(v21 + 184);
        *(_BYTE *)(v25 - 72) = 9;
        *(_QWORD *)(v25 - 24) = v8;
        if ( (a2 & 1) != 0 )
        {
          *(_BYTE *)(v25 - 71) = 2;
        }
        else if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v25 - 71) = 3;
        }
        else if ( (a2 & 4) != 0 )
        {
          *(_BYTE *)(v25 - 71) = 4;
        }
        LOBYTE(v29) = v22;
        v17 = IopSynchronousServiceTail(RelatedDeviceObject, v21, v8, 0LL, v29, v23, 2);
        v8 = 0LL;
        if ( !v30 && !v11 )
        {
          LOBYTE(v26) = PreviousMode;
          v17 = IopSynchronousApiServiceTail(v17, v9, v21, v26, v33, v12);
          v9 = 0LL;
        }
      }
      else
      {
        v17 = -1073741670;
      }
      v10 = v35;
      goto LABEL_34;
    }
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      v17 = -1073741670;
      goto LABEL_34;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
LABEL_21:
    if ( !v11 && (v8->Flags & 0x4000000) == 0 )
      KeResetEvent(&v8->Event);
    goto LABEL_24;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  v16 = KeAbPreAcquire((__int64)&v8->Lock, 0LL);
  LOBYTE(v35) = 0;
  if ( _InterlockedExchange((volatile __int32 *)&v8->Busy, 1) )
  {
    v17 = IopWaitAndAcquireFileObjectLock(v8, (__int64)&v35);
  }
  else
  {
    if ( v16 )
      *(_BYTE *)(v16 + 18) = 1;
    ObfReferenceObject(v8);
    v17 = 0;
  }
  if ( !(_BYTE)v35 )
  {
    LOBYTE(v35) = 1;
    goto LABEL_21;
  }
LABEL_34:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v8 )
  {
    if ( v10 )
      IopReleaseFileObjectLock((volatile __int32 *)&v8->Type);
    ObfDereferenceObject(v8);
  }
  return v17;
}
