/*
 * XREFs of KeInsertQueueDpc @ 0x140254830
 * Callers:
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419DE8 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419F5C (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749730 (ObpProcessRemoveObjectQueue.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5C40 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6644 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AD20 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EDB0 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140AA2690 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
