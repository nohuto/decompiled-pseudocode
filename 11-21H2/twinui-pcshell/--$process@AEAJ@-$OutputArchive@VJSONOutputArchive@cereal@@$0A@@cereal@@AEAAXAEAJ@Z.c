/*
 * XREFs of ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1801554EC
 * Callers:
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x180136650 (--$process@V-$NameValuePair@AEAJ@cereal@@V12@V12@V12@V-$NameValuePair@AEA_N@2@V32@@-$OutputArchi.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x180136708 (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEA_N@2@V32@@-$OutputArchive@VJSONOutp.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18013698C (--$process@V-$NameValuePair@AEAJ@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18034B8A4 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAJ@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18044A110 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAJ@2@@-$OutputArchive@VJSONOutp.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000@Z @ 0x18058D0A8 (--$process@V-$NameValuePair@AEAJ@cereal@@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V32@V32@V32@V32@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@11111@Z @ 0x18058D8DC (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V32@V32@V32@V32@V32@@-$OutputA.c)
 *     ?serialize@?$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805BE6B0 (-serialize@-$test_merged_data@U_tip_AppPrelaunchBackgroundTask@@@details@tip@@EEAAXAEAVJSONOutpu.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(__int64 a1, int *a2)
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
