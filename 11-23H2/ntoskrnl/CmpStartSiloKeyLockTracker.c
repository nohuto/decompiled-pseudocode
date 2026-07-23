/*
 * XREFs of CmpStartSiloKeyLockTracker @ 0x14080C978
 * Callers:
 *     CmInitServerSiloState @ 0x14080C904 (CmInitServerSiloState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     CmpLockSiloKeyLockTrackerExclusive @ 0x140847A74 (CmpLockSiloKeyLockTrackerExclusive.c)
 */

__int64 __fastcall CmpStartSiloKeyLockTracker(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rtt

  CmpLockSiloKeyLockTrackerExclusive();
  *((_DWORD *)BugCheckParameter2 + 2) |= 1u;
  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 - 16;
  if ( (*BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || (v4 = *BugCheckParameter2, v4 != _InterlockedCompareExchange64(BugCheckParameter2, v3, v2)) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
