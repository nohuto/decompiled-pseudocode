/*
 * XREFs of PspLockJobExclusive @ 0x1406A3DF8
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspJobNotificationWorker @ 0x1406821C0 (PspJobNotificationWorker.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1406A07B4 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspGetNextJobProcess @ 0x1406A0D90 (PspGetNextJobProcess.c)
 *     PspLockRootJobFromProcess @ 0x1406A109C (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x1406A1130 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406A3680 (PspEnforceLimitsJobPostCallback.c)
 *     PspCallJobHierarchyCallbacks @ 0x1406A3CD4 (PspCallJobHierarchyCallbacks.c)
 *     PspJobClose @ 0x1407DD520 (PspJobClose.c)
 *     PspCreateSilo @ 0x1407E66D8 (PspCreateSilo.c)
 *     PspNotificationPacketCallback @ 0x1407E6E70 (PspNotificationPacketCallback.c)
 *     PspConvertSiloToServerSilo @ 0x1409ACDE4 (PspConvertSiloToServerSilo.c)
 *     PspQuitNextJobProcess @ 0x1409B29DC (PspQuitNextJobProcess.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall PspLockJobExclusive(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
