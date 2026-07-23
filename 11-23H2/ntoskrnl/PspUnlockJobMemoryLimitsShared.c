/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1406A3FC4
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406A3680 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x1406A6EC4 (PspApplyJobLimitsToProcess.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1409B1F3C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax

  v2 = a1 + 1248;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1248), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1248));
  LOBYTE(v4) = KeAbPostRelease(v2);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
    {
      v4 = (_QWORD *)(a2 + 152);
      if ( (_QWORD *)*v4 != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v4;
}
