/*
 * XREFs of InitializeUserOrMachineLangList @ 0x18004D8E4
 * Callers:
 *     InitializeTEBUserLangList @ 0x180049E8C (InitializeTEBUserLangList.c)
 *     RtlpQueryDefaultUILanguage @ 0x18004D9B0 (RtlpQueryDefaultUILanguage.c)
 *     RtlpInitializeUserList @ 0x18006E308 (RtlpInitializeUserList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  int v8; // edx
  int PreferredUILanguages; // eax
  __int64 LanguageList; // rax
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  if ( !a3 || !a1 || a2 > 1 || (unsigned int)(a4 - 2) > 1 )
    return 3221225485LL;
  if ( a5 && a4 == 3 )
  {
    v8 = RtlpSetProcUserMachineLangList(a1, a2);
    if ( v8 >= 0 )
    {
      if ( a2 == 1 )
      {
        *a3 = *(_QWORD *)(a1 + 64);
      }
      else if ( !a2 )
      {
        *a3 = *(_QWORD *)(a1 + 56);
      }
    }
  }
  else
  {
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, (__int64)&v12, (__int64)a3);
    if ( *a3 )
    {
      v8 = PreferredUILanguages;
      if ( PreferredUILanguages && PreferredUILanguages != -1073741801 && v12 )
        return 0;
    }
    else
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, a2 != 1, a1);
      *a3 = LanguageList;
      return LanguageList == 0 ? 0xC0000017 : 0;
    }
  }
  return (unsigned int)v8;
}
