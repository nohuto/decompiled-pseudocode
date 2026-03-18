/*
 * XREFs of MiInitializePageColorBase @ 0x140339C20
 * Callers:
 *     MiInitializeColorBase @ 0x14026E158 (MiInitializeColorBase.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiGetPageForHeader @ 0x1402E57FC (MiGetPageForHeader.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiAllocateMdlPagesByLists @ 0x140324C60 (MiAllocateMdlPagesByLists.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403D452C (MiTimeSingleLargePageZeroWorker.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MmAllocateNonChargedSecurePages @ 0x14058A110 (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140599EBC (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MmAllocateSecureKernelPages @ 0x1405B1A10 (MmAllocateSecureKernelPages.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1405BA768 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407BCB30 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1407F1AF8 (MiAllocateTopLevelPage.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140829CBC (MmAllocateIndependentPagesEx.c)
 *     MiScrubNodeLargePages @ 0x14097E8C8 (MiScrubNodeLargePages.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x1409839C0 (MiInitializeScrubPacket.c)
 *     MxRelocatePageTables @ 0x140AF35B8 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  unsigned int *result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  int NodeShiftedColor; // edx

  result = (unsigned int *)a1;
  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140C506CC;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C506CD) - 1;
  if ( !a1 || (*(_BYTE *)(a1 + 184) & 7u) >= 2 )
    result = &CurrentPrcb->PageColor;
  *(_QWORD *)a3 = result;
  return result;
}
