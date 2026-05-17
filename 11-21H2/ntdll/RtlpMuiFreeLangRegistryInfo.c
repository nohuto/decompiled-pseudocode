/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18006DCD0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180091338 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800FA470 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 4095LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
