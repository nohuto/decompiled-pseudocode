/*
 * XREFs of ObGetCurrentIrql @ 0x14020B9C0
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14020B950 (ObpDeferObjectDeletion.c)
 *     EtwpOpenLogger @ 0x140227610 (EtwpOpenLogger.c)
 *     MmCanThreadFault @ 0x14022786C (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x140227AE0 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227BA8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140227BF8 (EtwpSwitchBuffer.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     RtlQueryFeatureConfiguration @ 0x14035CAB0 (RtlQueryFeatureConfiguration.c)
 *     EtwTelemetryCoverageReport @ 0x140364BF0 (EtwTelemetryCoverageReport.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140374D90 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     WheaIsCriticalState @ 0x1403811C0 (WheaIsCriticalState.c)
 *     EtwpSendTraceEvent @ 0x1403A18C8 (EtwpSendTraceEvent.c)
 *     KdPowerTransitionEx @ 0x1403AD360 (KdPowerTransitionEx.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140410E70 (RtlQueryInternalFeatureConfiguration.c)
 *     CmFcManagerRecordFeatureUsage @ 0x1404193A8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x14041951C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     EtwpGetStackCaptureSettings @ 0x1404682A4 (EtwpGetStackCaptureSettings.c)
 *     KeResumeClockTimerSafe @ 0x14056FA24 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056FB70 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140573250 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x14057B054 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     EtwSendTraceBuffer @ 0x1405FF230 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x1406028E8 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x140602A24 (EtwpReenableCompression.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1406171A4 (CmFcManagerNotifyFeatureUsage.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5FE0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F69E4 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
