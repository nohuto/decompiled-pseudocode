/*
 * XREFs of EtwTraceEnqueueWork @ 0x1405FCD0C
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
 *     KeInsertHeadQueue @ 0x140573870 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
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
