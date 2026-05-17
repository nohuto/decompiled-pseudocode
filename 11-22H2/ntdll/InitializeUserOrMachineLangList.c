/*
 * XREFs of InitializeUserOrMachineLangList @ 0x180070780
 * Callers:
 *     InitializeTEBUserLangList @ 0x180012C28 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180070350 (RtlpInitializeUserList.c)
 *     RtlpQueryDefaultUILanguage @ 0x180070640 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180012424 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 */

__int64 __fastcall InitializeUserOrMachineLangList(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  int v8; // edx
  int v10; // eax
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
    v10 = RtlpMuiRegLoadPreferredUILanguages(a1, a2, a2, a4, &v12, a3);
    if ( *a3 )
    {
      v8 = v10;
      if ( v10 && v10 != -1073741801 && v12 )
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
