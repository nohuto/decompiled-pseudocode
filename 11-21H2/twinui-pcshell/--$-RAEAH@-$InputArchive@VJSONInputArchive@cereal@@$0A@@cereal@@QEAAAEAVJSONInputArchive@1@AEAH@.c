/*
 * XREFs of ??$?RAEAH@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@AEAH@Z @ 0x180345BEC
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C2E88 (--$load@VJSONInputArchive@cereal@@HV-$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<int &>(__int64 a1, _DWORD *a2)
{
  cereal::JSONInputArchive *v4; // rbx
  __int64 v5; // rax

  v4 = *(cereal::JSONInputArchive **)(*(_QWORD *)(a1 + 32) + 32LL);
  cereal::JSONInputArchive::search(v4);
  v5 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v4 + 43) - 40LL);
  *a2 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v5);
  ++*(_QWORD *)(*((_QWORD *)v4 + 43) - 16LL);
  return *(_QWORD *)(a1 + 32);
}
