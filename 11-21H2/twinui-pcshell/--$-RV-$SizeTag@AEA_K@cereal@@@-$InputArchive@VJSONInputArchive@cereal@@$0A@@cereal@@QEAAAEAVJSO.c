/*
 * XREFs of ??$?RV?$SizeTag@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$SizeTag@AEA_K@1@@Z @ 0x180345C54
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C2E88 (--$load@VJSONInputArchive@cereal@@HV-$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 * Callees:
 *     ?Size@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18022C346 (-Size@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::SizeTag<unsigned __int64 &>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _WORD *v5; // rcx

  v3 = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(_QWORD *)(v4 + 344) - *(_QWORD *)(v4 + 336) == 40LL )
    v5 = (_WORD *)(v4 + 360);
  else
    v5 = (_WORD *)cereal::JSONInputArchive::Iterator::value(*(_QWORD *)(v4 + 344) - 80LL);
  *v3 = (unsigned int)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Size(v5);
  return *(_QWORD *)(a1 + 32);
}
