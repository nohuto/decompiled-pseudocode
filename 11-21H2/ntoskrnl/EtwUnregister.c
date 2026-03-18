/*
 * XREFs of EtwUnregister @ 0x1406B7470
 * Callers:
 *     BapdWriteEtwEvents @ 0x1403B6E4C (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403DE4F0 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     CarLoggingExit @ 0x1406030C8 (CarLoggingExit.c)
 *     McGenEventUnregister_EtwUnregister @ 0x140603264 (McGenEventUnregister_EtwUnregister.c)
 *     DifEtwUnregisterWrapper @ 0x140606760 (DifEtwUnregisterWrapper.c)
 *     WmipGECleanup @ 0x140804E40 (WmipGECleanup.c)
 *     PopBootLoaderTraceProcess @ 0x1408087A4 (PopBootLoaderTraceProcess.c)
 *     WmipLegacyEtwWorker @ 0x140855120 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140855238 (WmipProcessLegacyEtwRegister.c)
 *     VrpRegistryUnload @ 0x140926260 (VrpRegistryUnload.c)
 *     DbgkpStartSystemErrorHandler @ 0x14092A77C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14092AC5C (DbgkCaptureLiveDump.c)
 *     SSHSupportEtwUnregister @ 0x1409A0CB8 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     BapdRecordFirmwareBootStats @ 0x140A5464C (BapdRecordFirmwareBootStats.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     PerfDiagInitialize @ 0x140B1A3F4 (PerfDiagInitialize.c)
 *     BapdpRecordIumStatus @ 0x140B1CB28 (BapdpRecordIumStatus.c)
 *     VslpIumInitializeTelemetry @ 0x140B2E584 (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140B52C84 (ObpShutdownTraceLoggingProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1407973D0 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x140882EB0 (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall EtwUnregister(REGHANDLE RegHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rcx

  if ( !RegHandle )
    return -1073741816;
  if ( (*(_BYTE *)(RegHandle + 98) & 1) == 0 )
    KeBugCheckEx(0x11Du, 4uLL, RegHandle, 1uLL, 0LL);
  if ( *(_QWORD *)(RegHandle + 40) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    *(_QWORD *)(*(_QWORD *)(RegHandle + 40) + 416LL) = KeGetCurrentThread();
  }
  v3 = KeGetCurrentThread();
  --v3->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = KeGetCurrentThread();
  v4 = *(_QWORD *)RegHandle;
  if ( *(_QWORD *)(*(_QWORD *)RegHandle + 8LL) != RegHandle
    || (v5 = *(_QWORD **)(RegHandle + 8), *v5 != RegHandle)
    || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = *(_QWORD *)(RegHandle + 16), *(_QWORD *)(v6 + 8) != RegHandle + 16)
    || (v7 = *(_QWORD **)(RegHandle + 24), *v7 != RegHandle + 16) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(*(_QWORD *)(RegHandle + 32) + 416LL) = 0LL;
  ExReleasePushLockEx(*(_QWORD *)(RegHandle + 32) + 408LL, 0LL);
  KeLeaveCriticalRegion();
  v8 = *(_QWORD *)(RegHandle + 40);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 416) = 0LL;
    ExReleasePushLockEx(*(_QWORD *)(RegHandle + 40) + 408LL, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_UNREGISTERS) )
    EtwpEventWriteTemplateSessAndProv(
      v9,
      &ETW_EVENT_PROVIDER_UNREGISTERS,
      v10,
      1LL,
      0LL,
      *(_QWORD *)(RegHandle + 32) + 40LL);
  EtwpUnreferenceGuidEntry(*(PVOID *)(RegHandle + 32));
  v11 = *(void **)(RegHandle + 40);
  if ( v11 )
    EtwpUnreferenceGuidEntry(v11);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
