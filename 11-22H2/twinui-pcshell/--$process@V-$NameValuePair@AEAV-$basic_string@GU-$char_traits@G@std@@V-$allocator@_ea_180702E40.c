/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEA_N@2@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180702E40
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180704984 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$c_ea_180704984.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?loadValue@JSONInputArchive@cereal@@QEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041AB24 (-loadValue@JSONInputArchive@cereal@@QEAAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool *v11; // r14
  cereal::JSONInputArchive *v12; // rbx
  __int16 v13; // cx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  cereal::JSONInputArchive *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  bool *v19; // rsi
  cereal::JSONInputArchive *v20; // rbx
  __int16 v21; // cx
  __int64 v22; // rdx
  _DWORD *v23; // rdi
  cereal::JSONInputArchive *v24; // rbx
  _BYTE *v25; // rax
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *(_QWORD *)a2;
  cereal::JSONInputArchive::loadValue(*(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL), *(_OWORD **)(a2 + 8));
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = *a3;
  v11 = (bool *)a3[1];
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
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = *a4;
  v15 = (_QWORD *)a4[1];
  v16 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v14 + 32) + 32LL);
  cereal::JSONInputArchive::search(v16);
  v17 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v16 + 43) - 40LL);
  if ( (*(_WORD *)(v17 + 14) & 0x100) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v15 = *(_QWORD *)v17;
  ++*(_QWORD *)(*((_QWORD *)v16 + 43) - 16LL);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v18 + 304) = *a5;
  v19 = (bool *)a5[1];
  v20 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v18 + 32) + 32LL);
  cereal::JSONInputArchive::search(v20);
  v21 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v20 + 43) - 40LL) + 14);
  if ( (v21 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v19 = v21 == 10;
  ++*(_QWORD *)(*((_QWORD *)v20 + 43) - 16LL);
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v22 + 304) = *a6;
  v23 = (_DWORD *)a6[1];
  v24 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v24);
  v25 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v24 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v25);
  ++*(_QWORD *)(*((_QWORD *)v24 + 43) - 16LL);
  *v23 = result;
  return result;
}
