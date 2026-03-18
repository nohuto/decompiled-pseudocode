/*
 * XREFs of PspApplyCoreIsolationPolicy @ 0x1409B0CAC
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspApplyCoreIsolationPolicy(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 1080);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  _m_prefetchw((const void *)(a1 + 2928));
  _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 1u);
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
