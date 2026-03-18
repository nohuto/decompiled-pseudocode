/*
 * XREFs of EtwUnregister @ 0x1407C0E00
 * Callers:
 *     BapdWriteEtwEvents @ 0x140383CE0 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403B4CA0 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     CarLoggingExit @ 0x1405D3470 (CarLoggingExit.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1405D360C (McGenEventUnregister_EtwUnregister.c)
 *     DifEtwUnregisterWrapper @ 0x1405D6DA0 (DifEtwUnregisterWrapper.c)
 *     WmipLegacyEtwWorker @ 0x14084FE80 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x14084FF98 (WmipProcessLegacyEtwRegister.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A75C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14093A868 (DbgkCaptureLiveDump.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140941738 (TraceLoggingUnregister_EtwUnregister.c)
 *     PopBootLoaderTraceProcess @ 0x1409883E0 (PopBootLoaderTraceProcess.c)
 *     SSHSupportEtwUnregister @ 0x1409A2478 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x1409B3544 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x1409E1570 (WmipGECleanup.c)
 *     EtwpCoverageSamplerStop @ 0x1409F36C4 (EtwpCoverageSamplerStop.c)
 *     VrpRegistryUnload @ 0x140A72050 (VrpRegistryUnload.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8ED64 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140B6F6BC (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140B7135C (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140B96338 (ObpShutdownTraceLoggingProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140258420 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF954 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01C0 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A6A6A (EtwpEventWriteTemplateSessAndProv.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
  __int64 *v11; // rcx

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
  ExReleasePushLockEx((__int64 *)(*(_QWORD *)(RegHandle + 32) + 408LL), 0LL);
  KeLeaveCriticalRegion();
  v8 = *(_QWORD *)(RegHandle + 40);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 416) = 0LL;
    ExReleasePushLockEx((__int64 *)(*(_QWORD *)(RegHandle + 40) + 408LL), 0LL);
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
  EtwpUnreferenceGuidEntry(*(__int64 **)(RegHandle + 32));
  v11 = *(__int64 **)(RegHandle + 40);
  if ( v11 )
    EtwpUnreferenceGuidEntry(v11);
  EtwpReleaseProviderTraitsReference(RegHandle);
  ExFreePoolWithTag((PVOID)RegHandle, 0);
  return 0;
}
