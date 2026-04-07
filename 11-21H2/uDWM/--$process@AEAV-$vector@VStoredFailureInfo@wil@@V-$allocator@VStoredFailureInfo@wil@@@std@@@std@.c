/*
 * XREFs of ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800428FC
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800423D8 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800436C0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800439D4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F2D88 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::vector<wil::StoredFailureInfo> &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 i; // rdi
  __int64 v10; // rbx

  cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL);
  v6 = v5 + 456;
  v7 = *(_QWORD *)(v5 + 480) + *(_QWORD *)(v5 + 488) - 1LL;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v7 >> 2))) + 4 * (v7 & 3)) = 2;
  v8 = a2[1];
  for ( i = *a2; i != v8; i += 168LL )
  {
    v10 = *(_QWORD *)(v4 + 32);
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v10 + 32));
    wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL), i);
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v10 + 32));
  }
  cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(a1 + 32));
}
