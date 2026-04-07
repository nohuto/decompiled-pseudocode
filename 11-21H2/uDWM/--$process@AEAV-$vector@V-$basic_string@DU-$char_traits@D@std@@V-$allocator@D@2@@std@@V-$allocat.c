/*
 * XREFs of ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180042840
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800439D4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180043D44 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<std::string> &>(
        __int64 a1,
        __int64 **a2)
{
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 *v8; // rbp
  __int64 *i; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rdx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL);
  v6 = v5 + 456;
  v7 = *(_QWORD *)(v5 + 480) + *(_QWORD *)(v5 + 488) - 1LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v7 >> 2))) + 4 * (v7 & 3)) = 2;
  v8 = a2[1];
  for ( i = *a2; i != v8; i += 4 )
  {
    v10 = *(_QWORD *)(v4 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v10 + 32));
    v11 = i;
    if ( (unsigned __int64)i[3] >= 0x10 )
      v11 = (__int64 *)*i;
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
      *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL) + 328LL,
      v11,
      *((unsigned int *)i + 4));
  }
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
