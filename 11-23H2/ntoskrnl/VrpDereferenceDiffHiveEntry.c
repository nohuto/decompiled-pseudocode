/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14077C820
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14077BC8C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14077C0BC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14077C918 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

_QWORD *__fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  _QWORD *result; // rax
  signed __int64 i; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt
  _QWORD *v10; // rtt

  _m_prefetchw(P + 2);
  result = (_QWORD *)P[2];
  for ( i = (signed __int64)result - 1; i > 0; i = (signed __int64)result - 1 )
  {
    v10 = result;
    result = (_QWORD *)_InterlockedCompareExchange64(P + 2, i, (signed __int64)result);
    if ( v10 == result )
      return result;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&gLoadedDiffHivesLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&gLoadedDiffHivesLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&gLoadedDiffHivesLock, v5, (__int64)&gLoadedDiffHivesLock);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  VrpDereferenceDiffHiveEntryWithLock(P);
  _m_prefetchw(&gLoadedDiffHivesLock);
  v8 = gLoadedDiffHivesLock - 16;
  if ( (gLoadedDiffHivesLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (gLoadedDiffHivesLock & 2) != 0
    || (v9 = gLoadedDiffHivesLock,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&gLoadedDiffHivesLock, v8, gLoadedDiffHivesLock)) )
  {
    ExfReleasePushLock(&gLoadedDiffHivesLock);
  }
  KeAbPostRelease((ULONG_PTR)&gLoadedDiffHivesLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
