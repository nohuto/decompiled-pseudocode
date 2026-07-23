/*
 * XREFs of KeIsThreadRunning @ 0x14056F310
 * Callers:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeRegisterObjectNotification @ 0x140250A70 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueCommon @ 0x14028CBC4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     AlpcpSignal @ 0x1402B6F00 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8C10 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B9480 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     IopfCompleteRequest @ 0x1402C9C40 (IopfCompleteRequest.c)
 *     KeTerminateThread @ 0x14030A7F8 (KeTerminateThread.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KeInsertQueueEx @ 0x14031AD40 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AFD0 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CFC0 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KeTryToInsertQueueApc @ 0x1405736F0 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140573DB0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406039D0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
