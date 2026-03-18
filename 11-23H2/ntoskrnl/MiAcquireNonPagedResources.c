/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402E4314
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 *     MiObtainMdlCharges @ 0x1402F8E6C (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x14035A980 (MiObtainPoolCharges.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140632128 (MiPrefetchPreallocatePages.c)
 *     MiInitializeBootShadowStackPage @ 0x140644964 (MiInitializeBootShadowStackPage.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D904 (MiMoveBadPageCrossPartition.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MiTransferPartitionPageRun @ 0x14065B604 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065D9B4 (MiProcessVaContiguityInformation.c)
 *     MiMakePageBad @ 0x14065E2B0 (MiMakePageBad.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 *     MiGetFileHashPage @ 0x140665F0C (MiGetFileHashPage.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiChargeSystemImageCommitment @ 0x140695FD0 (MiChargeSystemImageCommitment.c)
 *     MiAllocateProcessShadow @ 0x1407060AC (MiAllocateProcessShadow.c)
 *     MiAllocateFastAwePages @ 0x140A401A4 (MiAllocateFastAwePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4431C (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeGapFrames @ 0x140B41EF8 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B43E0C (MiInitializeBootLoadedDriverPfns.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140B44E78 (MiAllocateDummyPage.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
 * Callees:
 *     MiChargeCommit @ 0x1402764C0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1402DC250 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1402E43A8 (MiChargeResident.c)
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
