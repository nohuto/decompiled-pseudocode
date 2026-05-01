/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18041BC6C
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@1@@Z @ 0x18027686C (--$-RV-$NameValuePair@AEAU_tip_SetPhysicalDeviceAccessRegKeyTipTest@@@cereal@@@-$InputArchive@VJ.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r9
  bool *v6; // r14
  cereal::JSONInputArchive *v7; // rdi
  __int16 v8; // cx
  __int64 v9; // rcx
  bool *v10; // rsi
  cereal::JSONInputArchive *v11; // rdi
  __int16 v12; // cx
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
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  return *(_QWORD *)(a1 + 32);
}
