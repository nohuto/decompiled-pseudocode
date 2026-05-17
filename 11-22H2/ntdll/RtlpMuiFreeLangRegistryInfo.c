/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18008A3A0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180089EF0 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008A44C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A450 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(__int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 0xFFFu);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
