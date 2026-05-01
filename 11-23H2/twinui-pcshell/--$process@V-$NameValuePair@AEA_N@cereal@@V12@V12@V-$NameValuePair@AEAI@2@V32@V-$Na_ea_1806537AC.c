/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1806537AC
 * Callers:
 *     ??$process@V?$NameValuePair@AEAM@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V?$NameValuePair@AEAI@2@V42@V?$NameValuePair@AEAJ@2@V52@V52@V52@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAM@1@$$QEAV?$NameValuePair@AEA_N@1@11$$QEAV?$NameValuePair@AEAI@1@2$$QEAV?$NameValuePair@AEAJ@1@333@Z @ 0x180653450 (--$process@V-$NameValuePair@AEAM@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V-$NameVa_ea_180653450.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1806539A8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAI@2@V32@V-$NameVa_ea_1806539A8.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v13; // r11
  __int64 v14; // rdi
  char *v15; // rbx
  char v16; // si
  __int64 v17; // rbx
  __int64 v18; // rdx

  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v14 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 408) = *a2;
  v15 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v14 + 32));
  v16 = *v15;
  v17 = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v17 + 328),
    (unsigned int)(v16 != 0) + 1);
  LOBYTE(v18) = v16;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v17 + 328),
    v18);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           *(_QWORD *)(a1 + 32),
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
