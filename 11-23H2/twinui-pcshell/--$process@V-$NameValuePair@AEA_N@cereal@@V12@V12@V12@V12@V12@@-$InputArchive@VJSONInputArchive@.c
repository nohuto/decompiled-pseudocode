/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000@Z @ 0x180415D1C
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000000@Z @ 0x180415E08 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@-$InputArchive@VJSONInputArch.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000@Z @ 0x180415A7C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@@-$InputArchive@VJSONInputArchive@cere.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // r10
  bool *v11; // r14
  cereal::JSONInputArchive *v12; // rbx
  __int16 v13; // cx
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *a2;
  v11 = (bool *)a2[1];
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL) + 14);
  if ( (v13 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v11 = v13 == 10;
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a1,
           a3,
           a4,
           a5,
           a6,
           a7);
}
