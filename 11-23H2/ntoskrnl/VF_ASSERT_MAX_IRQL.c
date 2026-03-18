/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140AC475C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140AC5E00 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FB0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140AC62B0 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140AC6C00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70E0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72B0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140AC7840 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140AC8E74 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0DDD0, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C0DDD0);
  }
}
