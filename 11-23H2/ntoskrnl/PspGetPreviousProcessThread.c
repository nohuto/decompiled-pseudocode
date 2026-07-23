/*
 * XREFs of PspGetPreviousProcessThread @ 0x14076D438
 * Callers:
 *     PspTerminateAllThreads @ 0x14076D200 (PspTerminateAllThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall PspGetPreviousProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v3; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 1080);
  v5 = a1 + 1504;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = 0;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v8 = a2[168];
  else
    v8 = *(_QWORD *)(v5 + 8);
  while ( v8 != v5 )
  {
    v6 = v8 - 1336;
    if ( ObReferenceObjectSafeWithTag(v8 - 1336) )
    {
      v7 = 1;
      break;
    }
    v8 = *(_QWORD *)(v8 + 8);
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v6 & -(__int64)(v7 != 0);
}
