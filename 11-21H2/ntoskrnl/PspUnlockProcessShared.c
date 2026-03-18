/*
 * XREFs of PspUnlockProcessShared @ 0x140258A0C
 * Callers:
 *     PspInheritSyscallProvider @ 0x1406598AC (PspInheritSyscallProvider.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  v2 = a1 + 1080;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease(v2);
  return KeLeaveCriticalRegionThread(a2);
}
