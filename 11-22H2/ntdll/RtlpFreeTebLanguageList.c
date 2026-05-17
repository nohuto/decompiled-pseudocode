/*
 * XREFs of RtlpFreeTebLanguageList @ 0x1800103E8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x1800118A0 (RtlCleanUpTEBLangLists.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18008A170 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x18008A230 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800127FC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008A3F0 (RtlpMuiRegFreeLanguageConfigList.c)
 */

__int64 __fastcall RtlpFreeTebLanguageList(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    if ( a1[1] )
      RtlpMuiRegFreeLanguageConfigList();
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
  return result;
}
