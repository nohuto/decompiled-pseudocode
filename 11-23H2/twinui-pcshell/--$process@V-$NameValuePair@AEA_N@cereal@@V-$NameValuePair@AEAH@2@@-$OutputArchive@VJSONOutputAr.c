/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAH@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18050B960
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180206178 (--$serialize@VJSONOutputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHos.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r10
  __int64 v6; // rdi
  char *v7; // rbx
  char v8; // si
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  int *v13; // rbx
  int v14; // esi
  __int64 v15; // rbx

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v6 = *(_QWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 408) = *a2;
  v7 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v6 + 32));
  v8 = *v7;
  v9 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v9 + 328),
    (unsigned int)(v8 != 0) + 1);
  LOBYTE(v10) = v8;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v9 + 328),
    v10);
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v12 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(v11 + 408) = *a3;
  v13 = (int *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v12 + 32));
  v14 = *v13;
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v15 + 328),
    6LL);
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
           (_QWORD **)(v15 + 328),
           v14);
}
