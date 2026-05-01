/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x18071FA74
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V01@V21@V21@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1011@Z @ 0x18027AA34 (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041AB24 (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // r10
  bool *v8; // r14
  cereal::JSONInputArchive *v9; // rbp
  __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = *a2;
  v8 = (bool *)a2[1];
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL) + 14);
  if ( (v10 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v8 = v10 == 10;
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *(_QWORD *)a3;
  cereal::JSONInputArchive::loadValue(
    *(cereal::JSONInputArchive **)(*(_QWORD *)(v11 + 32) + 32LL),
    *(_OWORD **)(a3 + 8));
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v12 + 304) = *(_QWORD *)a4;
  return cereal::JSONInputArchive::loadValue(
           *(cereal::JSONInputArchive **)(*(_QWORD *)(v12 + 32) + 32LL),
           *(_OWORD **)(a4 + 8));
}
