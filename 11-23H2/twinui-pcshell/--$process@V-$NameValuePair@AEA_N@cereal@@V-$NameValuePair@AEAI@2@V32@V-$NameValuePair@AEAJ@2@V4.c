/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x180653A8C
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAI@2@V32@V?$NameValuePair@AEAJ@2@V42@V42@V42@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAI@1@1$$QEAV?$NameValuePair@AEAJ@1@222@Z @ 0x1806538A0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAI@2@V32@V-$NameValuePair@AEAJ@.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V12@V?$NameValuePair@AEAJ@2@V32@V32@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@0$$QEAV?$NameValuePair@AEAJ@1@111@Z @ 0x180652EB0 (--$process@V-$NameValuePair@AEAI@cereal@@V12@V-$NameValuePair@AEAJ@2@V32@V32@V32@@-$InputArchive.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r10
  bool *v12; // r14
  cereal::JSONInputArchive *v13; // rbx
  __int16 v14; // cx
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-28h] BYREF

  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *a2;
  v12 = (bool *)a2[1];
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
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>>(
           a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
