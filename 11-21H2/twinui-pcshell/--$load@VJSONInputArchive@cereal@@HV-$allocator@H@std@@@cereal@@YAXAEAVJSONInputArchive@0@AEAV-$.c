/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C2E88
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C1954 (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@1@V-$NameValuePair@AEA_K@1@V31@V-$Name.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801C21B8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$?RAEAH@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@AEAH@Z @ 0x180345BEC (--$-RAEAH@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@AEAH@.c)
 *     ??$?RV?$SizeTag@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$SizeTag@AEA_K@1@@Z @ 0x180345C54 (--$-RV-$SizeTag@AEA_K@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSO.c)
 */

__int64 __fastcall cereal::load<cereal::JSONInputArchive,int,std::allocator<int>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  size_t v8; // rbx
  __int64 i; // rbx
  unsigned __int64 *v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = &v11;
  result = cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::SizeTag<unsigned __int64 &>>(a1, &v10);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)a2;
  v7 = (v5 - *(_QWORD *)a2) >> 2;
  if ( v11 < v7 )
  {
    v5 = v6 + 4 * v11;
LABEL_7:
    *(_QWORD *)(a2 + 8) = v5;
    goto LABEL_8;
  }
  if ( v11 > v7 )
  {
    if ( v11 <= (*(_QWORD *)(a2 + 16) - v6) >> 2 )
    {
      v8 = 4 * (v11 - v7);
      result = (__int64)memset_0(*(void **)(a2 + 8), 0, v8);
      v5 += v8;
      goto LABEL_7;
    }
    result = std::vector<int>::_Resize_reallocate<std::_Value_init_tag>(a2, v11);
    v5 = *(_QWORD *)(a2 + 8);
  }
LABEL_8:
  for ( i = *(_QWORD *)a2; i != v5; i += 4LL )
    result = cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<int &>(a1, i);
  return result;
}
