/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$NameValuePair@AEAJ@2@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$NameValuePair@AEAJ@1@0@Z @ 0x1806CAFEC
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806CB398 (--$serialize@VJSONInputArchive@cereal@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVJSONInputArchive@.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ??$load@VJSONInputArchive@cereal@@KV?$allocator@K@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1806CA85C (--$load@VJSONInputArchive@cereal@@KV-$allocator@K@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::vector<unsigned long> &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // r10
  bool *v10; // r14
  cereal::JSONInputArchive *v11; // rbx
  __int16 v12; // cx
  __int64 v13; // rcx
  bool *v14; // rdi
  cereal::JSONInputArchive *v15; // rbx
  __int16 v16; // cx
  __int64 v17; // rdi
  cereal::JSONInputArchive *v18; // rcx
  const void **v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  _DWORD *v23; // rdi
  cereal::JSONInputArchive *v24; // rbx
  _BYTE *v25; // rax
  __int64 v26; // rdx
  bool *v27; // rdi
  cereal::JSONInputArchive *v28; // rbx
  __int16 v29; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a2;
  v10 = (bool *)a2[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL) + 14);
  if ( (v12 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v10 = v12 == 10;
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v13 + 304) = *a3;
  v14 = (bool *)a3[1];
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v13 + 32) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL) + 14);
  if ( (v16 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v14 = v16 == 10;
  ++*(_QWORD *)(*((_QWORD *)v15 + 43) - 16LL);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v18 = *(cereal::JSONInputArchive **)(v17 + 32);
  *(_QWORD *)(v17 + 304) = *a4;
  v19 = (const void **)a4[1];
  cereal::JSONInputArchive::startNode(v18);
  cereal::load<cereal::JSONInputArchive,unsigned long,std::allocator<unsigned long>>(
    *(_QWORD *)(*(_QWORD *)(v17 + 32) + 32LL),
    v19);
  v20 = *(_QWORD *)(v17 + 32);
  v21 = *(_QWORD *)(v20 + 344);
  *(_QWORD *)(v20 + 344) = v21 - 40;
  ++*(_QWORD *)(v21 - 56);
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v22 + 304) = *a5;
  v23 = (_DWORD *)a5[1];
  v24 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v22 + 32) + 32LL);
  cereal::JSONInputArchive::search(v24);
  v25 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v24 + 43) - 40LL);
  *v23 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v25);
  ++*(_QWORD *)(*((_QWORD *)v24 + 43) - 16LL);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v26 + 304) = *a6;
  v27 = (bool *)a6[1];
  v28 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v26 + 32) + 32LL);
  cereal::JSONInputArchive::search(v28);
  v29 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v28 + 43) - 40LL) + 14);
  if ( (v29 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v27 = v29 == 10;
  result = *((_QWORD *)v28 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
