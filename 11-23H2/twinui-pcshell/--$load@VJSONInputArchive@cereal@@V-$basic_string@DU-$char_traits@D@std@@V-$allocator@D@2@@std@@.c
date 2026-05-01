/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1801B21BC
 * Callers:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x180163118 (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18018AC78 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804146DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEAV10@_KAEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1804149A8 (--$_Uninitialized_value_construct_n@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 */

unsigned int *__fastcall cereal::load<cereal::JSONInputArchive,std::string,std::allocator<std::string>>(
        __int64 a1,
        void ***a2)
{
  __int64 v4; // rcx
  unsigned int *result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  void **v8; // rsi
  void **i; // rbx
  __int64 v10; // rbx
  cereal::JSONInputArchive *v11; // rdi
  __int64 v12; // rax
  _BYTE *String; // rax
  size_t v14; // r8
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
  v7 = ((char *)a2[1] - (char *)*a2) >> 5;
  if ( v6 < v7 )
  {
    v10 = (__int64)&(*a2)[4 * v6];
    result = (unsigned int *)std::_Destroy_range<std::allocator<std::string>>(v10, a2[1]);
    a2[1] = (void **)v10;
  }
  else if ( v6 > v7 )
  {
    if ( v6 <= ((char *)a2[2] - (char *)*a2) >> 5 )
    {
      result = (unsigned int *)std::_Uninitialized_value_construct_n<std::allocator<std::string>>(a2[1], v6 - v7);
      a2[1] = (void **)result;
    }
    else
    {
      result = (unsigned int *)std::vector<std::string>::_Resize_reallocate<std::_Value_init_tag>(a2, v6);
    }
  }
  v8 = a2[1];
  for ( i = *a2; i != v8; i += 4 )
  {
    v11 = *(cereal::JSONInputArchive **)(*(_QWORD *)(a1 + 32) + 32LL);
    cereal::JSONInputArchive::search(v11);
    v12 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v11 + 43) - 40LL);
    String = (_BYTE *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v12);
    v14 = -1LL;
    do
      ++v14;
    while ( String[v14] );
    std::string::assign(i, String, v14);
    result = (unsigned int *)*((_QWORD *)v11 + 43);
    ++*((_QWORD *)result - 2);
  }
  return result;
}
