/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@KV?$allocator@K@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1806CA85C
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$NameValuePair@AEAJ@2@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$NameValuePair@AEAJ@1@0@Z @ 0x1806CAFEC (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAV-$vector@KV-$allocator@K@std@.c)
 * Callees:
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x180163058 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x180163094 (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?GetUint@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAIXZ @ 0x180163690 (-GetUint@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidj.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1806CA15C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@KV-$allocator@K@std@@@std@@AEAAX_KAEBU_Val.c)
 */

char *__fastcall cereal::load<cereal::JSONInputArchive,unsigned long,std::allocator<unsigned long>>(
        __int64 a1,
        const void **a2)
{
  __int64 v4; // rcx
  char *result; // rax
  char *v6; // rbp
  char *v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  size_t v10; // rbx
  char *v11; // rbp
  char *i; // rdi
  cereal::JSONInputArchive *v13; // rbx
  _BYTE *v14; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( *(_QWORD *)(v4 + 344) - *(_QWORD *)(v4 + 336) == 40LL )
  {
    result = (char *)(v4 + 360);
    if ( *(_WORD *)(v4 + 374) != 4 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  else
  {
    result = (char *)cereal::JSONInputArchive::Iterator::value(*(_QWORD *)(v4 + 344) - 80LL);
    if ( *((_WORD *)result + 7) != 4 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
  }
  v6 = (char *)a2[1];
  v7 = (char *)*a2;
  v8 = *(unsigned int *)result;
  v9 = (v6 - (_BYTE *)*a2) >> 2;
  if ( v8 < v9 )
  {
    result = &v7[4 * v8];
LABEL_12:
    a2[1] = result;
    goto LABEL_13;
  }
  if ( v8 > v9 )
  {
    if ( v8 <= ((_BYTE *)a2[2] - v7) >> 2 )
    {
      v10 = 4 * (v8 - v9);
      memset_0((void *)a2[1], 0, v10);
      result = &v6[v10];
      goto LABEL_12;
    }
    result = (char *)std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>(a2, v8);
  }
LABEL_13:
  v11 = (char *)a2[1];
  for ( i = (char *)*a2; i != v11; i += 4 )
  {
    v13 = *(cereal::JSONInputArchive **)(*(_QWORD *)(a1 + 32) + 32LL);
    cereal::JSONInputArchive::search(v13);
    v14 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v13 + 43) - 40LL);
    *(_DWORD *)i = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetUint(v14);
    result = (char *)*((_QWORD *)v13 + 43);
    ++*((_QWORD *)result - 2);
  }
  return result;
}
