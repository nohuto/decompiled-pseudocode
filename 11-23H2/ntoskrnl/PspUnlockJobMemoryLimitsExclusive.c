/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x1406A6B5C
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FADD0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1407DD520 (PspJobClose.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  _QWORD *v5; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1248;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1248));
    LOBYTE(v5) = KeAbPostRelease(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF )
    {
      v5 = (_QWORD *)(a3 + 152);
      if ( (_QWORD *)*v5 != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v5;
}
