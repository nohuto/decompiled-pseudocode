/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14025B690
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14025A170 (PsImpersonateContainerOfThread.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiReferenceControlAreaPfn @ 0x14025B5B0 (MiReferenceControlAreaPfn.c)
 *     MiComputeAgingAmount @ 0x14025BDB0 (MiComputeAgingAmount.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
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
