/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140AC45BC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405CE95C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BC0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E10 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC5C10 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC6060 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6110 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140AC6430 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140AC75F0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140AC7890 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0DDDC, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0DDDC);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
