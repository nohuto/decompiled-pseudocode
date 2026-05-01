/*
 * XREFs of ??$process@AEAU_tip_EduDefaultThemeApplied@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_EduDefaultThemeApplied@@@Z @ 0x1806E0CBC
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_EduDefaultThemeApplied@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806E4160 (-deserialize@-$test_merged_data@U_tip_EduDefaultThemeApplied@@@details@tip@@EEAAXAEAVJSONInputAr.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<_tip_EduDefaultThemeApplied &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rdi
  __int16 v6; // cx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(a1 + 32));
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL) + 32LL);
  *(_QWORD *)(v4 + 304) = "defaultEduThemeApplied";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v4 + 32) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL) + 14);
  if ( (v6 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_BYTE *)(a2 + 8) = v6 == 10;
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(v7 + 344);
  result = v8 - 40;
  *(_QWORD *)(v7 + 344) = v8 - 40;
  ++*(_QWORD *)(v8 - 56);
  return result;
}
