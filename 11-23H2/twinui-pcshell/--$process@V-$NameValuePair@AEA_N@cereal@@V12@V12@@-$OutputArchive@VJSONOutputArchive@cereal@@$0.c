/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x180054A44
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000@Z @ 0x180054998 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal.c)
 *     ??$?RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@AEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@Z @ 0x1802767C4 (--$-RAEAU_tip_MakePhysicalDeviceAccessKeyVolatileTipTest@@@-$OutputArchive@VJSONOutputArchive@ce.c)
 *     ?serialize@?$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1802EB590 (-serialize@-$test_merged_data@U_tip_InputSwitcherHideTest@@@details@tip@@EEAAXAEAVJSONOutputArch.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r11
  __int64 v8; // rdi
  char *v9; // rbx
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdi
  char *v16; // rbx
  char v17; // si
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdi
  char *v22; // rbx
  char v23; // si
  __int64 v24; // rbx
  __int64 v25; // rdx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 408) = *a2;
  v9 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
  v10 = *v9;
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v11,
    (unsigned int)(v10 != 0) + 1);
  LOBYTE(v12) = v10;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v11,
    v12);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  v15 = *(_QWORD *)(v14 + 32);
  *(_QWORD *)(v14 + 408) = *a3;
  v16 = (char *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v15 + 32));
  v17 = *v16;
  v18 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v18,
    (unsigned int)(v17 != 0) + 1);
  LOBYTE(v19) = v17;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v18,
    v19);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  v21 = *(_QWORD *)(v20 + 32);
  *(_QWORD *)(v20 + 408) = *a4;
  v22 = (char *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v21 + 32));
  v23 = *v22;
  v24 = *(_QWORD *)(*(_QWORD *)(v21 + 32) + 32LL) + 328LL;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v24,
    (unsigned int)(v23 != 0) + 1);
  LOBYTE(v25) = v23;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           v24,
           v25);
}
