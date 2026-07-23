/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140AC42B0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140AC5C00 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140AC6050 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140AC6100 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x140AC7880 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
  if ( *(_DWORD *)(a1 + 224) < 3u && v2 != *(_DWORD *)(a1 + 212) )
  {
    ViHalPreprocessOptions(byte_140C0DDB4, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 212), 0LL, 0LL, byte_140C0DDB4);
  }
}
