/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_SmartFillTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805A172C
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805A7830 (-deserialize@-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cer.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall _tip_SmartFillTest::serialize<cereal::JSONInputArchive>(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  int Int; // eax
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rbx
  _BYTE *v10; // rax
  int v11; // eax
  __int64 v12; // rax
  cereal::JSONInputArchive *v13; // rbx
  _BYTE *v14; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "anchorLocations";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  Int = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v6);
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  a1[14] = Int;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = "fillToHorizontalAnchorLocations";
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
  v11 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v10);
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  a1[20] = v11;
  v12 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v12 + 304) = "fillToVerticalAnchorLocations";
  v13 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v13);
  v14 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v13 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v14);
  ++*(_QWORD *)(*((_QWORD *)v13 + 43) - 16LL);
  a1[26] = result;
  return result;
}
