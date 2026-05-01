/*
 * XREFs of ??$process@AEAU_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@Z @ 0x18005C52C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18005C370 (-serialize@-$test_merged_data@U_tip_RegisterMetadataTest@XamlExplorerHostTipTests@@@details@tip@.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?WriteBool@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_N_N@Z @ 0x180087D84 (-WriteBool@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip_ra.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<XamlExplorerHostTipTests::_tip_RegisterMetadataTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL) + 32LL) + 32LL);
  v5 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 408) = "isAuditMode";
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v5 + 32));
  LOBYTE(a2) = *(_BYTE *)(a2 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v6 + 328,
    (unsigned int)((_BYTE)a2 != 0) + 1);
  LOBYTE(v7) = a2;
  tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteBool(
    v6 + 328,
    v7);
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
