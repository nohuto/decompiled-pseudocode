/*
 * XREFs of MiLockLowestValidPageTable @ 0x14025A520
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2DC (MiConvertAndFlushWsleVas.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiSynchronizeSystemVa @ 0x140261C40 (MiSynchronizeSystemVa.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1402863CC (MiLockPoolCommitPageTable.c)
 *     MiRelockFaultState @ 0x140287128 (MiRelockFaultState.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiTranslatePageForCopy @ 0x1402EE0D4 (MiTranslatePageForCopy.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MiReacquireWalkLocks @ 0x14046BDC8 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CFB4 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x140626A30 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiComputeIdealLargePage @ 0x140667C70 (MiComputeIdealLargePage.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402377D0 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x1403C6678 (MiPerformSafePdeWrite.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rsi
  _KPROCESS *Process; // rcx
  __int64 v9; // r9
  __int64 i; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  *a3 = 0LL;
  v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0, a4);
  for ( i = 2LL; ; --i )
  {
    v11 = *(&v17 + i);
    v12 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        if ( (v12 & 1) == 0 )
          break;
        if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          Flink = Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v15 = *((_QWORD *)&Flink->Flink + ((v11 >> 3) & 0x1FF));
            v16 = v12 | 0x20;
            if ( (v15 & 0x20) == 0 )
              v16 = *(_QWORD *)v11;
            v12 = v16;
            if ( (v15 & 0x42) != 0 )
              v12 = v16 | 0x42;
          }
        }
      }
    }
    if ( (v12 & 1) == 0 || (v12 & 0x80u) != 0LL )
      break;
    if ( (v12 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, *(&v17 + i), v12, 1LL);
    if ( v11 != v7 )
    {
      MiLockPageTableInternal(a1, v11, 0, v9);
      MiUnlockPageTableInternal(a1, v7);
      v7 = v11;
    }
    if ( !i )
    {
      *a3 = a2;
      return v7;
    }
  }
  *a3 = v11;
  return v7;
}
