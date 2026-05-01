/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_FileMappingTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18070D5B0
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18071AF50 (-deserialize@-$test_merged_data@U_tip_FileMappingTipTest@@@details@tip@@EEAAXAEAVJSONInputArchiv.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 */

__int64 __fastcall _tip_FileMappingTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  cereal::JSONInputArchive *v8; // rsi
  __int16 v9; // cx
  __int64 v10; // rax
  cereal::JSONInputArchive *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  cereal::JSONInputArchive *v14; // rbx
  _BYTE *v15; // rax
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "appWindow";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v4 + 32) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  if ( (*(_WORD *)(v6 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 8) = *(_QWORD *)v6;
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = "isValidBuffer";
  v8 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL);
  cereal::JSONInputArchive::search(v8);
  v9 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v8 + 43) - 40LL) + 14);
  if ( (v9 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 16) = v9 == 10;
  ++*(_QWORD *)(*((_QWORD *)v8 + 43) - 16LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = "updateTimestamp";
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
  if ( (*(_WORD *)(v12 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v12;
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v13 + 304) = "state";
  v14 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v13 + 32) + 32LL);
  cereal::JSONInputArchive::search(v14);
  v15 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v14 + 43) - 40LL);
  *(_DWORD *)(a1 + 32) = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v15);
  result = *((_QWORD *)v14 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
