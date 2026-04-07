/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2CE4
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F2C0C (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@ce.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v8; // r11
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r8d

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v9 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 408) = *a2;
  v10 = a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
  v11 = *(_DWORD *)(v10 + 16);
  if ( *(_QWORD *)(v10 + 24) >= 0x10uLL )
    v10 = *(_QWORD *)v10;
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
    *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 328LL,
    v10,
    v11);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
           *(_QWORD *)(a1 + 32),
           a3,
           a4,
           a5);
}
