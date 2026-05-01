/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x180349D88
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x180120C60 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ?Size@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18022C346 (-Size@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180349400 (--$_Resize@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x18034E738 (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180350F2C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

void __fastcall cereal::load<cereal::JSONInputArchive,std::string,std::allocator<std::string>>(__int64 a1, char **a2)
{
  __int64 v4; // rcx
  _WORD *v5; // rcx
  unsigned int v6; // eax
  unsigned __int64 v7; // r8
  char *v8; // rdi
  char *i; // rbx
  cereal::JSONInputArchive *v10; // rsi
  __int64 v11; // rax
  __int64 String; // rax
  __int64 v13; // r8

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(_QWORD *)(v4 + 344) - *(_QWORD *)(v4 + 336) == 40LL )
    v5 = (_WORD *)(v4 + 360);
  else
    v5 = (_WORD *)cereal::JSONInputArchive::Iterator::value(*(_QWORD *)(v4 + 344) - 80LL);
  v6 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Size(v5);
  std::vector<std::string>::_Resize<std::_Value_init_tag>(a2, v6, v7);
  v8 = a2[1];
  for ( i = *a2; i != v8; i += 32 )
  {
    v10 = *(cereal::JSONInputArchive **)(*(_QWORD *)(a1 + 32) + 32LL);
    cereal::JSONInputArchive::search(v10);
    v11 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v10 + 43) - 40LL);
    String = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v11);
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(String + v13) );
    std::string::assign(i);
    ++*(_QWORD *)(*((_QWORD *)v10 + 43) - 16LL);
  }
}
