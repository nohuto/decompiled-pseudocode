/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V12@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180702B90
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703228 (--$process@V-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041AB24 (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  cereal::JSONInputArchive *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  cereal::JSONInputArchive *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  bool *v20; // rdi
  cereal::JSONInputArchive *v21; // rbx
  __int16 v22; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *(_QWORD *)a2;
  cereal::JSONInputArchive::loadValue(*(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL), *(_OWORD **)(a2 + 8));
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *(_QWORD *)a3;
  cereal::JSONInputArchive::loadValue(
    *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL),
    *(_OWORD **)(a3 + 8));
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = *a4;
  v12 = (_QWORD *)a4[1];
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
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v15 + 304) = *a5;
  v16 = (_QWORD *)a5[1];
  v17 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v15 + 32) + 32LL);
  cereal::JSONInputArchive::search(v17);
  v18 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v17 + 43) - 40LL);
  if ( (*(_WORD *)(v18 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v16 = *(_QWORD *)v18;
  ++*(_QWORD *)(*((_QWORD *)v17 + 43) - 16LL);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v19 + 304) = *a6;
  v20 = (bool *)a6[1];
  v21 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v19 + 32) + 32LL);
  cereal::JSONInputArchive::search(v21);
  v22 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v21 + 43) - 40LL) + 14);
  if ( (v22 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v20 = v22 == 10;
  result = *((_QWORD *)v21 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
