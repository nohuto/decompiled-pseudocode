/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_ToggleDashboardExtension@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805BC568
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805BE2F0 (-deserialize@-$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@EEAAXAEAVJSONInput.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1803519C4 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180352198 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall _tip_ToggleDashboardExtension::serialize<cereal::JSONInputArchive>(_BYTE *a1, __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rdi
  __int16 v6; // cx
  __int64 v7; // rax
  cereal::JSONInputArchive *v8; // rdi
  __int16 v9; // cx
  __int64 v10; // rax
  cereal::JSONInputArchive *v11; // rdi
  __int16 v12; // cx
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "isDashboardExtensionCallSuccessful";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v4 + 32) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL) + 14);
  if ( (v6 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  a1[8] = v6 == 10;
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v7 + 304) = "isDashboardExtensionPresent";
  v8 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v7 + 32) + 32LL);
  cereal::JSONInputArchive::search(v8);
  v9 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v8 + 43) - 40LL) + 14);
  if ( (v9 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  a1[9] = v9 == 10;
  ++*(_QWORD *)(*((_QWORD *)v8 + 43) - 16LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v10 + 304) = "isExtensionCallError";
  v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v10 + 32) + 32LL);
  cereal::JSONInputArchive::search(v11);
  v12 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL) + 14);
  if ( (v12 & 8) == 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  a1[10] = v12 == 10;
  result = *((_QWORD *)v11 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
