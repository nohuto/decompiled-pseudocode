/*
 * XREFs of ??$process@V?$NameValuePair@AEAH@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x1804150BC
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEAH@1@V01@V01@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAH@1@00000000$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x180204B08 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V-$NameValuePair@AEAH@1@V01@V01@V01@V01@V01@V01@V01@V01@.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180205EE8 (--$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHos.c)
 *     ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V01@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@V?$NameValuePair@AEA_N@1@V31@V?$NameValuePair@AEAH@1@V41@V31@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAH@1@320@Z @ 0x180278EE0 (--$-RV-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@cereal@@.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>>(
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
  *v3 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v5);
  result = *((_QWORD *)v4 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
