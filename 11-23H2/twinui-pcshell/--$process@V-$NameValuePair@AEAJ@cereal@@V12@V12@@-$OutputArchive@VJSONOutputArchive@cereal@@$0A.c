/*
 * XREFs of ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@00@Z @ 0x18064EE84
 * Callers:
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@000@Z @ 0x18064EFBC (--$process@V-$NameValuePair@AEAJ@cereal@@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal@.c)
 * Callees:
 *     ?WriteInt@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NH@Z @ 0x18004074C (-WriteInt@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_rap.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r11
  __int64 v8; // rdi
  int *v9; // rbx
  int v10; // esi
  __int64 **v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rdi
  int *v15; // rbx
  int v16; // esi
  __int64 **v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdi
  int *v20; // rbx
  int v21; // esi
  __int64 **v22; // rbx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v8 = *(_QWORD *)(v7 + 32);
  *(_QWORD *)(v7 + 408) = *a2;
  v9 = (int *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
  v10 = *v9;
  v11 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 328LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v11,
    6LL);
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
    v11,
    v10);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 32LL);
  v14 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 408) = *a3;
  v15 = (int *)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v14 + 32));
  v16 = *v15;
  v17 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL) + 328LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v17,
    6LL);
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
    v17,
    v16);
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 32LL);
  v19 = *(_QWORD *)(v18 + 32);
  *(_QWORD *)(v18 + 408) = *a4;
  v20 = (int *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v19 + 32));
  v21 = *v20;
  v22 = (__int64 **)(*(_QWORD *)(*(_QWORD *)(v19 + 32) + 32LL) + 328LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v22,
    6LL);
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
           v22,
           v21);
}
