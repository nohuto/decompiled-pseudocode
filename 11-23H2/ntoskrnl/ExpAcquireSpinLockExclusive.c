/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14025B400
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140259EE0 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AF20 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B320 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BB20 (MiComputeAgingAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B438 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(int *a1, unsigned __int8 a2)
{
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    v4 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  while ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (*a1 & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    KeYieldProcessorEx(&v4);
  }
  return v4;
}
