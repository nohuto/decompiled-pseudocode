/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18046E650
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18047DB10 (-deserialize@-$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18034E798 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18035147C (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rbx
  _BYTE *v10; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "applicationViewId";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v4 + 32) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  *(_DWORD *)(a1 + 8) = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v6);
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = "foregroundAppId";
  cereal::JSONInputArchive::loadValue(*(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL), (_OWORD *)(a1 + 16));
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = "status";
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v10);
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
