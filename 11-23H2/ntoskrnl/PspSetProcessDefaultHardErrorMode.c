/*
 * XREFs of PspSetProcessDefaultHardErrorMode @ 0x140774674
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KeSetAutoAlignmentProcess @ 0x14077464C (KeSetAutoAlignmentProcess.c)
 */

_QWORD *__fastcall PspSetProcessDefaultHardErrorMode(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v3; // rdi
  int v8; // esi

  v3 = (volatile signed __int64 *)(a1 + 1080);
  --*(_WORD *)(a2 + 484);
  ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
  if ( *(_DWORD *)(a1 + 1528) != a3 )
  {
    *(_DWORD *)(a1 + 1528) = a3;
    v8 = (a3 >> 2) & 1;
    if ( *(_QWORD *)(a1 + 1408) )
      v8 = 1;
    KeSetAutoAlignmentProcess(a1, v8);
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return KeLeaveCriticalRegionThread(a2);
}
