/*
 * XREFs of IopCloseFile @ 0x140730000
 * Callers:
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     IopAllocateIrpMustSucceed @ 0x14022E260 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14022F510 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x1402AF210 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1402AF410 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1402AF730 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x1402AF910 (IopResetEvent.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     IopGetFileObjectExtension @ 0x14030169C (IopGetFileObjectExtension.c)
 *     IopSetLockOperationProcess @ 0x14030176C (IopSetLockOperationProcess.c)
 *     IopCloseFileObjectExtension @ 0x140354510 (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765200 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1407CB1BC (IopCleanupProcessResources.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409446E0 (IopCleanupFileObjectIosbRange.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140ACB234 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140ACB30C (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 FileObjectExtension; // rdi
  __int64 v8; // r14
  int v9; // r15d
  __int64 v10; // rcx
  _QWORD *v11; // r8
  bool v12; // zf
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v14; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  __int64 (__fastcall *FastIoUnlockAll)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *); // rbp
  void *v19; // rdi
  char v20; // r14
  IRP *v21; // rdi
  struct _IO_STACK_LOCATION *v22; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v24; // r13
  int v25; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v27; // rax
  IRP *MustSucceed; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int128 v32; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+18h] BYREF

  v4 = a4;
  FileObjectExtension = 0LL;
  v8 = 0LL;
  v9 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v8 = IopGetFileObjectExtension(v10, 4, v11);
    }
    if ( v4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      v24 = AttachedDevice;
      v25 = a2->Flags | 0x40000;
      a2->Flags = v25;
      if ( a1 && (v25 & 2) != 0 )
      {
        v9 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v27 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v31) )
            goto LABEL_43;
        }
        if ( v27 )
          *(_BYTE *)(v27 + 18) = 1;
        ObfReferenceObject(a2);
      }
LABEL_43:
      if ( v8 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v24, (unsigned __int8)v24->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v30 = KeGetCurrentThread();
      ++v30->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v24, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v9 )
        IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      IopCancelIrpsInFileObjectList((__int64)a2, a1, 0, 0, 1, 1);
      for ( ; FileObjectExtension; FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40) )
      {
        if ( *(_QWORD *)(FileObjectExtension + 32) == a1 )
          IopCleanupFileObjectIosbRange(FileObjectExtension);
      }
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1) >= 0 )
      {
        v12 = (a2->Flags & 0x800) == 0;
        v32 = 0LL;
        if ( v12 )
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        else
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        v14 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v9 = 1;
          while ( 1 )
          {
            v16 = KeGetCurrentThread();
            --v16->KernelApcDisable;
            v17 = KeAbPreAcquire((__int64)&a2->Lock, 0LL);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v34) )
              goto LABEL_18;
          }
          if ( v17 )
            *(_BYTE *)(v17 + 18) = 1;
          ObfReferenceObject(a2);
        }
LABEL_18:
        if ( !FastIoDispatch )
          goto LABEL_27;
        FastIoUnlockAll = (__int64 (__fastcall *)(struct _FILE_OBJECT *, _KPROCESS *, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_27;
        v19 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v14->DriverObject) ? (void *)VfFastIoSnapState() : 0LL;
        v20 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, &v32, v14);
        if ( v19 )
          VfFastIoCheckState(v19);
        if ( !v20 )
        {
LABEL_27:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v21 = (IRP *)IopAllocateIrpMustSucceed((__int64)v14, (unsigned __int8)v14->StackSize);
          v21->Tail.Overlay.OriginalFileObject = a2;
          v21->Tail.Overlay.Thread = KeGetCurrentThread();
          v21->UserIosb = &v21->IoStatus;
          v22 = v21->Tail.Overlay.CurrentStackLocation;
          v21->RequestorMode = 0;
          v21->UserEvent = &Event;
          v21->Flags = 4100;
          v21->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v22[-1].MajorFunction = 785;
          v22[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v21);
          if ( IofCallDriver(v14, v21) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v9 == 1 )
          IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      }
    }
  }
}
