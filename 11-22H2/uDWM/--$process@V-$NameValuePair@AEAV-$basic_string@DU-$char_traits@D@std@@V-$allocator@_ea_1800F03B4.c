/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800F03B4
 * Callers:
 *     ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1800F00B8 (--$process@V-$NameValuePair@AEAG@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 * Callees:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800F20A0 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F41F4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
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
  __int64 *v10; // rdi
  __int64 v11; // r8

  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v9 = *(_QWORD *)(v8 + 32);
  *(_QWORD *)(v8 + 408) = *a2;
  v10 = (__int64 *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v9 + 32));
  v11 = *((unsigned int *)v10 + 4);
  if ( (unsigned __int64)v10[3] >= 0x10 )
    v10 = (__int64 *)*v10;
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
