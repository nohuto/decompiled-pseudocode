/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18034AB48
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18019AC74 (--$serialize@VJSONInputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONInputArchive@cereal@@@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r9
  bool *v6; // r14
  cereal::JSONInputArchive *v7; // rbx
  __int16 v8; // cx
  __int64 v9; // rcx
  bool *v10; // rdi
  cereal::JSONInputArchive *v11; // rbx
  __int16 v12; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v5 + 304) = *a2;
  v6 = (bool *)a2[1];
  v7 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v5 + 32) + 32LL);
  cereal::JSONInputArchive::search(v7);
  v8 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v7 + 43) - 40LL) + 14);
  if ( (v8 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v6 = v8 == 10;
  ++*(_QWORD *)(*((_QWORD *)v7 + 43) - 16LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a3;
  v10 = (bool *)a3[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL) + 14);
  if ( (v12 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v10 = v12 == 10;
  result = *((_QWORD *)v11 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
