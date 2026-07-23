/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402F6E74
 * Callers:
 *     PopDiagTraceIrpFinishTelemetry @ 0x14028E824 (PopDiagTraceIrpFinishTelemetry.c)
 *     ExLogTimeZoneInformation @ 0x1403B0D00 (ExLogTimeZoneInformation.c)
 *     CcPostVolumeTelemetry @ 0x1403D12B0 (CcPostVolumeTelemetry.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1405929E8 (PopDiagTraceDIrpAfterSx.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140595CC8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595EE8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14059623C (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140596410 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceZoneCr3Mitigated @ 0x140596598 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405966C0 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x1405D2D8C (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x1405D2F58 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x1405D311C (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x1405D3400 (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x1405D3844 (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x1405D3A40 (CarTipLogDriverLoad.c)
 *     VhdiAutoAttachOneVhd @ 0x140681468 (VhdiAutoAttachOneVhd.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     PfSnLogScenarioDecision @ 0x140752BE4 (PfSnLogScenarioDecision.c)
 *     EtwpWriteProcessStarted @ 0x140753D40 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140754090 (EtwpWriteAppStateChangeSummary.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14083FA74 (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopSqmThermalZoneEnumeration @ 0x140848448 (PopSqmThermalZoneEnumeration.c)
 *     PopThermalHandlePreviousShutdown @ 0x140860288 (PopThermalHandlePreviousShutdown.c)
 *     PnpTraceDeviceConfig @ 0x140879120 (PnpTraceDeviceConfig.c)
 *     IoSetEnvironmentVariableEx @ 0x140950674 (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x14096BF64 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x14098EB38 (PopDiagTraceDozeDeferralDecision.c)
 *     PopDiagTracePowerSettingRegistration @ 0x140990F00 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1409A0C20 (PopPotsLogPowerTransitionReliability.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A0E48 (PopSqmThermalCriticalEvent.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7634 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A7A4C (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7F00 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
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
