/*
 * XREFs of ??$process@V?$NameValuePair@AEA_K@cereal@@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703060
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180704DF4 (--$serialize@VJSONInputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONInputArch.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703228 (--$process@V-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // edi
  __int64 v11; // r10
  _QWORD *v12; // r14
  cereal::JSONInputArchive *v13; // rbx
  __int64 v14; // rax
  _BYTE pExceptionObject[32]; // [rsp+40h] [rbp-28h] BYREF

  v8 = a1;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *a2;
  v12 = (_QWORD *)a2[1];
  v13 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v11 + 32) + 32LL);
  cereal::JSONInputArchive::search(v13);
  v14 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v13 + 43) - 40LL);
  if ( (*(_WORD *)(v14 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v12 = *(_QWORD *)v14;
  ++*(_QWORD *)(*((_QWORD *)v13 + 43) - 16LL);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
           v8,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
