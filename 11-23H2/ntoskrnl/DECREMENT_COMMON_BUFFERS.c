/*
 * XREFs of DECREMENT_COMMON_BUFFERS @ 0x140AC434C
 * Callers:
 *     VfFreeCommonBuffer @ 0x140AC62A0 (VfFreeCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140AC9FC8 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_COMMON_BUFFERS(__int64 a1)
{
  signed __int32 v2; // ebx
  unsigned int v3; // ecx
  unsigned __int32 v4; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 208), 1u);
  v3 = *(_DWORD *)(a1 + 204);
  v4 = v2 + 1;
  if ( v4 > v3 )
  {
    ViHalPreprocessOptions(byte_140C0DDD8, "Freed too many common buffers.", 3LL, v4 - v3, 0LL, 0LL);
    VfReportIssueWithOptions(0xE6u, 3uLL, v4 - *(_DWORD *)(a1 + 204), 0LL, 0LL, byte_140C0DDD8);
  }
}
