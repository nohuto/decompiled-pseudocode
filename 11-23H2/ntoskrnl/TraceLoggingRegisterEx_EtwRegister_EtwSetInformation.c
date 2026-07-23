/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC
 * Callers:
 *     IoInitializeLiveDump @ 0x1403AEE40 (IoInitializeLiveDump.c)
 *     IopInitializeSystemVariableService @ 0x1403B40A0 (IopInitializeSystemVariableService.c)
 *     PrExtLogToTelemetry @ 0x1403B5144 (PrExtLogToTelemetry.c)
 *     CarEtwRegister @ 0x1405D2F58 (CarEtwRegister.c)
 *     TtmInit @ 0x140821184 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x140821F4C (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProviderEx @ 0x140821FA8 (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x140854D98 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x140857930 (VRegSetup.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140865F80 (RtlpCapChkTelemetryRunOnce.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140933A64 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8EBDC (BapdRecordFirmwareBootStats.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 *     ObInitSystem @ 0x140B4B2F8 (ObInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     VmInitSystem @ 0x140B4ECF8 (VmInitSystem.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B4EF98 (PopDirectedDripsDiagInitialize.c)
 *     PopDiagInitialize @ 0x140B4F1E0 (PopDiagInitialize.c)
 *     SeRmInitPhase1 @ 0x140B60C6C (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140B67208 (PspInitPhase2.c)
 *     VslpIumInitializeTelemetry @ 0x140B7135C (VslpIumInitializeTelemetry.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74030 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeTraceLogging @ 0x140B96370 (PfInitializeTraceLogging.c)
 *     ExInitTraceLogging @ 0x140B97E74 (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D73F0 (EtwSetInformation.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(char *CallbackContext, __int64 a2, __int64 a3)
{
  ULONGLONG *v3; // rsi
  bool v4; // zf
  unsigned int v6; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (ULONGLONG *)(CallbackContext + 32);
  v4 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = a2;
  *((_QWORD *)CallbackContext + 6) = a3;
  v6 = EtwRegister(&ProviderId, tlgEnableCallback, CallbackContext, v3);
  if ( !v6 )
    EtwSetInformation(
      *v3,
      EventProviderSetTraits,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
