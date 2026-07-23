/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x140571D88
 * Callers:
 *     KasanDriverUnloadImage @ 0x14020B620 (KasanDriverUnloadImage.c)
 *     IopQueueIrpToFileObject @ 0x14022E530 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 *     KeReleaseSpinLock @ 0x14023E520 (KeReleaseSpinLock.c)
 *     KiExecuteAllDpcs @ 0x140244590 (KiExecuteAllDpcs.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF9C0 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AFBD0 (IopCancelIrpsInFileObjectList.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6FD0 (PpmUpdatePerformanceFeedback.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     KiCallInterruptServiceRoutine @ 0x140324BE0 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14032FDD0 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPollBreakIn @ 0x140332140 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x140332780 (PsGetThreadProperty.c)
 *     KeReleaseInterruptSpinLock @ 0x140341730 (KeReleaseInterruptSpinLock.c)
 *     KasanDriverLoadImage @ 0x140360250 (KasanDriverLoadImage.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140ADF400 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
