/*
 * XREFs of ??$process@AEAH@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z @ 0x180349FC8
 * Callers:
 *     ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A620 (--$process@V-$NameValuePair@AEAW4SearchAppState@@@cereal@@@-$InputArchive@VJSONInputArchive@cere.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<int &>(__int64 a1, _DWORD *a2)
{
  cereal::JSONInputArchive *v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *(cereal::JSONInputArchive **)(*(_QWORD *)(a1 + 32) + 32LL);
  cereal::JSONInputArchive::search(v3);
  v4 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v3 + 43) - 40LL);
  *a2 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v4);
  result = *((_QWORD *)v3 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
