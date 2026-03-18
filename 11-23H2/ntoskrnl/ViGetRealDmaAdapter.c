/*
 * XREFs of ViGetRealDmaAdapter @ 0x140AC9188
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CE750 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405CE870 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405CE8C0 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405CE8F0 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405CE930 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BC0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC5080 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5140 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140AC5220 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52B0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC53B0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5490 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59E0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140AC5BA0 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140AC5C10 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140AC5CE0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140AC5D20 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC5D70 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC6060 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6110 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC62B0 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140AC6380 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140AC63D0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140AC6430 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140AC6530 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140AC6730 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140AC6770 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140AC67C0 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6C00 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC6D90 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140AC6E70 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72B0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC75F0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC7840 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140AC9C4C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140AC9040 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDA4,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140C0DDA4);
  }
  return *(_QWORD *)(a1 + 24);
}
