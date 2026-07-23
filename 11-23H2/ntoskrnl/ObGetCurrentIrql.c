/*
 * XREFs of ObGetCurrentIrql @ 0x14020B9A0
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     EtwpOpenLogger @ 0x140227700 (EtwpOpenLogger.c)
 *     MmCanThreadFault @ 0x14022795C (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x140227BD0 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227C98 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     KiDispatchException @ 0x14030CF30 (KiDispatchException.c)
 *     RtlQueryFeatureConfiguration @ 0x14035D2A0 (RtlQueryFeatureConfiguration.c)
 *     EtwTelemetryCoverageReport @ 0x1403653E0 (EtwTelemetryCoverageReport.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403748E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     WheaIsCriticalState @ 0x140380D10 (WheaIsCriticalState.c)
 *     EtwpSendTraceEvent @ 0x1403A2268 (EtwpSendTraceEvent.c)
 *     KdPowerTransitionEx @ 0x1403ADBD0 (KdPowerTransitionEx.c)
 *     sub_1403E5A20 @ 0x1403E5A20 (sub_1403E5A20.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1404118C0 (RtlQueryInternalFeatureConfiguration.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419F5C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     EtwpGetStackCaptureSettings @ 0x140468D04 (EtwpGetStackCaptureSettings.c)
 *     KeResumeClockTimerSafe @ 0x14056FEC4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140570010 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1405736F0 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x14057B4B4 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     EtwSendTraceBuffer @ 0x1405FF710 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x140602DC8 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x140602F04 (EtwpReenableCompression.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617684 (CmFcManagerNotifyFeatureUsage.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6644 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
