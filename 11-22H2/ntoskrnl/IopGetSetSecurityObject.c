/*
 * XREFs of IopGetSetSecurityObject @ 0x14069C1D0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     IopGetDevicePDO @ 0x1403029B8 (IopGetDevicePDO.c)
 *     AstLogDeviceSDDLUpdated @ 0x14069C6E8 (AstLogDeviceSDDLUpdated.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14069E604 (IopSetDeviceSecurityDescriptors.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069E6A4 (IopSetDeviceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406D5DF0 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140728AC0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140728D30 (ObLogSecurityDescriptor.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765710 (IopWaitAndAcquireFileObjectLock.c)
 *     SeAssignWorldSecurityDescriptor @ 0x140821678 (SeAssignWorldSecurityDescriptor.c)
 *     IopAllocateIrpCleanup @ 0x1409441F4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _QWORD *p_Type; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  struct _KTHREAD *v15; // rax
  __int64 v16; // r9
  unsigned int FinalStatus; // edi
  char v18; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v21; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v24; // rax
  PULONG v25; // r14
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v30; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v32; // r8
  DWORD *v33; // rcx
  _DWORD *DevicePDO; // rax
  void *v35; // rbx
  struct _KTHREAD *v36; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v38; // [rsp+40h] [rbp-58h]
  __int128 v39; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v42; // [rsp+B0h] [rbp+18h]

  v42 = a3;
  v38 = 0LL;
  if ( Object->Type == 3 )
    p_Type = &Object->Type;
  else
    p_Type = &Object->DeviceObject->Type;
  v13 = 0LL;
  if ( Object->Type != 3 )
    v13 = Object;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        FinalStatus = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          FinalStatus = ObLogSecurityDescriptor(a4);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = v38;
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
          }
        }
        return FinalStatus;
      case 0:
        DevicePDO = IopGetDevicePDO((__int64)p_Type);
        v35 = DevicePDO;
        if ( DevicePDO )
        {
          FinalStatus = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
          ObfDereferenceObject(v35);
        }
        else
        {
          FinalStatus = IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
        }
        AstLogDeviceSDDLUpdated(p_Type);
        return FinalStatus;
      case 1:
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v30);
        v32 = Length;
        v33 = a3;
        goto LABEL_50;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v39 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  ObfReferenceObject(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((__int64)&v13->Lock, 0LL);
    LOBYTE(v41) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock(v13, (__int64)&v41);
    }
    else
    {
      if ( v16 )
        *(_BYTE *)(v16 + 18) = 1;
      ObfReferenceObject(v13);
      FinalStatus = 0;
    }
    if ( (_BYTE)v41 )
    {
      ObfDereferenceObject(v13);
      return FinalStatus;
    }
    v18 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v18 = 0;
  }
  if ( (v13->Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v18 ^ 1u);
  v21 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v21->UserEvent = p_Event;
    v21->UserIosb = (PIO_STATUS_BLOCK)&v39;
    v21->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v24 = v42;
    v25 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.Create.Options = *v25;
      v21->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v21);
    v26 = KeGetCurrentThread();
    ++v26->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v27 = IofCallDriver(RelatedDeviceObject, v21);
    FinalStatus = v27;
    if ( v18 )
    {
      if ( v27 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&v13->Type);
    }
    else if ( v27 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v39;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v25 = DWORD2(v39);
      }
      return FinalStatus;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v42);
      v36 = KeGetCurrentThread();
      --v36->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor = SecurityDescriptor;
      if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        __fastfail(0xEu);
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)v36);
      v32 = v25;
      v33 = v42;
LABEL_50:
      FinalStatus = SeQuerySecurityDescriptorInfo(v33, a4, v32, &ObjectsSecurityDescriptor);
      if ( SecurityDescriptor )
        ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
      return FinalStatus;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
