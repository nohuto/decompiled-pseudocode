/*
 * XREFs of RtlLCIDToCultureName @ 0x180015AB0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180009560 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180012740 (RtlpMuiRegTryToAppendLanguageName.c)
 *     GetNameFromLangListNode @ 0x180013534 (GetNameFromLangListNode.c)
 *     RtlpComputeLangListCheckSum @ 0x1800135DC (RtlpComputeLangListCheckSum.c)
 *     RtlpAddNeutralsToMergedList @ 0x180013A08 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x180013DA0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015750 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800861D0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x18008A6F0 (RtlGetUILanguageInfo.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008E420 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800B035C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlUnicodeStringToLcid @ 0x1800FB7BC (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800FC400 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800FC76C (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180112668 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180112D9C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x1801131F8 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180113644 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180115480 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1801158B0 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180115950 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180013D38 (RtlStringCbCopyW.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015B98 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLcidToLocaleName @ 0x180015D90 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
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
