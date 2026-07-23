/*
 * XREFs of PspLockJobAssignment @ 0x14069F8C8
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x14069EF88 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspLockJobChain @ 0x1406A0CC8 (PspLockJobChain.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
