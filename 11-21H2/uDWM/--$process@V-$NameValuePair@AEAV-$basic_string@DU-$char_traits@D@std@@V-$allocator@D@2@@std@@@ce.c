/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2C0C
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F2D88 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ??$process@AEAG@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z @ 0x1800F2804 (--$process@AEAG@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAG@Z.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rcx

  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = *a2;
  v12 = a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  v13 = *(_DWORD *)(v12 + 16);
  if ( *(_QWORD *)(v12 + 24) >= 0x10uLL )
    v12 = *(_QWORD *)v12;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
    *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 328LL,
    v12,
    v13);
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v15 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned short &>(
    *(_QWORD *)(v15 + 32),
    *(unsigned __int16 **)(a3 + 8));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
           *(_QWORD *)(v14 + 32),
           a4,
           a5,
           a6,
           a7);
}
