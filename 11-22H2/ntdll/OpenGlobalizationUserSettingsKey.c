/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18000C904
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000A754 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18000A9A0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FBF88 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x180109B58 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180009D80 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x18000EAA0 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012D6D0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( !a3 )
    return 3221225485LL;
  v6 = dword_180184D04;
  if ( !dword_180184D04 )
  {
    if ( RtlIsMultiSessionSku(0LL, a2, a3, a4) )
      v6 = 1;
    else
      v6 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_180184D04 = v6;
  }
  v7 = v6 - 1;
  if ( !v7 )
    return RtlOpenCurrentUser(a1, a3);
  v9 = v7 - 1;
  if ( !v9 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  if ( v9 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(a1, a2, a3, &v10);
  return 3221225701LL;
}
