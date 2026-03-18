/*
 * XREFs of KeInsertQueueDpc @ 0x140254770
 * Callers:
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 *     CmFcManagerRecordFeatureUsage @ 0x140419A58 (CmFcManagerRecordFeatureUsage.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140419BCC (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     PspThreadDelete @ 0x1407473C0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749540 (ObpProcessRemoveObjectQueue.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x1407F5970 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1407F6374 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140A9D904 (PnprQuiesceProcessors.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9EF40 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140AA2820 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
