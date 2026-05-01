/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18041BD98
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x180276914 (--$-RV-$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@-$OutputArchive@V.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // r10
  __int64 v7; // rdi
  char *v8; // rbx
  char v9; // si
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  char *v14; // rbx
  char v15; // si
  __int64 v16; // rbx
  __int64 v17; // rdx

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL);
  v7 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 408) = *a2;
  v8 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v7 + 32));
  v9 = *v8;
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v10 + 328),
    (unsigned int)(v9 != 0) + 1);
  LOBYTE(v11) = v9;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v10 + 328),
    v11);
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL);
  v13 = *(_QWORD *)(v12 + 32);
  *(_QWORD *)(v12 + 408) = *a3;
  v14 = (char *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v13 + 32));
  v15 = *v14;
  v16 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v16 + 328),
    (unsigned int)(v15 != 0) + 1);
  LOBYTE(v17) = v15;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v16 + 328),
    v17);
  return *(_QWORD *)(a1 + 32);
}
