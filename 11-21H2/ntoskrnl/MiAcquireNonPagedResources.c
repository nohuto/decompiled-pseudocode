/*
 * XREFs of MiAcquireNonPagedResources @ 0x14026A784
 * Callers:
 *     MiObtainMdlCharges @ 0x1402651B8 (MiObtainMdlCharges.c)
 *     MiCreateUltraThreadContextHelper @ 0x14026A5DC (MiCreateUltraThreadContextHelper.c)
 *     MiObtainPoolCharges @ 0x14026A718 (MiObtainPoolCharges.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAllocateDriverPageFromRange @ 0x1403C9C90 (MiAllocateDriverPageFromRange.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14058F250 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchPreallocatePages @ 0x140594C08 (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPageCrossPartition @ 0x1405AD9AC (MiMoveBadPageCrossPartition.c)
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1405B6108 (MiGetCrossPartitionCombineCharges.c)
 *     MiGetFileHashPage @ 0x1405BC4E8 (MiGetFileHashPage.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 *     MiChargeSystemImageCommitment @ 0x140761D88 (MiChargeSystemImageCommitment.c)
 *     MiAllocateProcessShadow @ 0x1407F1A10 (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1409811F0 (MiAllocatePartitionPhysicalPages.c)
 *     MiInitializeGapFrames @ 0x140AF6B44 (MiInitializeGapFrames.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiAllocateDummyPage @ 0x140B09B18 (MiAllocateDummyPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140B1A054 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r8

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4LL);
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
