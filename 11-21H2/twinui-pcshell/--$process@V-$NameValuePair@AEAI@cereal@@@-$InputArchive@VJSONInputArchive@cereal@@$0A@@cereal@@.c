/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18034A598
 * Callers:
 *     ??$process@V?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$NameValuePair@AEAI@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A6A8 (--$process@V-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V-$NameValuePair@AEA_N@2@V32.c)
 * Callees:
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18034E798 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  cereal::JSONInputArchive *v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 304) = *a2;
  v3 = (_DWORD *)a2[1];
  v4 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v2 + 32) + 32LL);
  cereal::JSONInputArchive::search(v4);
  v5 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v4 + 43) - 40LL);
  *v3 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v5);
  result = *((_QWORD *)v4 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
