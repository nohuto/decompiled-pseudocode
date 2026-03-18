/*
 * XREFs of VF_ASSERT_IRQL @ 0x140AC46DC
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC4BC0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E10 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCommonBuffer @ 0x140AC5080 (VfAllocateCommonBuffer.c)
 *     VfAllocateCrashDumpRegisters @ 0x140AC53B0 (VfAllocateCrashDumpRegisters.c)
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59E0 (VfBuildScatterGatherListEx.c)
 *     VfFreeAdapterChannel @ 0x140AC6060 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x140AC6430 (VfFreeMapRegisters.c)
 *     VfGetDmaAdapter @ 0x140AC6590 (VfGetDmaAdapter.c)
 *     VfGetDmaAlignment @ 0x140AC6770 (VfGetDmaAlignment.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140AC75F0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

void __fastcall VF_ASSERT_IRQL(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // edi
  ULONG_PTR v3; // rbx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != a1 )
  {
    v2 = a1;
    v3 = CurrentIrql;
    ViHalPreprocessOptions(byte_140C0DDD8, "Bad IRQL -- needed %x, got %x.", 268435475, 1);
    VfReportIssueWithOptions(0xE6u, 0x13uLL, 1uLL, v2, v3, byte_140C0DDD8);
  }
}
