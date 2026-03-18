/*
 * XREFs of _tlgCreate1Sz_wchar_t @ 0x1402A2094
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1402541A8 (CcPostVolumeTelemetry.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14038ACD0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14038AF44 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14038B198 (PopTraceThermalZoneActiveActivity.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x1403A51D0 (PopDiagTraceIrpFinishTelemetry.c)
 *     ExLogTimeZoneInformation @ 0x1403DB94C (ExLogTimeZoneInformation.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1405D4150 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x1405D44DC (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x1405D4604 (PopTraceZoneCr3Tripped.c)
 *     CarEtwCrashEvent @ 0x140602478 (CarEtwCrashEvent.c)
 *     CarEtwRegister @ 0x140602644 (CarEtwRegister.c)
 *     CarEtwWriteBugCheckEvent @ 0x140602808 (CarEtwWriteBugCheckEvent.c)
 *     CarEtwWriteLiveDumpEvent @ 0x140602AEC (CarEtwWriteLiveDumpEvent.c)
 *     CarLoadImageHandler @ 0x140602F2C (CarLoadImageHandler.c)
 *     CarTipLogDriverLoad @ 0x140603128 (CarTipLogDriverLoad.c)
 *     CmpLogHiveFileInaccessible @ 0x1406D2D00 (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140712BA0 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpWriteProcessStarted @ 0x1407136E8 (EtwpWriteProcessStarted.c)
 *     PnpTraceDeviceConfig @ 0x14074703C (PnpTraceDeviceConfig.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1407F77B8 (PopDiagTracePowerSettingRegistration.c)
 *     PopPotsLogPowerTransitionReliability @ 0x1407FE3D8 (PopPotsLogPowerTransitionReliability.c)
 *     ExpLogRefreshTimeZoneInformationSuccess @ 0x14083601C (ExpLogRefreshTimeZoneInformationSuccess.c)
 *     PopThermalHandlePreviousShutdown @ 0x1408604BC (PopThermalHandlePreviousShutdown.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14093E830 (IoSetEnvironmentVariableEx.c)
 *     PnpTraceDriverBlocked @ 0x140957508 (PnpTraceDriverBlocked.c)
 *     PopDiagTraceDozeDeferralDecision @ 0x140992098 (PopDiagTraceDozeDeferralDecision.c)
 *     PopSqmThermalCriticalEvent @ 0x1409A023C (PopSqmThermalCriticalEvent.c)
 *     PopSqmThermalZoneEnumeration @ 0x1409A0558 (PopSqmThermalZoneEnumeration.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1409A7718 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1409A7B30 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 *     ExpLogRefreshTimeZoneInformationCutoverFail @ 0x1409F7D30 (ExpLogRefreshTimeZoneInformationCutoverFail.c)
 *     PopPotsLogDirtyPowerTransition @ 0x140B53288 (PopPotsLogDirtyPowerTransition.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_wchar_t(__int64 a1, const WCHAR *a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
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
