/*
 * XREFs of ??$process@V?$NameValuePair@AEAH@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1805A1310
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805A1668 (--$serialize@VJSONInputArchive@cereal@@@_tip_ColumnSmartFillTest@@QEAAXAEAVJSONInputArchive@cere.c)
 * Callees:
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x18034E69C (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAJ@2@V32@V32@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAJ@1@111@Z @ 0x1805A13C8 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAJ@2@V32@V32@V32@@-$InputArchive@VJS.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  __int64 v10; // r10
  _DWORD *v11; // rdi
  cereal::JSONInputArchive *v12; // rbx
  _BYTE *v13; // rax

  v7 = a1;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *a2;
  v11 = (_DWORD *)a2[1];
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL);
  *v11 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v13);
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           v7,
           a3,
           a4,
           a5,
           a6,
           a7);
}
