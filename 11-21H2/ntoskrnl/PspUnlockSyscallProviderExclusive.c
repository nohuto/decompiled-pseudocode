/*
 * XREFs of PspUnlockSyscallProviderExclusive @ 0x140419F18
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x1406595AC (PspAttachProcessToSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x140659708 (PspDetachProcessFromSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockSyscallProviderExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 64;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 64);
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
