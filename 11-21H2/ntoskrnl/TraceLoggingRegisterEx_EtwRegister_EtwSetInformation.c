/*
 * XREFs of TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264
 * Callers:
 *     IopInitializeSystemVariableService @ 0x1403DDA6C (IopInitializeSystemVariableService.c)
 *     IoInitializeLiveDump @ 0x1403DED54 (IoInitializeLiveDump.c)
 *     CarEtwRegister @ 0x140602644 (CarEtwRegister.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x140662030 (RtlpCapChkTelemetryRunOnce.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x1406DBDA0 (CcTelemetryPeriodicTimerCallback.c)
 *     TlgRegisterAggregateProviderEx @ 0x140828004 (TlgRegisterAggregateProviderEx.c)
 *     HalpMiscInitializeTelemetry @ 0x140858BF8 (HalpMiscInitializeTelemetry.c)
 *     VRegSetup @ 0x14085B100 (VRegSetup.c)
 *     IopInitializeDumpPolicySettings @ 0x140860A10 (IopInitializeDumpPolicySettings.c)
 *     TtmInit @ 0x1408633F0 (TtmInit.c)
 *     EtwpInitializeCoverage @ 0x140864B00 (EtwpInitializeCoverage.c)
 *     TraceLoggingRegister_EtwRegister_EtwSetInformation @ 0x140908C90 (TraceLoggingRegister_EtwRegister_EtwSetInformation.c)
 *     BapdRecordFirmwareBootStats @ 0x140A5464C (BapdRecordFirmwareBootStats.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     PopDiagInitialize @ 0x140B1BC34 (PopDiagInitialize.c)
 *     VmInitSystem @ 0x140B1E5EC (VmInitSystem.c)
 *     SeRmInitPhase1 @ 0x140B21F30 (SeRmInitPhase1.c)
 *     PspInitPhase2 @ 0x140B24C44 (PspInitPhase2.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B272B0 (PopDirectedDripsDiagInitialize.c)
 *     VslpIumInitializeTelemetry @ 0x140B2E584 (VslpIumInitializeTelemetry.c)
 *     ExInitTraceLogging @ 0x140B5446C (ExInitTraceLogging.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
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
