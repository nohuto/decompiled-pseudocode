/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V?$NameValuePair@AEAJ@2@V32@V32@V32@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000$$QEAV?$NameValuePair@AEAJ@1@11100@Z @ 0x18044EF24
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAJ@2@V32@V32@V32@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAJ@1@11100@Z @ 0x18044EDF0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAJ@2@V_ea_18044EDF0.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V?$NameValuePair@AEAJ@2@V32@V32@V32@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00$$QEAV?$NameValuePair@AEAJ@1@11100@Z @ 0x18044F044 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V-$NameValuePair@AEAJ@2@V32@V32@V_ea_18044F044.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // edi
  __int64 v14; // r10
  bool *v15; // r14
  cereal::JSONInputArchive *v16; // rbx
  __int16 v17; // cx
  _BYTE pExceptionObject[32]; // [rsp+50h] [rbp-28h] BYREF

  v11 = a1;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = *a2;
  v15 = (bool *)a2[1];
  v16 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v14 + 32) + 32LL);
  cereal::JSONInputArchive::search(v16);
  v17 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v16 + 43) - 40LL) + 14);
  if ( (v17 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v15 = v17 == 10;
  ++*(_QWORD *)(*((_QWORD *)v16 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           v11,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);
}
