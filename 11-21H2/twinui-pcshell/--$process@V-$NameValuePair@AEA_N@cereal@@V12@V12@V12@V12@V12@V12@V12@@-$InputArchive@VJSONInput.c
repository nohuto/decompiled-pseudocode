/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000000@Z @ 0x18034B290
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000000@Z @ 0x18034B47C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@@-$InputArchive@VJSONI.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_MiniSearchActivationTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1803A0BAC (--$serialize@VJSONInputArchive@cereal@@@_tip_MiniSearchActivationTest@@QEAAXAEAVJSONInputArchive.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_SwipeDashboard@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805BC46C (--$serialize@VJSONInputArchive@cereal@@@_tip_SwipeDashboard@@QEAAXAEAVJSONInputArchive@cereal@@@.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000000@Z @ 0x18034B0C0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@-$InputArchive@VJSONInputArch.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v12; // r10
  bool *v13; // r14
  cereal::JSONInputArchive *v14; // rbx
  __int16 v15; // cx
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-28h] BYREF

  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v12 + 304) = *a2;
  v13 = (bool *)a2[1];
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
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
