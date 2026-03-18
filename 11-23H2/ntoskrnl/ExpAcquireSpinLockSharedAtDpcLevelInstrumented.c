/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046B4F2
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B20 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x140232320 (MiZeroFault.c)
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BD70 (MiGetSlabPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025AD10 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x1402619B0 (MiSynchronizeSystemVa.c)
 *     MiAcquirePageListLock @ 0x1402673A0 (MiAcquirePageListLock.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiAddWorkingSetEntries @ 0x14026BD20 (MiAddWorkingSetEntries.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402709E0 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273D60 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140278FA0 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140279E50 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B450 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x140288610 (MiGetControlAreaPtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockShared @ 0x140314620 (ExAcquireSpinLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x140323810 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331B30 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140277630 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316D70 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140600D04 (PerfLogSpinLockAcquire.c)
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
