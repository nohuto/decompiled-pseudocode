/*
 * XREFs of PspUnlockJobAssignment @ 0x14069F860
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x14069EF88 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspLockJobChain @ 0x1406A0CC8 (PspLockJobChain.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
    {
      v2 = (_QWORD *)(a1 + 152);
      if ( (_QWORD *)*v2 != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
