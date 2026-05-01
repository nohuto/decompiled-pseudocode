/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEA_K@2@V?$NameValuePair@AEAH@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18070D3C0
 * Callers:
 *     ??$process@AEAU_tip_FileMappingTipTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_FileMappingTipTest@@@Z @ 0x18070CE20 (--$process@AEAU_tip_FileMappingTipTest@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x1800C2114 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<int &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // r11
  __int64 v8; // rdi
  char *v9; // rbx
  char v10; // si
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdi
  int *v17; // rbx
  int v18; // esi
  __int64 v19; // rbx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 408) = *a2;
  v9 = (char *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
  v10 = *v9;
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v11 + 328),
    (unsigned int)(v10 != 0) + 1);
  LOBYTE(v12) = v10;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    (__int64 **)(v11 + 328),
    v12);
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v14 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v14 + 32),
    *(unsigned __int64 **)(a3 + 8));
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32) + 32LL) + 32LL);
  v16 = *(_QWORD *)(v15 + 32);
  *(_QWORD *)(v15 + 408) = *a4;
  v17 = (int *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v16 + 32));
  v18 = *v17;
  v19 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v19 + 328),
    6LL);
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
           (_QWORD **)(v19 + 328),
           v18);
}
