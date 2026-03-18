/*
 * XREFs of PsGetNextProcessThread @ 0x140742AB0
 * Callers:
 *     PsMultiResumeProcess @ 0x14036A858 (PsMultiResumeProcess.c)
 *     KeTraceHgsPlusRundown @ 0x140576CC8 (KeTraceHgsPlusRundown.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     ExpGetNextProcessThread @ 0x140742838 (ExpGetNextProcessThread.c)
 *     PspTerminateAllThreads @ 0x14076D010 (PspTerminateAllThreads.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407C1A18 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtGetNextThread @ 0x1407DF010 (NtGetNextThread.c)
 *     PsEnumProcessThreads @ 0x14082092C (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937784 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140938148 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1409B3E2C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1409B60A0 (PsSuspendProcess.c)
 *     ExSwapinWorkerThreads @ 0x140A005C8 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3650 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v3; // rdi
  _QWORD **v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  int v8; // esi
  _QWORD *v9; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 1080);
  v5 = (_QWORD **)(a1 + 1504);
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[167];
  else
    v9 = *v5;
  if ( v9 != v5 )
  {
    while ( 1 )
    {
      v7 = v9 - 167;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 167)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v5 )
        goto LABEL_6;
    }
    v8 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  return (_QWORD *)v6;
}
