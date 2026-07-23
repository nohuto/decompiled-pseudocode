/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140AC45AC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1405CEECC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC5C00 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC6050 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6100 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140AC6420 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140AC75E0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140AC7880 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C0DDD4, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C0DDD4);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
