/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1804F6B70
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 */

__int64 __fastcall tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_OnLaunchedTest_WASDK>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rsi
  cereal::JSONInputArchive *v4; // rcx
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  int Uint; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  v4 = *(cereal::JSONInputArchive **)(v3 + 32);
  *(_QWORD *)(v3 + 304) = "test";
  cereal::JSONInputArchive::startNode(v4);
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  Uint = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v6);
  v8 = a1 + 184;
  if ( !a1 )
    v8 = 8LL;
  *(_DWORD *)v8 = Uint;
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v9 = *(_QWORD *)(v3 + 32);
  v10 = *(_QWORD *)(v9 + 344);
  result = v10 - 40;
  *(_QWORD *)(v9 + 344) = v10 - 40;
  ++*(_QWORD *)(v10 - 56);
  return result;
}
