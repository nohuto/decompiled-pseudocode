/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14035B550
 * Callers:
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x14035B608 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x14035B608 (KiInsertQueueInternal.c)
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
        goto LABEL_12;
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
LABEL_12:
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
