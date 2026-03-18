/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402F6BE4
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E594 (PopDiagTraceIrpFinishTelemetry.c)
 *     ExLogTimeZoneInformation @ 0x1403B0B20 (ExLogTimeZoneInformation.c)
 *     CcPostVolumeTelemetry @ 0x1403D10D0 (CcPostVolumeTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1405924F8 (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405957D8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1405959F8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140595D4C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140595F20 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405960A8 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405961D0 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x1405D281C (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x1405D29E8 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D2BAC (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D2E90 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1405D32D4 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x1405D34D0 (CarTipLogDriverLoad.c)
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PfSnLogScenarioDecision @ 0x1407529F4 (PfSnLogScenarioDecision.c)
 *     EtwpWriteProcessStarted @ 0x140753B50 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140753EA0 (EtwpWriteAppStateChangeSummary.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14083F774 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopSqmThermalZoneEnumeration @ 0x140848148 (PopSqmThermalZoneEnumeration.c)
 *     PopThermalHandlePreviousShutdown @ 0x140860048 (PopThermalHandlePreviousShutdown.c)
 *     PnpTraceDeviceConfig @ 0x140878EE0 (PnpTraceDeviceConfig.c)
 *     IoSetEnvironmentVariableEx @ 0x140950474 (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x14096BD64 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14098E938 (PopDiagTraceDozeDeferralDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990D00 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0A20 (PopPotsLogPowerTransitionReliability.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0C48 (PopSqmThermalCriticalEvent.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7434 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A784C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7C70 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B35D5C (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const size_t *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *((_WORD *)a2 + v2) );
    v3 = 2 * v2 + 2;
  }
  else
  {
    a2 = &cchOriginalDestLength;
    v3 = 2;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 12) = 0;
}
