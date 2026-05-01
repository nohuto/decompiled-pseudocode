/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_LoadCustomVDWallpaperWithGesturePerfTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18060A3CC
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180612B50 (-deserialize@-$test_merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@details@tip@@EE.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 */

__int64 __fastcall _tip_LoadCustomVDWallpaperWithGesturePerfTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  int Int; // eax
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rbx
  _BYTE *v10; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "thumbnailSource";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  Int = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v6);
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  *(_DWORD *)(a1 + 8) = Int;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = "inputType";
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v10);
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
