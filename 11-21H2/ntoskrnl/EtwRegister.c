/*
 * XREFs of EtwRegister @ 0x1406D2350
 * Callers:
 *     KiIntSteerConnect @ 0x1403AFA58 (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x1403B7244 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x1403DDD24 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403DED54 (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x14054B7B4 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     DifEtwRegisterWrapper @ 0x140606620 (DifEtwRegisterWrapper.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     WdipSemEnableSemProvider @ 0x14083F84C (WdipSemEnableSemProvider.c)
 *     PopDiagSleepStudyInitialize @ 0x140845558 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x1408455A0 (SSHSupportEtwRegister.c)
 *     HalpMiscInitializeTelemetry @ 0x140858BF8 (HalpMiscInitializeTelemetry.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     DbgkpStartSystemErrorHandler @ 0x14092A77C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14092AC5C (DbgkCaptureLiveDump.c)
 *     FsRtlpHeatRegisterVolume @ 0x14092FB38 (FsRtlpHeatRegisterVolume.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 *     KseInitialize @ 0x140AFFF64 (KseInitialize.c)
 *     PopBatteryInitPhaseTwo @ 0x140B01A8C (PopBatteryInitPhaseTwo.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     PerfDiagInitialize @ 0x140B1A3F4 (PerfDiagInitialize.c)
 *     PopDiagInitialize @ 0x140B1BC34 (PopDiagInitialize.c)
 *     WheapInitializeEventing @ 0x140B24410 (WheapInitializeEventing.c)
 *     SmInitSystem @ 0x140B255E4 (SmInitSystem.c)
 *     KitInitialize @ 0x140B2DD5C (KitInitialize.c)
 *     PnpDiagInitialize @ 0x140B2F500 (PnpDiagInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x1406D2394 (EtwpRegisterKMProvider.c)
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
