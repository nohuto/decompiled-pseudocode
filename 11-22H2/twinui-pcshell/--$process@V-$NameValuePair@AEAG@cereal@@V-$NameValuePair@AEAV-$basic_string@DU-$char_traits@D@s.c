/*
 * XREFs of ??$process@V?$NameValuePair@AEAG@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAG@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x180414E3C
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1804155B0 (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@ce.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x180163118 (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18018AC78 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041AB24 (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // r10
  _WORD *v10; // rdi
  cereal::JSONInputArchive *v11; // rbx
  _BYTE *v12; // rax
  __int64 v13; // rcx
  void **v14; // rdi
  cereal::JSONInputArchive *v15; // rbx
  __int64 v16; // rax
  _BYTE *String; // rax
  size_t v18; // rsi
  size_t v19; // r8
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  cereal::JSONInputArchive *v22; // rbx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  void **v26; // rdi
  cereal::JSONInputArchive *v27; // rbx
  __int64 v28; // rax
  _BYTE *v29; // rax
  __int64 result; // rax

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a2;
  v10 = (_WORD *)a2[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
  *v10 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v12);
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v13 + 304) = *a3;
  v14 = (void **)a3[1];
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v13 + 32) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL);
  String = (_BYTE *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v16);
  v18 = -1LL;
  v19 = -1LL;
  do
    ++v19;
  while ( String[v19] );
  std::string::assign(v14, String, v19);
  ++*(_QWORD *)(*((_QWORD *)v15 + 43) - 16LL);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v20 + 304) = *a4;
  v21 = (_DWORD *)a4[1];
  v22 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v20 + 32) + 32LL);
  cereal::JSONInputArchive::search(v22);
  v23 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v22 + 43) - 40LL);
  *v21 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v23);
  ++*(_QWORD *)(*((_QWORD *)v22 + 43) - 16LL);
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v24 + 304) = *a5;
  cereal::JSONInputArchive::loadValue(*(_QWORD *)(*(_QWORD *)(v24 + 32) + 32LL), a5[1]);
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v25 + 304) = *a6;
  v26 = (void **)a6[1];
  v27 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v25 + 32) + 32LL);
  cereal::JSONInputArchive::search(v27);
  v28 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v27 + 43) - 40LL);
  v29 = (_BYTE *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v28);
  do
    ++v18;
  while ( v29[v18] );
  std::string::assign(v26, v29, v18);
  result = *((_QWORD *)v27 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
