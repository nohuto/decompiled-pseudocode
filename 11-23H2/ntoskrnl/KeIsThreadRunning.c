/*
 * XREFs of KeIsThreadRunning @ 0x14056EDD0
 * Callers:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D880 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeRegisterObjectNotification @ 0x1402509B0 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x140251A80 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252EF0 (KiTimerWaitTest.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260940 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260C30 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueCommon @ 0x14028C934 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CBA8 (KeDeleteMutant.c)
 *     AlpcpSignal @ 0x1402B6C70 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8980 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B91F0 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFD0 (KeSetEventBoostPriorityEx.c)
 *     IopfCompleteRequest @ 0x1402C99B0 (IopfCompleteRequest.c)
 *     KeTerminateThread @ 0x14030A568 (KeTerminateThread.c)
 *     KiResumeThread @ 0x14030ACF8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B09C (KiRundownMutants.c)
 *     KeInsertQueueEx @ 0x14031AAB0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AD40 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CD30 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x140321430 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x14035D33C (KeSignalGate.c)
 *     KeTryToInsertQueueApc @ 0x1405731B0 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140573870 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140603480 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
