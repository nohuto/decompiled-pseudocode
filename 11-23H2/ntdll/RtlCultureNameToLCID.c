/*
 * XREFs of RtlCultureNameToLCID @ 0x180016540
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x180007644 (LdrResFallbackLangList.c)
 *     RtlGetFileMUIPath @ 0x180009560 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18000A0A0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180012620 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlGetNeutralFallback @ 0x1800138E8 (RtlGetNeutralFallback.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014788 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015750 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x180015A34 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x180016348 (LdrpLangFallbackListFindNode.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001EA5C (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 *     GetLCIDFromLangListNode @ 0x180070844 (GetLCIDFromLangListNode.c)
 *     LdrLoadAlternateResourceModule @ 0x180084870 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180086F00 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlGetUILanguageInfo @ 0x18008A6F0 (RtlGetUILanguageInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008E5F8 (RtlpLoadInstallLanguageFallback.c)
 *     LdrResRelease @ 0x1800F0160 (LdrResRelease.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800FC1F0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpMUIEnumerateFolder @ 0x1800FCA58 (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801120CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180112668 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180112F54 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180113644 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x18011385C (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x180114780 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1801148B4 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180114DB4 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180015570 (RtlLocaleNameToLcid.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x180016694 (RtlpMuiRegGetOrAddStringToPool.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008F130 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  wchar_t *Buffer; // rdx
  size_t Length; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int16 v9; // r10
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 v13; // r8
  _BYTE v15[16]; // [rsp+20h] [rbp-D8h] BYREF
  WCHAR LocaleName[88]; // [rsp+30h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)String->Length + 2 > 0x55 )
    return v2;
  Length = String->Length;
  memmove(LocaleName, Buffer, Length);
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = g_RegInfo;
  LocaleName[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  if ( !*(_QWORD *)(v8 + 16) )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  if ( !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v9 = RtlpMuiRegGetOrAddStringToPool(v7[4], LocaleName, 0LL, v15);
  if ( v9 < 0 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v10 = *(_WORD *)(v8 + 6);
  v11 = 0;
  if ( !v10 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v12 = *(_QWORD *)(v8 + 16);
  while ( 1 )
  {
    v13 = 28LL * v11;
    if ( *(_WORD *)(v13 + v12 + 6) == v9 )
      break;
    if ( ++v11 >= v10 )
      return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  }
  *Lcid = *(unsigned __int16 *)(v13 + v12 + 4);
  return 1;
}
