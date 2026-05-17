/*
 * XREFs of LdrpCreateLangFallbackList @ 0x1800121CC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011B40 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006FEF0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18007AC94 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800810E0 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180082250 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180012214 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall LdrpCreateLangFallbackList(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // r8
  __int64 LanguageList; // rax

  if ( !a2 || !a1 )
    return 3221225485LL;
  v6 = a2;
  LOBYTE(a2) = a4;
  LanguageList = RtlpMuiRegCreateLanguageList(a3, a2, v6);
  *a1 = LanguageList;
  return LanguageList == 0 ? 0xC0000017 : 0;
}
