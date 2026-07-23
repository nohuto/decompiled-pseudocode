/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18001053C (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlGetNeutralFallback @ 0x180013AF8 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EC3C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080A70 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180081BE0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUILanguageInfo @ 0x180089EF0 (RtlGetUILanguageInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008DC20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800FA79C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpGetInstalledLanguageType @ 0x1800FB530 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetAlternateCodePage @ 0x1801098BC (RtlpGetAlternateCodePage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x180114C04 (_RtlpRemovePendingDeleteLanguages.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800166A8 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(__int64 a1, const WCHAR *a2, char a3, _WORD *a4)
{
  char v4; // r15
  unsigned int InstalledLanguageIndexByLangId; // ebx
  __int64 v10; // rbp
  int v12; // ecx
  __int64 v13; // r9
  __int64 v14; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  InstalledLanguageIndexByLangId = -1073741772;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 24);
  if ( (int)RtlpMuiRegGetOrAddString(a1, a2, 0LL, &Lcid) >= 0 )
  {
    v12 = 0;
    if ( *(_WORD *)(v10 + 6) )
    {
      v13 = *(_QWORD *)(v10 + 16);
      do
      {
        v14 = 28LL * v12;
        if ( *(_WORD *)(v14 + v13 + 6) == (_WORD)Lcid )
        {
          if ( (*(_WORD *)(v14 + v13) & 0x1020) == 0x20 )
          {
            if ( a4 )
            {
              *a4 = v12;
              return 0LL;
            }
          }
          else if ( (*(_WORD *)(v14 + v13) & 0x1000) != 0 )
          {
            v4 = 1;
          }
        }
        ++v12;
      }
      while ( v12 < *(unsigned __int16 *)(v10 + 6) );
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(
                                           a1,
                                           (unsigned __int16)Lcid,
                                           0LL,
                                           a4);
    }
  }
  if ( v4 )
  {
    if ( InstalledLanguageIndexByLangId == -1073741772 )
      return (unsigned int)-1073741637;
  }
  return InstalledLanguageIndexByLangId;
}
