/*
 * XREFs of RtlpFreeTebLanguageList @ 0x1800101D8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x180011690 (RtlCleanUpTEBLangLists.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006FD80 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x18008A970 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x18008AA30 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008ABF0 (RtlpMuiRegFreeLanguageConfigList.c)
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
