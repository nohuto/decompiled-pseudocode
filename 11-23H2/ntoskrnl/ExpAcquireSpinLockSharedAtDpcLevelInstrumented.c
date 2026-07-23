/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B8F2
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x1402323F0 (MiZeroFault.c)
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BE40 (MiGetSlabPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AFA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiAddWorkingSetEntries @ 0x14026BFB0 (MiAddWorkingSetEntries.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140279230 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x14027A0E0 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B6E0 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x1402888A0 (MiGetControlAreaPtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x140323AA0 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331DC0 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1402778C0 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140317000 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140601254 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r14d
  int v3; // esi
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // ebp
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // r8
  int v10; // r9d
  unsigned __int64 v11; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v5;
  }
  else
  {
    v4 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  LOBYTE(v7) = ExpTryAcquireSpinLockShared(a1);
  if ( !(_BYTE)v7 )
  {
    v7 = ExpWaitForSpinLockSharedAndAcquire(v8, v9);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v10 = v7;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v4 )
  {
    v11 = __rdtsc();
    LOBYTE(v7) = PerfLogSpinLockAcquire(v3, v11, (int)v11 - v2, v10, InterruptCount, 2);
  }
  return v7;
}
