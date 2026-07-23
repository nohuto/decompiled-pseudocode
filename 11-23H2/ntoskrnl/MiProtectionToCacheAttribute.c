/*
 * XREFs of MiProtectionToCacheAttribute @ 0x1402E17F0
 * Callers:
 *     MiInitializeTransitionPfn @ 0x14021AF58 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026A610 (MiResolvePrivateZeroFault.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetHardFaultPages @ 0x1402DF504 (MiGetHardFaultPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E0000 (MiBuildMdlForMappedFileFault.c)
 *     MiCreateSharedZeroPages @ 0x1402E1050 (MiCreateSharedZeroPages.c)
 *     MiInitializePfn @ 0x1402E12D0 (MiInitializePfn.c)
 *     MiAllocateLargeZeroPages @ 0x1402E7A70 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1402E898C (MiGetFastLargePages.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F19A4 (MiInsertPhysicalPteMapping.c)
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 *     MiPrefetchPreallocatePages @ 0x140632678 (MiPrefetchPreallocatePages.c)
 *     MiGetClusterPage @ 0x14066A544 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiFindLargePageMemory @ 0x140A49A18 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return 1LL;
  if ( a1 >> 3 == 3 )
  {
    if ( (a1 & 7) == 0 )
      return 1LL;
    return 2LL;
  }
  else
  {
    return a1 >> 3 != 1;
  }
}
