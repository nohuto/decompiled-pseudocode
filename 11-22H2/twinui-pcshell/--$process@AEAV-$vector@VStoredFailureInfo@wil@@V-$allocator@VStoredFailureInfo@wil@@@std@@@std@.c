/*
 * XREFs of ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800BD588
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18041623C (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<wil::StoredFailureInfo> &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbp
  _QWORD *v5; // r9
  __int64 v6; // r14
  __int64 i; // rdi
  __int64 v8; // rbx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 32LL);
  *(_DWORD *)(*(_QWORD *)(v5[58] + 8 * (((unsigned __int64)(v5[61] + v5[60] - 1LL) >> 2) & (v5[59] - 1LL)))
            + 4LL * ((*((_DWORD *)v5 + 122) + *((_DWORD *)v5 + 120) - 1) & 3)) = 2;
  v6 = a2[1];
  for ( i = *a2; i != v6; i += 168LL )
  {
    v8 = *(_QWORD *)(v4 + 32);
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v8 + 32));
    wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL), i);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v8 + 32));
  }
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
