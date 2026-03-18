/*
 * XREFs of ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140461CD0
 * Callers:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402169E0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14034F230 (KiAbEntryGetLockedHeadEntry.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     PerfLogSpinLockAcquire @ 0x140632C48 (PerfLogSpinLockAcquire.c)
 *     PerfLogSpinLockRelease @ 0x140632CBC (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpTryConvertSharedSpinLockExclusiveInstrumented(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v6; // r12
  char v8; // si
  unsigned __int64 v9; // rax
  unsigned int InterruptCount; // r14d
  volatile signed __int32 v11; // ecx
  int v12; // ebp
  unsigned __int64 v13; // rax
  int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v4 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v8 = 1;
    v9 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    a2 = (unsigned __int64)HIDWORD(v9) << 32;
    v4 = v9;
  }
  else
  {
    v8 = 0;
    InterruptCount = 0;
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v11 = *a1;
  if ( (v11 & 0xBFFFFFFF) != 0x80000001 )
  {
    do
    {
      if ( (v11 & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      KeYieldProcessorEx(&v15, a2, a3, a4);
      v11 = *a1;
    }
    while ( (*a1 & 0xBFFFFFFF) != 0x80000001 );
  }
  v12 = v15;
  CurrentPrcb->SynchCounters.SpinLockSpinCount += v15;
  ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
  if ( v8 )
  {
    PerfLogSpinLockRelease(a1, v6, __rdtsc());
    v13 = __rdtsc();
    PerfLogSpinLockAcquire((_DWORD)a1, v13, v13 - v4, v12, InterruptCount, 4);
  }
  return 1LL;
}
