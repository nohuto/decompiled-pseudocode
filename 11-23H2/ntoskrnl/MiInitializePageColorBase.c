/*
 * XREFs of MiInitializePageColorBase @ 0x1402E1920
 * Callers:
 *     MiInitializeColorBase @ 0x140211F94 (MiInitializeColorBase.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiGetPageForHeader @ 0x14021A4D4 (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B9E0 (MiAllocateMdlPagesByLists.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026A610 (MiResolvePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1590 (MiZeroInParallelWorker.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3594 (MiGetPoolPages.c)
 *     MiZeroLargePage @ 0x1402EC31C (MiZeroLargePage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403AD7BC (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5CC8 (MiInitializeNewUltraHugeContext.c)
 *     MiPruneStandbyPages @ 0x14046D3B0 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x140618ABC (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiGetExtendedStandbyPage @ 0x140650C00 (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660958 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetUltraMdlContext @ 0x140661F1C (MiGetUltraMdlContext.c)
 *     MiReplenishUltraPageTables @ 0x1406620CC (MiReplenishUltraPageTables.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406644D4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiMapPageFileHash @ 0x14066683C (MiMapPageFileHash.c)
 *     MiGetClusterPage @ 0x14066A544 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14066A9E0 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1407063A4 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 *     MiCombineIdenticalPages @ 0x1407EB7E4 (MiCombineIdenticalPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408256A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x140837D38 (MiCreateZeroThreadContext.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 *     MmRelocatePfnList @ 0x140A3CC38 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A462DC (MiInitializeScrubPacket.c)
 *     MiFillPerSessionProtos @ 0x140A4A25C (MiFillPerSessionProtos.c)
 *     MmInitializeProcessor @ 0x140A89098 (MmInitializeProcessor.c)
 *     MxRelocatePageTables @ 0x140B580F0 (MxRelocatePageTables.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MiInitializePageColorBase(__int64 a1, int a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r10
  int NodeShiftedColor; // edx
  unsigned __int8 result; // al

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (a2 - 1) << byte_140C65A8D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  *(_DWORD *)(a3 + 12) = NodeShiftedColor;
  *(_DWORD *)(a3 + 8) = (1 << byte_140C65A8E) - 1;
  if ( a1 && (result = *(_BYTE *)(a1 + 184) & 7, result < 2u) )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    result = (_BYTE)CurrentPrcb + 80;
    *(_QWORD *)a3 = &CurrentPrcb->PageColor;
  }
  return result;
}
