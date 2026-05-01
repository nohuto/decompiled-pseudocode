/*
 * XREFs of ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180541080
 * Callers:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@111$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x180540EF8 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V32@V-$NameValuePair@A.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v9; // r10
  bool *v10; // r15
  cereal::JSONInputArchive *v11; // rdi
  __int16 v12; // cx
  __int64 v13; // rcx
  bool *v14; // rsi
  cereal::JSONInputArchive *v15; // rdi
  __int16 v16; // cx
  __int64 v17; // rcx
  bool *v18; // rsi
  cereal::JSONInputArchive *v19; // rdi
  __int16 v20; // cx
  __int64 v21; // rdx
  bool *v22; // rsi
  cereal::JSONInputArchive *v23; // rdi
  __int16 v24; // cx
  __int64 v25; // rdx
  _BYTE *v26; // rdi
  cereal::JSONInputArchive *v27; // rbx
  _BYTE *v28; // rax
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v9 + 304) = *a2;
  v10 = (bool *)a2[1];
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v9 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL) + 14);
  if ( (v12 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v10 = v12 == 10;
  ++*(_QWORD *)(*((_QWORD *)v11 + 43) - 16LL);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v13 + 304) = *a3;
  v14 = (bool *)a3[1];
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v13 + 32) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL) + 14);
  if ( (v16 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v14 = v16 == 10;
  ++*(_QWORD *)(*((_QWORD *)v15 + 43) - 16LL);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v17 + 304) = *a4;
  v18 = (bool *)a4[1];
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
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v21 + 304) = *a5;
  v22 = (bool *)a5[1];
  v23 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v21 + 32) + 32LL);
  cereal::JSONInputArchive::search(v23);
  v24 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v23 + 43) - 40LL) + 14);
  if ( (v24 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *v22 = v24 == 10;
  ++*(_QWORD *)(*((_QWORD *)v23 + 43) - 16LL);
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v25 + 304) = *a6;
  v26 = (_BYTE *)a6[1];
  v27 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v27);
  v28 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v27 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v28);
  ++*(_QWORD *)(*((_QWORD *)v27 + 43) - 16LL);
  *v26 = result;
  return result;
}
