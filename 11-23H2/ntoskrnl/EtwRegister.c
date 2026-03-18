/*
 * XREFs of EtwRegister @ 0x14078D880
 * Callers:
 *     KiIntSteerConnect @ 0x140320F2C (KiIntSteerConnect.c)
 *     McGenEventRegister_EtwRegister @ 0x140374E18 (McGenEventRegister_EtwRegister.c)
 *     BapdRegisterEtwProvider @ 0x1403840EC (BapdRegisterEtwProvider.c)
 *     IoInitializeLiveDump @ 0x1403AEC60 (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x1405485A4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     DifEtwRegisterWrapper @ 0x1405D6C60 (DifEtwRegisterWrapper.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140821DDC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x1408228B4 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x1408228FC (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140830224 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x140854A98 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A75C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14093A868 (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14093E910 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14093FB18 (FsRtlpHeatRegisterVolume.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 *     PnpDiagInitialize @ 0x140B3F90C (PnpDiagInitialize.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 *     PopDiagInitialize @ 0x140B4F1E0 (PopDiagInitialize.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140B5226C (PopBatteryInitPhaseTwo.c)
 *     WheapInitializeEventing @ 0x140B66418 (WheapInitializeEventing.c)
 *     PerfDiagInitialize @ 0x140B6F6BC (PerfDiagInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D370 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x14078D8C4 (EtwpRegisterKMProvider.c)
 */

NTSTATUS __stdcall EtwRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  return EtwpRegisterKMProvider(v4, v8, 3, v5, v6, retaddr, v7);
}
