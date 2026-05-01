/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x180162F0C (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804147EC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStoredFailureInfo@wil@@PEAV12@_KAEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1804149EC (--$_Uninitialized_value_construct_n@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAPEAVStore.c)
 *     ??$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@@Z @ 0x180414AA8 (--$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@.c)
 */

unsigned int *__fastcall cereal::load<cereal::JSONInputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  unsigned int *result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 i; // rbx
  wil::StoredFailureInfo *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(_QWORD *)(v4 + 344) - *(_QWORD *)(v4 + 336) == 40LL )
  {
    result = (unsigned int *)(v4 + 360);
    if ( *(_WORD *)(v4 + 374) != 4 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  else
  {
    result = (unsigned int *)cereal::JSONInputArchive::Iterator::value(*(_QWORD *)(v4 + 344) - 80LL);
    if ( *((_WORD *)result + 7) != 4 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  v6 = *result;
  v7 = 0xCF3CF3CF3CF3CF3DuLL * ((a2[1] - *a2) >> 3);
  if ( v6 < v7 )
  {
    v10 = (wil::StoredFailureInfo *)(*a2 + 168 * v6);
    result = (unsigned int *)std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v10);
    a2[1] = (__int64)v10;
  }
  else if ( v6 > v7 )
  {
    if ( v6 <= 0xCF3CF3CF3CF3CF3DuLL * ((a2[2] - *a2) >> 3) )
    {
      result = (unsigned int *)std::_Uninitialized_value_construct_n<std::allocator<wil::StoredFailureInfo>>((wil::StoredFailureInfo *)a2[1]);
      a2[1] = (__int64)result;
    }
    else
    {
      result = (unsigned int *)std::vector<wil::StoredFailureInfo>::_Resize_reallocate<std::_Value_init_tag>(a2);
    }
  }
  v8 = a2[1];
  for ( i = *a2; i != v8; i += 168LL )
  {
    cereal::JSONInputArchive::startNode(*(cereal::JSONInputArchive **)(a1 + 32));
    wil::load<cereal::JSONInputArchive>(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL), i);
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(_QWORD *)(v11 + 344);
    result = (unsigned int *)(v12 - 40);
    *(_QWORD *)(v11 + 344) = v12 - 40;
    ++*(_QWORD *)(v12 - 56);
  }
  return result;
}
