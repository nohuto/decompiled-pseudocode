/*
 * XREFs of ViGetRealDmaAdapter @ 0x140AC9178
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CECC0 (VfAllocateDomainCommonBuffer.c)
 *     VfFlushDmaBuffer @ 0x1405CEDE0 (VfFlushDmaBuffer.c)
 *     VfGetDmaDomain @ 0x1405CEE30 (VfGetDmaDomain.c)
 *     VfJoinDmaDomain @ 0x1405CEE60 (VfJoinDmaDomain.c)
 *     VfLeaveDmaDomain @ 0x1405CEEA0 (VfLeaveDmaDomain.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC5070 (VfAllocateCommonBuffer.c)
 *     VfAllocateCommonBufferEx @ 0x140AC5130 (VfAllocateCommonBufferEx.c)
 *     VfAllocateCommonBufferVector @ 0x140AC5210 (VfAllocateCommonBufferVector.c)
 *     VfAllocateCommonBufferWithBounds @ 0x140AC52A0 (VfAllocateCommonBufferWithBounds.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC53A0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC5480 (VfBuildMdlFromScatterGatherList.c)
 *     VfBuildScatterGatherList @ 0x140AC5670 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59D0 (VfBuildScatterGatherListEx.c)
 *     VfCalculateScatterGatherListSize @ 0x140AC5B90 (VfCalculateScatterGatherListSize.c)
 *     VfCancelAdapterChannel @ 0x140AC5C00 (VfCancelAdapterChannel.c)
 *     VfCancelMappedTransfer @ 0x140AC5CD0 (VfCancelMappedTransfer.c)
 *     VfConfigureAdapterChannel @ 0x140AC5D10 (VfConfigureAdapterChannel.c)
 *     VfCreateCommonBufferFromMdl @ 0x140AC5D60 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140AC5DF0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FA0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeAdapterChannel @ 0x140AC6050 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6100 (VfFreeAdapterObject.c)
 *     VfFreeCommonBuffer @ 0x140AC62A0 (VfFreeCommonBuffer.c)
 *     VfFreeCommonBufferFromVector @ 0x140AC6370 (VfFreeCommonBufferFromVector.c)
 *     VfFreeCommonBufferVector @ 0x140AC63C0 (VfFreeCommonBufferVector.c)
 *     VfFreeMapRegisters @ 0x140AC6420 (VfFreeMapRegisters.c)
 *     VfGetCommonBufferFromVectorByIndex @ 0x140AC6520 (VfGetCommonBufferFromVectorByIndex.c)
 *     VfGetDmaAdapterInfo @ 0x140AC6720 (VfGetDmaAdapterInfo.c)
 *     VfGetDmaAlignment @ 0x140AC6760 (VfGetDmaAlignment.c)
 *     VfGetDmaTransferInfo @ 0x140AC67B0 (VfGetDmaTransferInfo.c)
 *     VfGetScatterGatherList @ 0x140AC6820 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6BF0 (VfGetScatterGatherListEx.c)
 *     VfHalAllocateMapRegisters @ 0x140AC6D80 (VfHalAllocateMapRegisters.c)
 *     VfInitializeDmaTransferContext @ 0x140AC6E60 (VfInitializeDmaTransferContext.c)
 *     VfMapTransfer @ 0x140AC6F20 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72A0 (VfPutDmaAdapter.c)
 *     VfPutScatterGatherList @ 0x140AC75E0 (VfPutScatterGatherList.c)
 *     VfReadDmaCounter @ 0x140AC7830 (VfReadDmaCounter.c)
 *     ViReleaseDmaAdapter @ 0x140AC9C3C (ViReleaseDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViGetAdapterSignature @ 0x140AC9030 (ViGetAdapterSignature.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViGetRealDmaAdapter(ULONG_PTR a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)ViGetAdapterSignature(a1) == 1634550856 )
    return v2;
  if ( (unsigned int)ViGetAdapterSignature(v2) != 1634550870 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDB0,
      "Driver has provided an adapter (%p) that is not a valid DMA Adapter",
      (const void *)0x27);
    VfReportIssueWithOptions(0xE6u, 0x27uLL, a1, 0LL, 0LL, byte_140C0DDB0);
  }
  return *(_QWORD *)(a1 + 24);
}
