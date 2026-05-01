/*
 * XREFs of ??$process@V?$NameValuePair@AEAW4SwitchType@@@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SwitchType@@@1@$$QEAV?$NameValuePair@AEA_N@1@111@Z @ 0x1805FEA80
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4SwitchType@@@2@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4SwitchType@@@1@0000@Z @ 0x1805FF7AC (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1804189A8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SwitchType &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // r10
  _DWORD *v10; // rdi
  cereal::JSONInputArchive *v11; // rbx
  _BYTE *v12; // rax
  int Int; // eax
  __int64 v14; // rcx
  bool *v15; // rdi
  cereal::JSONInputArchive *v16; // rbx
  __int16 v17; // cx
  __int64 v18; // rcx
  bool *v19; // rdi
  cereal::JSONInputArchive *v20; // rbx
  __int16 v21; // cx
  __int64 v22; // rdx
  bool *v23; // rdi
  cereal::JSONInputArchive *v24; // rbx
  __int16 v25; // cx
  __int64 v26; // rdx
  bool *v27; // rdi
  cereal::JSONInputArchive *v28; // rbx
  __int16 v29; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a2;
  v10 = (_DWORD *)a2[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
  Int = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v12);
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  *v10 = Int;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = *a3;
  v15 = (bool *)a3[1];
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
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v18 + 304) = *a4;
  v19 = (bool *)a4[1];
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
  *(_QWORD *)(v22 + 304) = *a5;
  v23 = (bool *)a5[1];
  v24 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v22 + 32) + 32LL);
  cereal::JSONInputArchive::search(v24);
  v25 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v24 + 43) - 40LL) + 14);
  if ( (v25 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v23 = v25 == 10;
  ++*(_QWORD *)(*((_QWORD *)v24 + 43) - 16LL);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v26 + 304) = *a6;
  v27 = (bool *)a6[1];
  v28 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v26 + 32) + 32LL);
  cereal::JSONInputArchive::search(v28);
  v29 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v28 + 43) - 40LL) + 14);
  if ( (v29 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v27 = v29 == 10;
  result = *((_QWORD *)v28 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
