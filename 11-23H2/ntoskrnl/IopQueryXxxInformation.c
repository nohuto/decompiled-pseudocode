/*
 * XREFs of IopQueryXxxInformation @ 0x14075D47C
 * Callers:
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopQueryNameInternal @ 0x14075AB54 (IopQueryNameInternal.c)
 *     PfSnGetSectionObject @ 0x14075CB90 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x14075EABC (PfpPrefetchEntireDirectory.c)
 *     IoQueryVolumeInformation @ 0x1407E9E60 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1407EA560 (IoQueryFileInformation.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     IopValidateJunctionTarget @ 0x1409467E4 (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x140948230 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x140A32924 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402315D0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFE30 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x1402F8984 (IopWaitForSynchronousIo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1407653F0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140944344 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  char v10; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r12d
  struct _DEVICE_OBJECT *v15; // rsi
  __int64 Irp; // rax
  IRP *v17; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v20; // cf
  NTSTATUS v21; // eax
  unsigned int FinalStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v25; // rax
  unsigned int v26; // edi
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v30; // [rsp+B0h] [rbp+50h]

  v30 = a3;
  memset(&Event, 0, sizeof(Event));
  v27 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v25 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
    LOBYTE(v29) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
    {
      v26 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v29);
      if ( (_BYTE)v29 )
      {
        ObfDereferenceObject(Object);
        return v26;
      }
    }
    else
    {
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
      ObfReferenceObject(Object);
    }
    KeResetEvent(&Object->Event);
    v10 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v14 = 71;
  if ( a2 != 75 )
    v14 = a2;
  v15 = RelatedDeviceObject;
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  LOBYTE(v13) = v10 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v12, v13);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v10 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v17->UserEvent = p_Event;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v20 = a7 != 0;
    a7 = -a7;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v27;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v20 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v30;
    CurrentStackLocation[-1].Parameters.Create.Options = v14;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v17);
    v21 = IofCallDriver(v15, v17);
    FinalStatus = v21;
    if ( v10 )
    {
      if ( v21 == 259 )
      {
        IopWaitForSynchronousIo(v17, (__int64)Object);
        FinalStatus = Object->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v27;
    }
    *a6 = DWORD2(v27);
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
