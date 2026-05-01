/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_BrokerTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18072A94C
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_BrokerTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18072AE00 (-deserialize@-$test_merged_data@U_tip_BrokerTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cer.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall _tip_BrokerTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  __int16 v6; // cx
  __int64 v7; // rax
  cereal::JSONInputArchive *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  cereal::JSONInputArchive *v11; // rbx
  __int16 v12; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "isObjectFound";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v4 + 32) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL) + 14);
  if ( (v6 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 8) = v6 == 10;
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = "appWindow";
  v8 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL);
  cereal::JSONInputArchive::search(v8);
  v9 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v8 + 43) - 40LL);
  if ( (*(_WORD *)(v9 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)v9;
  ++*(_QWORD *)(*((_QWORD *)v8 + 43) - 16LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = "isGetProviderService";
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL) + 14);
  if ( (v12 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 24) = v12 == 10;
  result = *((_QWORD *)v11 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
