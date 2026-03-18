/*
 * XREFs of ObGetCurrentIrql @ 0x14020B9A0
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     EtwpOpenLogger @ 0x1402275F0 (EtwpOpenLogger.c)
 *     MmCanThreadFault @ 0x14022784C (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x140227AC0 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227B88 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140227BD8 (EtwpSwitchBuffer.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     KiDispatchException @ 0x14030CCA0 (KiDispatchException.c)
 *     RtlQueryFeatureConfiguration @ 0x14035D100 (RtlQueryFeatureConfiguration.c)
 *     EtwTelemetryCoverageReport @ 0x140365240 (EtwTelemetryCoverageReport.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x140374740 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     WheaIsCriticalState @ 0x140380B70 (WheaIsCriticalState.c)
 *     EtwpSendTraceEvent @ 0x1403A2088 (EtwpSendTraceEvent.c)
 *     KdPowerTransitionEx @ 0x1403AD9F0 (KdPowerTransitionEx.c)
 *     sub_1403E5840 @ 0x1403E5840 (sub_1403E5840.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140411680 (RtlQueryInternalFeatureConfiguration.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419A58 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419BCC (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     EtwpGetStackCaptureSettings @ 0x140468904 (EtwpGetStackCaptureSettings.c)
 *     KeResumeClockTimerSafe @ 0x14056F984 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056FAD0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1405731B0 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x14057AFC4 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 *     EtwSendTraceBuffer @ 0x1405FF1A0 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x140602878 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1406029B4 (EtwpReenableCompression.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617134 (CmFcManagerNotifyFeatureUsage.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5970 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6374 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBD0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
