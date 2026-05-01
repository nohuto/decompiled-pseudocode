/*
 * XREFs of ??$process@V?$NameValuePair@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@@Z @ 0x1805BC218
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C1954 (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@1@V-$NameValuePair@AEA_K@1@V31@V-$Name.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801C3460 (--$serialize@VJSONInputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONInputArchive@cer.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  cereal::JSONInputArchive *v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 304) = *a2;
  v3 = (_QWORD *)a2[1];
  v4 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v2 + 32) + 32LL);
  cereal::JSONInputArchive::search(v4);
  v5 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v4 + 43) - 40LL);
  if ( (*(_WORD *)(v5 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v3 = *(_QWORD *)v5;
  result = *((_QWORD *)v4 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
