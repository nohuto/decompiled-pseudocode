/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x1405A440C
 * Callers:
 *     PsUnlockThreadNameShared @ 0x140411718 (PsUnlockThreadNameShared.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 1360);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1360), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
