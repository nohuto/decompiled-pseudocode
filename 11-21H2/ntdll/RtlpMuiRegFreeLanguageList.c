/*
 * XREFs of RtlpMuiRegFreeLanguageList @ 0x18004A42C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     InitializeTEBUserLangList @ 0x180049E8C (InitializeTEBUserLangList.c)
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D524 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18004D9B0 (RtlpQueryDefaultUILanguage.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006D920 (RtlSetProcessPreferredUILanguages.c)
 *     RtlCleanUpTEBLangLists @ 0x18006DAB0 (RtlCleanUpTEBLangLists.c)
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006DEA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpUpdateTEBLanguage @ 0x18006E500 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006E840 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180083ED0 (RtlGetUserPreferredUILanguages.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x180091E80 (RtlRestoreThreadPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeLanguageList(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
  {
    if ( (*((_BYTE *)BaseAddress + 40) & 0x40) == 0 )
      return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
