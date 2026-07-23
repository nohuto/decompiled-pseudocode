/*
 * XREFs of RtlLCIDToCultureName @ 0x180015CC0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180012950 (RtlpMuiRegTryToAppendLanguageName.c)
 *     GetNameFromLangListNode @ 0x180013744 (GetNameFromLangListNode.c)
 *     RtlpComputeLangListCheckSum @ 0x1800137EC (RtlpComputeLangListCheckSum.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013C18 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013FB0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EC3C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800859D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x180089EF0 (RtlGetUILanguageInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008DC20 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800AE28C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FAFF0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800FB35C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800FBAA0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1801111E8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18011191C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180111D78 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1801121C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180114000 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180114430 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801144D0 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180013F48 (RtlStringCbCopyW.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLcidToLocaleName @ 0x180015FA0 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 v8; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( Lcid && String && Lcid != 4096 )
  {
    if ( g_RegInfo
      && (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)Lcid, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      if ( DestinationString.Length <= String->MaximumLength
        && (int)RtlStringCbCopyW(String->Buffer, String->MaximumLength, (__int64)DestinationString.Buffer) >= 0 )
      {
        String->Length = v8;
        return 1;
      }
    }
    else if ( RtlLcidToLocaleName(Lcid, String, 2u, 0) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
