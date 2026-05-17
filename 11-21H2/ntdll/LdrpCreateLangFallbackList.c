/*
 * XREFs of LdrpCreateLangFallbackList @ 0x180049BE8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18004AB28 (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18004D524 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006DEA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007E780 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180083ED0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
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
