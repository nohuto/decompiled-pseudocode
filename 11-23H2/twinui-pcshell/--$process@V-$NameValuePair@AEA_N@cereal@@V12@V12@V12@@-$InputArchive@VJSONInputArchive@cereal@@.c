/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000@Z @ 0x180415858
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180205EE8 (--$serialize@VJSONInputArchive@cereal@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHos.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v8; // r10
  bool *v9; // r15
  cereal::JSONInputArchive *v10; // rdi
  __int16 v11; // cx
  __int64 v12; // rcx
  bool *v13; // rsi
  cereal::JSONInputArchive *v14; // rdi
  __int16 v15; // cx
  __int64 v16; // rcx
  bool *v17; // rsi
  cereal::JSONInputArchive *v18; // rdi
  __int16 v19; // cx
  __int64 v20; // rdx
  bool *v21; // rdi
  cereal::JSONInputArchive *v22; // rbx
  __int16 v23; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = *a2;
  v9 = (bool *)a2[1];
  v10 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v8 + 32) + 32LL);
  cereal::JSONInputArchive::search(v10);
  v11 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v10 + 43) - 40LL) + 14);
  if ( (v11 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v9 = v11 == 10;
  ++*(_QWORD *)(*((_QWORD *)v10 + 43) - 16LL);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v12 + 304) = *a3;
  v13 = (bool *)a3[1];
  v14 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v12 + 32) + 32LL);
  cereal::JSONInputArchive::search(v14);
  v15 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v14 + 43) - 40LL) + 14);
  if ( (v15 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v13 = v15 == 10;
  ++*(_QWORD *)(*((_QWORD *)v14 + 43) - 16LL);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v16 + 304) = *a4;
  v17 = (bool *)a4[1];
  v18 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v16 + 32) + 32LL);
  cereal::JSONInputArchive::search(v18);
  v19 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v18 + 43) - 40LL) + 14);
  if ( (v19 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v17 = v19 == 10;
  ++*(_QWORD *)(*((_QWORD *)v18 + 43) - 16LL);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v20 + 304) = *a5;
  v21 = (bool *)a5[1];
  v22 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v20 + 32) + 32LL);
  cereal::JSONInputArchive::search(v22);
  v23 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v22 + 43) - 40LL) + 14);
  if ( (v23 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v21 = v23 == 10;
  result = *((_QWORD *)v22 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
