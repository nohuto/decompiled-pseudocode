/*
 * XREFs of MiGetPagingFileOffset @ 0x1402F2864
 * Callers:
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiPfnShareCountIsZero @ 0x1402818C0 (MiPfnShareCountIsZero.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x1402EDE44 (MiTranslatePageForCopy.c)
 *     MiComputeFaultCluster @ 0x1402EE628 (MiComputeFaultCluster.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1402F2598 (MiExpandSharedZeroCluster.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiFlowThroughInsertNode @ 0x140369BD8 (MiFlowThroughInsertNode.c)
 *     MiComputePageHash @ 0x14046F13C (MiComputePageHash.c)
 *     MiValidatePagefilePageHash @ 0x14046F37A (MiValidatePagefilePageHash.c)
 *     MiWritePageFileHash @ 0x14046F606 (MiWritePageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x140643BD0 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140649330 (MiWorkingSetInfoCheckPageTable.c)
 *     MiStoreUpdatePagefileHash @ 0x14065CAE8 (MiStoreUpdatePagefileHash.c)
 *     MiArePagefileContentsCorrupted @ 0x1406659BC (MiArePagefileContentsCorrupted.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiScanPagefileSpace @ 0x140A32BE0 (MiScanPagefileSpace.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140271360 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *(_QWORD *)a1;
  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v1 & 1) != 0
    && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v1 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v1;
      v1 = v5;
      if ( (v6 & 0x42) != 0 )
        v1 = v5 | 0x42;
    }
  }
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C65B40 )
  {
    if ( (v1 & 0x10) == 0 )
      v1 &= ~qword_140C65B40;
  }
  return HIDWORD(v1);
}
