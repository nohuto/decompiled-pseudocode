/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180704A70
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x18070486C (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$c_ea_18070486C.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041ADA4 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r11
  __int64 v11; // rdi
  char *v12; // rbx
  char v13; // si
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbx
  void **v19; // rdi

  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = *a2;
  v12 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  v13 = *v12;
  v14 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v14 + 328),
    (unsigned int)(v13 != 0) + 1);
  LOBYTE(v15) = v13;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v14 + 328),
    v15);
  v16 = *(_QWORD *)(a1 + 32);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL) + 32LL);
  v18 = *(_QWORD *)(v17 + 32);
  *(_QWORD *)(v17 + 408) = *a3;
  v19 = (void **)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v18 + 32));
  cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v18 + 32) + 32LL), v19);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
           *(_QWORD *)(v16 + 32),
           a4,
           a5,
           a6,
           a7);
}
