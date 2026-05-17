/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x18008ABA0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x18008A6F0 (RtlGetUILanguageInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18008AC4C (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A320 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
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
