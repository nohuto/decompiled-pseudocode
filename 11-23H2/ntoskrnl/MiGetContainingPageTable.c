/*
 * XREFs of MiGetContainingPageTable @ 0x1402E1270
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiDeleteValidSystemPage @ 0x140280810 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiLinkPoolCommitChain @ 0x1402862A0 (MiLinkPoolCommitChain.c)
 *     MiTrimSystemImagePages @ 0x1402910F4 (MiTrimSystemImagePages.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiInitializeNewPfns @ 0x140375770 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14038F184 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x140562BAC (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140563288 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140637004 (MiMakeLargePageTable.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiWritePteHighLevel @ 0x14064E2BC (MiWritePteHighLevel.c)
 *     MiCreateDescriptorPfns @ 0x140B42404 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402712F0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
}
