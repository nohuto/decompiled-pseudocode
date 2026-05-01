/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x180653B84
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1806539A8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAI@2@V32@V-$NameVa_ea_1806539A8.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18018D048 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r11
  __int64 v12; // rdi
  char *v13; // rbx
  char v14; // si
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx

  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v12 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(v11 + 408) = *a2;
  v13 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v12 + 32));
  v14 = *v13;
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v15 + 328),
    (unsigned int)(v14 != 0) + 1);
  LOBYTE(v16) = v14;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v15 + 328),
    v16);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v18 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v18 + 32),
    *(_DWORD **)(a3 + 8));
  v19 = *(_QWORD *)(v17 + 32);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v20 + 408) = *(_QWORD *)a4;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v20 + 32),
    *(_DWORD **)(a4 + 8));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           *(_QWORD *)(v19 + 32),
           a5,
           a6,
           a7,
           a8);
}
