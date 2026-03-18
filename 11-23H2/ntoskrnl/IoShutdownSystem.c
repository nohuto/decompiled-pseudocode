/*
 * XREFs of IoShutdownSystem @ 0x140A99B34
 * Callers:
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 * Callees:
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x14025A100 (IoGetAttachedDeviceReference.c)
 *     VfIsVerifierEnabled @ 0x140293980 (VfIsVerifierEnabled.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A340 (ExWaitForRundownProtectionRelease.c)
 *     IopInterlockedRemoveHeadList @ 0x14035B1B0 (IopInterlockedRemoveHeadList.c)
 *     ZwQuerySystemInformation @ 0x14041B420 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041E480 (ZwSetSystemInformation.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     IoNotifyDump @ 0x1405508A0 (IoNotifyDump.c)
 *     IoBuildSynchronousFsdRequest @ 0x1407FD380 (IoBuildSynchronousFsdRequest.c)
 *     PnpShutdownDevices @ 0x1409521FC (PnpShutdownDevices.c)
 *     IopShutdownBaseFileSystems @ 0x140A99EE4 (IopShutdownBaseFileSystems.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     IovUnloadDrivers @ 0x140AC17F0 (IovUnloadDrivers.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2150 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall IoShutdownSystem(int a1)
{
  struct _DEVICE_OBJECT *v2; // rdi
  IRP *v3; // rax
  PVOID *v4; // rax
  PVOID *v5; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  IRP *v7; // rax
  PVOID *v8; // rax
  PVOID *v9; // rbx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(1LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExWaitForRundownProtectionRelease(&IopFilesystemDatabaseShutdownRundown);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      IopShutdownBaseFileSystems(&IopDiskFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopCdRomFileSystemQueueHead);
      IopShutdownBaseFileSystems(&IopTapeFileSystemQueueHead);
      while ( 1 )
      {
        v8 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyLastChanceShutdownQueueHead);
        v9 = v8;
        if ( !v8 )
          break;
        AttachedDeviceReference = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v8[2]);
        v7 = IoBuildSynchronousFsdRequest(0x10u, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
        if ( v7 && IofCallDriver(AttachedDeviceReference, v7) == 259 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        ObfDereferenceObject(AttachedDeviceReference);
        ObfDereferenceObject(v9[2]);
        ExFreePoolWithTag(v9, 0);
        KeResetEvent(&Event);
      }
    }
  }
  else
  {
    v12 = 0;
    if ( (int)ZwQuerySystemInformation(151LL, (__int64)&v12) >= 0 && (v12 & 0x20) != 0 )
    {
      ((void (__fastcall *)(_QWORD))off_140C01CB8[0])(0LL);
      v12 = 0;
      ZwSetSystemInformation(151LL, (__int64)&v12);
    }
    PnpShutdownDevices();
    while ( 1 )
    {
      v4 = (PVOID *)IopInterlockedRemoveHeadList((_QWORD **)&IopNotifyShutdownQueueHead);
      v5 = v4;
      if ( !v4 )
        break;
      v2 = IoGetAttachedDeviceReference((PDEVICE_OBJECT)v4[2]);
      v3 = IoBuildSynchronousFsdRequest(0x10u, v2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      if ( v3 && IofCallDriver(v2, v3) == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v2);
      ObfDereferenceObject(v5[2]);
      ExFreePoolWithTag(v5, 0);
      KeResetEvent(&Event);
    }
    if ( (MmVerifierData & 0x10) != 0 )
      IovUnloadDrivers();
    if ( (v12 & 0x10) != 0 )
      IoNotifyDump(5);
    v12 = 2;
    ZwSetSystemInformation(151LL, (__int64)&v12);
  }
}
