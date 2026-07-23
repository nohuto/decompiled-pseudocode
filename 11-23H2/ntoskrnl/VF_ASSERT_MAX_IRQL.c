/*
 * XREFs of VF_ASSERT_MAX_IRQL @ 0x140AC474C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140AC5DF0 (VfFlushAdapterBuffers.c)
 *     VfFlushAdapterBuffersEx @ 0x140AC5FA0 (VfFlushAdapterBuffersEx.c)
 *     VfFreeCommonBuffer @ 0x140AC62A0 (VfFreeCommonBuffer.c)
 *     VfGetScatterGatherListEx @ 0x140AC6BF0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC6F20 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70D0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140AC72A0 (VfPutDmaAdapter.c)
 *     VfReadDmaCounter @ 0x140AC7830 (VfReadDmaCounter.c)
 *     ViGetAdapterInformationInternal @ 0x140AC8E64 (ViGetAdapterInformationInternal.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void VF_ASSERT_MAX_IRQL()
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v1; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
  {
    v1 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0DDE4, "Bad IRQL -- needed %x or less, got %x.", 268435475, 2);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 2uLL, 2uLL, v1, byte_140C0DDE4);
  }
}
