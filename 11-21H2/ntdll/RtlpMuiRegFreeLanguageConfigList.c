/*
 * XREFs of RtlpMuiRegFreeLanguageConfigList @ 0x18006F850
 * Callers:
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 *     RtlpUpdateTEBLanguage @ 0x18006E500 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeLanguageConfigList(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
