/*
 * XREFs of EtwUnregister @ 0x1407C10D0
 * Callers:
 *     BapdWriteEtwEvents @ 0x140383EC0 (BapdWriteEtwEvents.c)
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
 *     CarLoggingExit @ 0x1405D39E0 (CarLoggingExit.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1405D3B7C (McGenEventUnregister_EtwUnregister.c)
 *     DifEtwUnregisterWrapper @ 0x1405D7310 (DifEtwUnregisterWrapper.c)
 *     WmipLegacyEtwWorker @ 0x140850180 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140850298 (WmipProcessLegacyEtwRegister.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A95C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14093AA68 (DbgkCaptureLiveDump.c)
 *     TraceLoggingUnregister_EtwUnregister @ 0x140941938 (TraceLoggingUnregister_EtwUnregister.c)
 *     PopBootLoaderTraceProcess @ 0x1409885E0 (PopBootLoaderTraceProcess.c)
 *     SSHSupportEtwUnregister @ 0x1409A2678 (SSHSupportEtwUnregister.c)
 *     PsShutdownSystem @ 0x1409B3744 (PsShutdownSystem.c)
 *     WmipGECleanup @ 0x1409E1800 (WmipGECleanup.c)
 *     EtwpCoverageSamplerStop @ 0x1409F3954 (EtwpCoverageSamplerStop.c)
 *     VrpRegistryUnload @ 0x140A72300 (VrpRegistryUnload.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8EBDC (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B4F34C (BapdpRecordIumStatus.c)
 *     PerfDiagInitialize @ 0x140B6F6BC (PerfDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140B7135C (VslpIumInitializeTelemetry.c)
 *     ObpShutdownTraceLoggingProvider @ 0x140B96338 (ObpShutdownTraceLoggingProvider.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF984 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1406C01F0 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x1408A6CBA (EtwpEventWriteTemplateSessAndProv.c)
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
