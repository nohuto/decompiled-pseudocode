/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14031AAB8
 * Callers:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     KePulseEvent @ 0x1402206C0 (KePulseEvent.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     KeRegisterObjectNotification @ 0x140250890 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x140251960 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140252DD0 (KiTimerWaitTest.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260820 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260B10 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueCommon @ 0x14028C814 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CA88 (KeDeleteMutant.c)
 *     AlpcpSignal @ 0x1402B6C40 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8950 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402B91C0 (IoSetIoCompletionEx2.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFA0 (KeSetEventBoostPriorityEx.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     KiResumeThread @ 0x14030ABC8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030AF6C (KiRundownMutants.c)
 *     KeInsertQueueEx @ 0x14031A8D0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x14031AB60 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031CB50 (KeInsertQueue.c)
 *     KeReleaseSemaphore @ 0x140321250 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
 *     KeInsertHeadQueue @ 0x140573910 (KeInsertHeadQueue.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140238CB0 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x14031AB60 (KiInsertQueueInternal.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    result = (__int64)v2;
    v2 = (_QWORD *)v2[1];
    v6 = *(_BYTE *)(result + 16);
    if ( v6 == 2 )
    {
      v8 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
        goto LABEL_13;
      *v2 = v8;
      *(_QWORD *)(v8 + 8) = v2;
      *(_BYTE *)(result + 17) = 5;
      KiInsertQueueInternal(*(_QWORD *)(result + 24), result);
    }
    else
    {
      if ( v6 != 1 )
        return result;
      v7 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
LABEL_13:
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      KiTryUnwaitThread(a1, result, *(unsigned __int16 *)(result + 18), 0LL);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
