/*
 * XREFs of EtwTraceEnqueueWork @ 0x1405FCD9C
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
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1232);
  v7 = 0;
  v5 = a2;
  v6 = v3;
  v8 = &v5;
  v10 = 0;
  v9 = 12;
  return EtwTraceKernelEvent((int)&v8, 1, 0x21000000u, 1342, a3 != 0 ? 5250562 : 5244418);
}
