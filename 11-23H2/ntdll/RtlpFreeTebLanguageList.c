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

LOGICAL __fastcall RtlpFreeTebLanguageList(void **a1)
{
  void *v2; // rcx
  void *v3; // rcx
  LOGICAL result; // eax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    v3 = a1[1];
    if ( v3 )
      RtlpMuiRegFreeLanguageConfigList(v3);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
