/*
 * XREFs of MiGetContainingPageTable @ 0x14033AC10
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiTrimSystemImagePages @ 0x1402D92AC (MiTrimSystemImagePages.c)
 *     MiInitializeTransitionPfn @ 0x1402E4724 (MiInitializeTransitionPfn.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiAssignNonPagedPoolPte @ 0x14033A6B0 (MiAssignNonPagedPoolPte.c)
 *     MiResolveProtoCombine @ 0x14033A920 (MiResolveProtoCombine.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 *     MiLinkPoolCommitChain @ 0x140352A00 (MiLinkPoolCommitChain.c)
 *     MiInitializeNewPfns @ 0x1403B790C (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x1403C8EF8 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x140562A80 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140563158 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140598DA4 (MiMakeLargePageTable.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     MiWritePteHighLevel @ 0x1405AE144 (MiWritePteHighLevel.c)
 *     MiCreateDescriptorPfns @ 0x140AF5940 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
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
    && (MiFlags & 0xC00000) != 0
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
