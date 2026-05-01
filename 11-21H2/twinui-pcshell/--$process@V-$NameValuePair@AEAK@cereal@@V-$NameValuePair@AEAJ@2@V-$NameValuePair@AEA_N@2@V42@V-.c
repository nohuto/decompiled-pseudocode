/*
 * XREFs of ??$process@V?$NameValuePair@AEAK@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_N@2@V42@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3@Z @ 0x1801C3248
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801C3460 (--$serialize@VJSONInputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONInputArchive@cer.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18034A70C (--$process@V-$NameValuePair@AEAJ@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18034AA88 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18034AA88.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18034AAB4 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x18034E798 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r10
  _DWORD *v11; // rdi
  cereal::JSONInputArchive *v12; // rbx
  __int64 v13; // rax

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *a2;
  v11 = (_DWORD *)a2[1];
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL);
  *v11 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v13);
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<long &>>(a1, a3);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a5);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(a1, a6);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(a1, a7);
}
