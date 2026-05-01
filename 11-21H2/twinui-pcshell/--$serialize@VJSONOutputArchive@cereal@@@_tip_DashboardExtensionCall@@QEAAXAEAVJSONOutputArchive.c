/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_DashboardExtensionCall@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800193A4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_DashboardExtensionCall@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180019490 (-serialize@-$test_merged_data@U_tip_DashboardExtensionCall@@@details@tip@@EEAAXAEAVJSONOutputArc.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x180087D84 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall _tip_DashboardExtensionCall::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // di
  __int64 v12; // rbx
  __int64 v13; // rdx

  v2 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  v5 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 408) = "isDashboardExtensionNull";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v5 + 32));
  v6 = *(_BYTE *)(a1 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v7 + 328,
    (unsigned int)(v6 != 0) + 1);
  LOBYTE(v8) = v6;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v7 + 328,
    v8);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  v10 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 408) = "isDashboardExtensionPresent";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v10 + 32));
  v11 = *(_BYTE *)(a1 + 9);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v12 + 328,
    (unsigned int)(v11 != 0) + 1);
  LOBYTE(v13) = v11;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           v12 + 328,
           v13);
}
