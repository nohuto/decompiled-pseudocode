/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140AC4650
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC5680 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59E0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140AC6830 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6C00 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140AC6F30 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC70E0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 *     MmAreMdlPagesLocked @ 0x140AE81C8 (MmAreMdlPagesLocked.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C0DDB0, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C0DDB0);
  }
}
