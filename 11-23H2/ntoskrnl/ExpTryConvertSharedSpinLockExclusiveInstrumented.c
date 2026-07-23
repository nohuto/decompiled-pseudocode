/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14046BA48
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C820 (KiAbEntryGetLockedHeadEntry.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1403C7910 (ExTryConvertSharedSpinLockExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x140601254 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x1406012C8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  int v2; // r15d
  struct _KPRCB *CurrentPrcb; // rbx
  char v6; // si
  unsigned int InterruptCount; // r14d
  int v8; // ebp
  unsigned __int64 v9; // rax
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0;
  v2 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = __rdtsc();
  }
  else
  {
    v6 = 0;
    InterruptCount = 0;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  while ( (*a1 & 0xBFFFFFFF) != 0x80000001 )
  {
    if ( (*a1 & 0x40000000) == 0 )
      _InterlockedOr(a1, 0x40000000u);
    KeYieldProcessorEx(&v11);
  }
  v8 = v11;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v11;
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  if ( v6 )
  {
    PerfLogSpinLockRelease(a1, a2, __rdtsc());
    v9 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v9, v9 - v2, v8, InterruptCount, 4);
  }
  return 1LL;
}
