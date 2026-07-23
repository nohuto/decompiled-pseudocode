/*
 * XREFs of INCREMENT_ADAPTER_CHANNELS @ 0x140AC450C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140AC4BB0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140AC4E00 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx
  int v3; // ecx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 212));
  if ( *(_DWORD *)(a1 + 224) < 3u )
  {
    v3 = *(_DWORD *)(a1 + 216);
    if ( v2 != v3 + 1 )
    {
      ViHalPreprocessOptions(
        byte_140C0DDBC,
        "Driver has allocated too many simultaneous adapter channels.",
        11LL,
        (unsigned int)(v2 - v3),
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0xBuLL, (unsigned int)(v2 - *(_DWORD *)(a1 + 216)), 0LL, 0LL, byte_140C0DDBC);
    }
  }
}
