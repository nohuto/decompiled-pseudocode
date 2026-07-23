/*
 * XREFs of RtlpFreeTebLanguageList @ 0x18006DB7C
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18006DAB0 (RtlCleanUpTEBLangLists.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x180091E80 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x1800920B0 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18006F850 (RtlpMuiRegFreeLanguageConfigList.c)
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
