/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAH@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x18050B864
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180205FBC (--$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHost.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r9
  bool *v6; // r14
  cereal::JSONInputArchive *v7; // rbx
  __int16 v8; // cx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  cereal::JSONInputArchive *v11; // rbx
  _BYTE *v12; // rax
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
  v10 = (_DWORD *)a3[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
  *v10 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v12);
  result = *((_QWORD *)v11 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
