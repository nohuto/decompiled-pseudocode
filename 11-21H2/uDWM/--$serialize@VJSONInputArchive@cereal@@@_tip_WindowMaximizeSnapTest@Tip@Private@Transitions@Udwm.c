/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F7204
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F7740 (-deserialize@-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@deta.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1800F3FD8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x1800F4128 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F67F0 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x1800F6E98 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  int Int; // eax
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rbx
  _BYTE *v10; // rax
  __int64 v11; // rax
  cereal::JSONInputArchive *v12; // rbx
  _BYTE *v13; // rax
  __int64 v14; // rax
  cereal::JSONInputArchive *v15; // rbx
  __int16 v16; // cx
  __int64 result; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "transitionType";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  Int = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v6);
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  *(_DWORD *)(a1 + 8) = Int;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = "preTransitionCount";
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v8 + 32) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL);
  *(_DWORD *)(a1 + 12) = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v10);
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = "postTransitionCount";
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v11 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL);
  *(_DWORD *)(a1 + 16) = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v13);
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = "stateCompleted";
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v14 + 32) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL) + 14);
  if ( (v16 & 8) == 0 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 20) = v16 == 10;
  result = *((_QWORD *)v15 + 43);
  ++*(_QWORD *)(result - 16);
  return result;
}
