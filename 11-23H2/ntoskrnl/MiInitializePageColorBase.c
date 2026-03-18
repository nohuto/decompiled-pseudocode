/*
 * XREFs of MiInitializePageColorBase @ 0x1402E1690
 * Callers:
 *     MiInitializeColorBase @ 0x140211F94 (MiInitializeColorBase.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiGetPageForHeader @ 0x14021A4D4 (MiGetPageForHeader.c)
 *     MiAllocateMdlPagesByLists @ 0x14023B910 (MiAllocateMdlPagesByLists.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolvePrivateZeroFault @ 0x14026A380 (MiResolvePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiGetPoolPages @ 0x1402E3304 (MiGetPoolPages.c)
 *     MiZeroLargePage @ 0x1402EC08C (MiZeroLargePage.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403AD5DC (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5AE8 (MiInitializeNewUltraHugeContext.c)
 *     MiPruneStandbyPages @ 0x14046CFB0 (MiPruneStandbyPages.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiGetExtendedStandbyPage @ 0x1406506B0 (MiGetExtendedStandbyPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MiHandleSpecialPurposeMemoryCachedFault @ 0x140660408 (MiHandleSpecialPurposeMemoryCachedFault.c)
 *     MiGetUltraMdlContext @ 0x1406619CC (MiGetUltraMdlContext.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140663F84 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiGetClusterPage @ 0x140669FF4 (MiGetClusterPage.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706194 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x140706324 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407446E0 (MiPfPrepareSequentialReadList.c)
 *     MiCombineIdenticalPages @ 0x1407EB514 (MiCombineIdenticalPages.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1408253A8 (MiComputeCacheAttributeSpeeds.c)
 *     MiCreateZeroThreadContext @ 0x140837A38 (MiCreateZeroThreadContext.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C23C (MmAllocateIndependentPagesEx.c)
 *     MmRelocatePfnList @ 0x140A3C988 (MmRelocatePfnList.c)
 *     MiInitializeScrubPacket @ 0x140A4602C (MiInitializeScrubPacket.c)
 *     MiFillPerSessionProtos @ 0x140A49FAC (MiFillPerSessionProtos.c)
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
