/*
 * XREFs of ??$process@V?$NameValuePair@AEA_K@cereal@@V12@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703158
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V12@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180702D74 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180702D74.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800C21BC (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 */

char __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  _BYTE *v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rdx

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v7 + 32),
    *(unsigned __int64 **)(a2 + 8));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v9 + 408) = *(_QWORD *)a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v9 + 32),
    *(unsigned __int64 **)(a3 + 8));
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = *a4;
  v12 = (_BYTE *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  LOBYTE(a4) = *v12;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    (__int64 **)(v13 + 328),
    (unsigned int)((_BYTE)a4 != 0) + 1);
  LOBYTE(v14) = (_BYTE)a4;
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
           (__int64 **)(v13 + 328),
           v14);
}
