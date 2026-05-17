/*
 * XREFs of RtlpMuiRegFreeLanguageConfigList @ 0x18008A3F0
 * Callers:
 *     RtlpMuiRegFreeRegistryInfo @ 0x18000A450 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpFreeTebLanguageList @ 0x1800103E8 (RtlpFreeTebLanguageList.c)
 *     RtlpUpdateTEBLanguage @ 0x180070548 (RtlpUpdateTEBLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeLanguageConfigList(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
