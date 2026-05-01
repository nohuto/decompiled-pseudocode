/*
 * XREFs of ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703228
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703060 (--$process@V-$NameValuePair@AEA_K@cereal@@V12@V-$NameValuePair@AEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V12@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180702B90 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180702B90.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  __int64 v10; // r10
  _QWORD *v11; // r14
  cereal::JSONInputArchive *v12; // rbx
  __int64 v13; // rax
  _BYTE pExceptionObject[40]; // [rsp+30h] [rbp-28h] BYREF

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *a2;
  v11 = (_QWORD *)a2[1];
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL);
  if ( (*(_WORD *)(v13 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v11 = *(_QWORD *)v13;
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
           a1,
           a3,
           a4,
           a5,
           a6,
           a7);
}
