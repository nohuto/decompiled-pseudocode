/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140252030
 * Callers:
 *     KiThawSingleThread @ 0x140205004 (KiThawSingleThread.c)
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KiDecrementProcessStackCount @ 0x140222CF4 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14022DD00 (KiDetachProcess.c)
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D880 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x140241F20 (KiCommitThreadWait.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402500F8 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRegisterObjectNotification @ 0x1402509B0 (KeRegisterObjectNotification.c)
 *     KiTimer2Expiration @ 0x1402515E0 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140251A80 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252EF0 (KiTimerWaitTest.c)
 *     KiProcessThreadWaitList @ 0x140253DC0 (KiProcessThreadWaitList.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260940 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260C30 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueEx @ 0x14028C804 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x14028C934 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CBA8 (KeDeleteMutant.c)
 *     KeRemoveQueueEx @ 0x1402AA040 (KeRemoveQueueEx.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     AlpcpSignal @ 0x1402B6C70 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8980 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B91F0 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFD0 (KeSetEventBoostPriorityEx.c)
 *     KeStartThread @ 0x1402BE0D8 (KeStartThread.c)
 *     KeSuspendThread @ 0x140309E18 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x140309F1C (KiSuspendThread.c)
 *     KeResumeThread @ 0x14030A22C (KeResumeThread.c)
 *     KeTerminateThread @ 0x14030A568 (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x14030ABDC (KeForceResumeThread.c)
 *     KiResumeThread @ 0x14030ACF8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B09C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14030B448 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     KeInsertQueueEx @ 0x14031AAB0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AD40 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CD30 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x140321430 (KeReleaseSemaphore.c)
 *     KiDeregisterObjectWaitBlock @ 0x14033C520 (KiDeregisterObjectWaitBlock.c)
 *     KeRemoveQueueEntry @ 0x140349CC4 (KeRemoveQueueEntry.c)
 *     KeWaitForGate @ 0x14034AD80 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14034AEFC (KiWaitForAllObjects.c)
 *     KiOutSwapProcesses @ 0x14034CD80 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14034D08C (KiInSwapProcesses.c)
 *     KiInswapAndReadyThread @ 0x14034DA3C (KiInswapAndReadyThread.c)
 *     KiInSwapSingleProcess @ 0x14034DBB4 (KiInSwapSingleProcess.c)
 *     KeTimeOutQueueWaiters @ 0x14034EB4C (KeTimeOutQueueWaiters.c)
 *     KiSwitchQueue @ 0x1403565DC (KiSwitchQueue.c)
 *     KeSignalGate @ 0x14035D33C (KeSignalGate.c)
 *     KiSwitchPriQueue @ 0x1403677E8 (KiSwitchPriQueue.c)
 *     KiFreezeSingleThread @ 0x14036F95C (KiFreezeSingleThread.c)
 *     KeReleaseMutantEx @ 0x1404105DC (KeReleaseMutantEx.c)
 *     KeRegisterObjectDpc @ 0x1405680E8 (KeRegisterObjectDpc.c)
 *     KeRetryOutswapProcess @ 0x14056F5C0 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140570D80 (KeQueryTimerDueTime.c)
 *     KeQueryOwnerMutant @ 0x14057374C (KeQueryOwnerMutant.c)
 *     KeInsertHeadQueue @ 0x140573870 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140576DD8 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14057A2AC (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14057EA50 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x1405A47B0 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x14060CC08 (ExpCheckForWorker.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD2C0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
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
