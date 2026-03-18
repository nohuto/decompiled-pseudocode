/*
 * XREFs of ?StopDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1C01EFB50
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF9A0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01E1AEC (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::StopDeadlockTrackers(DXGADAPTER *this)
{
  char *v2; // rdi
  char *v3; // rsi
  char *i; // rbx

  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1149, 0, 1) == 1 )
  {
    WdLogSingleEntry1(9LL, 12279LL);
    v2 = (char *)this + 4600;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 4600, 0LL);
    v3 = (char *)this + 4624;
    *((_QWORD *)this + 576) = KeGetCurrentThread();
    for ( i = (char *)*((_QWORD *)this + 578); i != v3; i = *(char **)i )
      DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)(i - 224));
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
