/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140571848
 * Callers:
 *     KasanDriverUnloadImage @ 0x14020B620 (KasanDriverUnloadImage.c)
 *     IopQueueIrpToFileObject @ 0x14022E420 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 *     KeReleaseSpinLock @ 0x14023E450 (KeReleaseSpinLock.c)
 *     KiExecuteAllDpcs @ 0x1402444C0 (KiExecuteAllDpcs.c)
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254790 (KiInsertQueueDpc.c)
 *     IoPageReadEx @ 0x1402A6810 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF730 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFB50 (IopCancelIrpsInFileObjectList.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6D40 (PpmUpdatePerformanceFeedback.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     ExGenRandom @ 0x1403175D0 (ExGenRandom.c)
 *     KiCallInterruptServiceRoutine @ 0x140324950 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14032FB40 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPollBreakIn @ 0x140331EB0 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x1403324F0 (PsGetThreadProperty.c)
 *     KeReleaseInterruptSpinLock @ 0x1403414A0 (KeReleaseInterruptSpinLock.c)
 *     KasanDriverLoadImage @ 0x1403600B0 (KasanDriverLoadImage.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140ADF410 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600D78 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
