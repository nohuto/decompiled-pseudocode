/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@00@Z @ 0x1805BBCD8
 * Callers:
 *     ??$process@AEAU_tip_WinXMenuEnumerationTest@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_WinXMenuEnumerationTest@@@Z @ 0x1801D7270 (--$process@AEAU_tip_WinXMenuEnumerationTest@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cere.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r10
  bool *v8; // r15
  cereal::JSONInputArchive *v9; // rdi
  __int16 v10; // cx
  __int64 v11; // rcx
  bool *v12; // rsi
  cereal::JSONInputArchive *v13; // rdi
  __int16 v14; // cx
  __int64 v15; // rcx
  bool *v16; // rsi
  cereal::JSONInputArchive *v17; // rdi
  __int16 v18; // cx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = *a2;
  v8 = (bool *)a2[1];
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL) + 14);
  if ( (v10 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v8 = v10 == 10;
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *a3;
  v12 = (bool *)a3[1];
  v13 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v11 + 32) + 32LL);
  cereal::JSONInputArchive::search(v13);
  v14 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v13 + 43) - 40LL) + 14);
  if ( (v14 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v12 = v14 == 10;
  ++*(_QWORD *)(*((_QWORD *)v13 + 43) - 16LL);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v15 + 304) = *a4;
  v16 = (bool *)a4[1];
  v17 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v15 + 32) + 32LL);
  cereal::JSONInputArchive::search(v17);
  v18 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v17 + 43) - 40LL) + 14);
  if ( (v18 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v16 = v18 == 10;
  ++*(_QWORD *)(*((_QWORD *)v17 + 43) - 16LL);
  return *(_QWORD *)(a1 + 32);
}
