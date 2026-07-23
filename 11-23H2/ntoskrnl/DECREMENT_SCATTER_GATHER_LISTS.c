/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140AC43E0
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC5670 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140AC59D0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140AC6820 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140AC6BF0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140AC75E0 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 200));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0DDB8,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 196));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 196),
      (unsigned int)(*(_DWORD *)(a1 + 196) - v2),
      0LL,
      byte_140C0DDB8);
  }
}
