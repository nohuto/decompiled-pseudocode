/*
 * XREFs of ??$process@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1800BD4DC
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800BFBB0 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<std::string> &>(
        __int64 a1,
        __int64 **a2)
{
  __int64 v4; // r14
  _QWORD *v5; // r9
  __int64 *v6; // rbp
  __int64 *i; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rdx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 32LL);
  *(_DWORD *)(*(_QWORD *)(v5[58] + 8 * (((unsigned __int64)(v5[61] + v5[60] - 1LL) >> 2) & (v5[59] - 1LL)))
            + 4LL * ((*((_DWORD *)v5 + 122) + *((_DWORD *)v5 + 120) - 1) & 3)) = 2;
  v6 = a2[1];
  for ( i = *a2; i != v6; i += 4 )
  {
    v8 = *(_QWORD *)(v4 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v8 + 32));
    v9 = i;
    if ( (unsigned __int64)i[3] >= 0x10 )
      v9 = (__int64 *)*i;
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
      *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 328LL,
      v9,
      *((unsigned int *)i + 4));
  }
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
