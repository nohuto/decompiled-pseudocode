/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180703C14
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180703984 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V-$NameValuePair@_ea_180703984.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180703E88 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAV-$ba_ea_180703E88.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
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
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // edi
  __int64 v17; // r10
  bool *v18; // r14
  cereal::JSONInputArchive *v19; // rbx
  __int16 v20; // cx
  _BYTE pExceptionObject[32]; // [rsp+70h] [rbp-28h] BYREF

  v14 = a1;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v17 + 304) = *a2;
  v18 = (bool *)a2[1];
  v19 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v17 + 32) + 32LL);
  cereal::JSONInputArchive::search(v19);
  v20 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v19 + 43) - 40LL) + 14);
  if ( (v20 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v18 = v20 == 10;
  ++*(_QWORD *)(*((_QWORD *)v19 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
           v14,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
