/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x180349E64
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ?Size@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18022C346 (-Size@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803494A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureIn.c)
 *     ??$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@@Z @ 0x180349A10 (--$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@.c)
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180351DEC (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

void __fastcall cereal::load<cereal::JSONInputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
        __int64 a1,
        wil::StoredFailureInfo **a2)
{
  __int64 v4; // rcx
  _WORD *v5; // rcx
  unsigned int v6; // eax
  wil::StoredFailureInfo *v7; // rdi
  wil::StoredFailureInfo *i; // rbx
  __int64 v9; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(_QWORD *)(v4 + 344) - *(_QWORD *)(v4 + 336) == 40LL )
    v5 = (_WORD *)(v4 + 360);
  else
    v5 = (_WORD *)cereal::JSONInputArchive::Iterator::value(*(_QWORD *)(v4 + 344) - 80LL);
  v6 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Size(v5);
  std::vector<wil::StoredFailureInfo>::_Resize<std::_Value_init_tag>(a2, v6);
  v7 = a2[1];
  for ( i = *a2; i != v7; i = (wil::StoredFailureInfo *)((char *)i + 168) )
  {
    cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(a1 + 32));
    wil::load<cereal::JSONInputArchive>(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL), i);
    v9 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v9 + 344) -= 40LL;
    ++*(_QWORD *)(*(_QWORD *)(v9 + 344) - 16LL);
  }
}
