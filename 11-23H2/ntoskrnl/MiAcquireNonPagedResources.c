/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402E45A4
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402E6ED0 (MiAllocateSlabEntry.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC6FC (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402F90FC (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x14035AB20 (MiObtainPoolCharges.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140632678 (MiPrefetchPreallocatePages.c)
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 *     MiMoveBadPageCrossPartition @ 0x14064DE54 (MiMoveBadPageCrossPartition.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065DF04 (MiProcessVaContiguityInformation.c)
 *     MiMakePageBad @ 0x14065E800 (MiMakePageBad.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 *     MiGetFileHashPage @ 0x14066645C (MiGetFileHashPage.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiAllocateProcessShadow @ 0x1407062BC (MiAllocateProcessShadow.c)
 *     MiAllocateFastAwePages @ 0x140A40454 (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeGapFrames @ 0x140B41EF8 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B43E0C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140B44E78 (MiAllocateDummyPage.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E4638 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v7; // r8

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4uLL);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = (a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = (a4 >> 1) & 1;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v7) )
    return 3221225773LL;
  if ( (unsigned int)MiChargeResident(a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2);
  return 3221225626LL;
}
