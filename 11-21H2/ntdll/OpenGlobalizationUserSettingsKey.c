/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18006F1DC
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006E5F4 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18006EA54 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 *     RtlpSetInstallLanguage @ 0x1800FBDB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FC298 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x180109A88 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180012A40 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x18006F250 (RtlOpenCurrentUser.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a3 )
    return 3221225485LL;
  v5 = dword_18017AAD4;
  if ( !dword_18017AAD4 )
  {
    if ( RtlIsMultiSessionSku() )
      v5 = 1;
    else
      v5 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_18017AAD4 = v5;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return RtlOpenCurrentUser(a1, a3);
  v8 = v6 - 1;
  if ( !v8 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  if ( v8 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(a1, a2, a3, &v9);
  return 3221225701LL;
}
