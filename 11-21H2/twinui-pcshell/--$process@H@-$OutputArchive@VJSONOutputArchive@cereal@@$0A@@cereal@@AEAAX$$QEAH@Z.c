/*
 * XREFs of ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x18015C08C
 * Callers:
 *     ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A664 (--$process@V-$NameValuePair@AEAW4SearchAppState@@@cereal@@@-$OutputArchive@VJSONOutputArchive@ce.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E4B4 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$ch_ea_18046E4B4.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAW4Status@TouchKeyboardExperienceTip@@@1@@Z @ 0x18046E584 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18046E584.c)
 *     ??$process@AEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@Z @ 0x18054EA24 (--$process@AEAU_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@-$OutputArchive@VJSONOutputArchiv.c)
 *     ??$process@V?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@@1@00@Z @ 0x1805A1590 (--$process@V-$NameValuePair@AEAW4SnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@1@0@Z @ 0x1805E0474 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexp.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(__int64 a1, int *a2)
{
  int v4; // edi
  __int64 v5; // rsi
  char *v6; // r8
  char *v7; // rdx
  __int64 v8; // rdx
  char *v9; // rdi
  char *v10; // rbx
  char *result; // rax
  char v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+21h] [rbp-27h] BYREF

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v5 + 328),
    6LL);
  v7 = &v12;
  if ( v4 < 0 )
  {
    v12 = 45;
    v4 = -v4;
    v7 = (char *)&v13;
  }
  v9 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)(unsigned int)v4, v7, v6);
  v10 = &v12;
  for ( result = &v12; v10 != v9; ++v10 )
  {
    LOBYTE(v8) = *v10;
    result = (char *)std::ostream::put(**(_QWORD **)(v5 + 328), v8);
  }
  return result;
}
