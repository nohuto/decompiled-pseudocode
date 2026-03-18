/*
 * XREFs of EtwRegister @ 0x14078DD90
 * Callers:
 *     KiIntSteerConnect @ 0x140320D4C (KiIntSteerConnect.c)
 *     BapdRegisterEtwProvider @ 0x140374214 (BapdRegisterEtwProvider.c)
 *     McGenEventRegister_EtwRegister @ 0x140375468 (McGenEventRegister_EtwRegister.c)
 *     IoInitializeLiveDump @ 0x1403AE5D0 (IoInitializeLiveDump.c)
 *     HvlpEtwRegister @ 0x140548644 (HvlpEtwRegister.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     DifEtwRegisterWrapper @ 0x1405D6CF0 (DifEtwRegisterWrapper.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     PopDiagSleepStudyInitialize @ 0x140822B74 (PopDiagSleepStudyInitialize.c)
 *     SSHSupportEtwRegister @ 0x140822BBC (SSHSupportEtwRegister.c)
 *     WdipSemEnableSemProvider @ 0x140831D74 (WdipSemEnableSemProvider.c)
 *     HalpMiscInitializeTelemetry @ 0x1408559A8 (HalpMiscInitializeTelemetry.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A80C (DbgkpStartSystemErrorHandler.c)
 *     DbgkCaptureLiveDump @ 0x14093A918 (DbgkCaptureLiveDump.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14093E9C0 (FsRtlpDedupChangeRegisterVolume.c)
 *     FsRtlpHeatRegisterVolume @ 0x14093FBC8 (FsRtlpHeatRegisterVolume.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 *     PopDiagInitialize @ 0x140B38B18 (PopDiagInitialize.c)
 *     PnpDiagInitialize @ 0x140B4300C (PnpDiagInitialize.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 *     KseInitialize @ 0x140B4CCCC (KseInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 *     PopBatteryInitPhaseTwo @ 0x140B521E0 (PopBatteryInitPhaseTwo.c)
 *     SmInitSystem @ 0x140B54430 (SmInitSystem.c)
 *     WheapInitializeEventing @ 0x140B677B8 (WheapInitializeEventing.c)
 *     PerfDiagInitialize @ 0x140B706A8 (PerfDiagInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpRegisterKMProvider @ 0x14078DDD4 (EtwpRegisterKMProvider.c)
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
