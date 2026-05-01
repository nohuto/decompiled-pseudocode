/*
 * XREFs of ??$process@V?$NameValuePair@AEAM@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@0$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x18065323C
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAM@1@V21@V?$NameValuePair@AEA_N@1@V31@V31@V?$NameValuePair@AEAI@1@V41@V?$NameValuePair@AEAJ@1@V51@V51@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAM@1@1$$QEAV?$NameValuePair@AEA_N@1@22$$QEAV?$NameValuePair@AEAI@1@3$$QEAV?$NameValuePair@AEAJ@1@444@Z @ 0x180652CAC (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAM@1@V21@V-$NameValuePair@AEA_N@1@V31@V31.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653450 (--$process@V-$NameValuePair@AEAM@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameVa_ea_180653450.c)
 *     ?WriteDouble@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NN@Z @ 0x180655C44 (-WriteDouble@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // rbx

  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v16 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 408) = *a2;
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v16 + 32));
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v17 + 328),
    6LL);
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteDouble(v17 + 328);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<float &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           *(_QWORD *)(a1 + 32),
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
