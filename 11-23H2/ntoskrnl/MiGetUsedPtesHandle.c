/*
 * XREFs of MiGetUsedPtesHandle @ 0x1402E5A70
 * Callers:
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x140284E70 (MiReservePageFileSpaceForPage.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402E5230 (MiEvictPageTableLock.c)
 *     MiIsPageTableDeletable @ 0x1402E5884 (MiIsPageTableDeletable.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiUpdatePageTableUseCount @ 0x1402F2A00 (MiUpdatePageTableUseCount.c)
 *     MiReducePteUseCount @ 0x14033B040 (MiReducePteUseCount.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14063137C (MiUpdatePrivateDemandZeroView.c)
 *     MiCommitHotPatchTable @ 0x1406422A8 (MiCommitHotPatchTable.c)
 *     MiUpdateAwePageTable @ 0x14064C05C (MiUpdateAwePageTable.c)
 *     MiDeleteLargeUserPde @ 0x140650364 (MiDeleteLargeUserPde.c)
 *     MiInsertLargeUserMapping @ 0x140668AF0 (MiInsertLargeUserMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v2 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL)
       - 0x220000000000LL;
}
