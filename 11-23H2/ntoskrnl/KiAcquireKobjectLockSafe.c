/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1402520F0
 * Callers:
 *     KiThawSingleThread @ 0x140205004 (KiThawSingleThread.c)
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KiDecrementProcessStackCount @ 0x140222CF4 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14022DE10 (KiDetachProcess.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x140241FF0 (KiCommitThreadWait.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402501C8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x140250A70 (KeRegisterObjectNotification.c)
 *     KiTimer2Expiration @ 0x1402516A0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueEx @ 0x14028CA94 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x14028CBC4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     AlpcpSignal @ 0x1402B6F00 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8C10 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B9480 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     KeStartThread @ 0x1402BE368 (KeStartThread.c)
 *     KeSuspendThread @ 0x14030A0A8 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x14030A1AC (KiSuspendThread.c)
 *     KeResumeThread @ 0x14030A4BC (KeResumeThread.c)
 *     KeTerminateThread @ 0x14030A7F8 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x14030AE6C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B6D8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     KeInsertQueueEx @ 0x14031AD40 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AFD0 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CFC0 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C6C0 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x140349C08 (KeRemoveQueueEntry.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14034B09C (KiWaitForAllObjects.c)
 *     KiOutSwapProcesses @ 0x14034CF20 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x14034DBDC (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14034DD54 (KiInSwapSingleProcess.c)
 *     KeTimeOutQueueWaiters @ 0x14034ECEC (KeTimeOutQueueWaiters.c)
 *     KiSwitchQueue @ 0x14035677C (KiSwitchQueue.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KiSwitchPriQueue @ 0x140367988 (KiSwitchPriQueue.c)
 *     KiFreezeSingleThread @ 0x14036FAFC (KiFreezeSingleThread.c)
 *     KeReleaseMutantEx @ 0x14041083C (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x1405687A8 (KeRegisterObjectDpc.c)
 *     KeRetryOutswapProcess @ 0x14056FB00 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1405712C0 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x140573C8C (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140573DB0 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x1405772C8 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14057A79C (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14057EF40 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A4D20 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14060D158 (ExpCheckForWorker.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 */

void __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v1);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
}
