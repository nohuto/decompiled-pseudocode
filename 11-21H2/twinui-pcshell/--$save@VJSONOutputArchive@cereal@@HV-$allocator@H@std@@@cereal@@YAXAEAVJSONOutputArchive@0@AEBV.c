/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C33C4
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_K@2@V42@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C3314 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V-$NameValuePair@AEA_K@2@V42@V.c)
 * Callees:
 *     ??$process@AEBH@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBH@Z @ 0x1801C318C (--$process@AEBH@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEBH@Z.c)
 */

char *__fastcall cereal::save<cereal::JSONOutputArchive,int,std::allocator<int>>(__int64 a1, int **a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  char *result; // rax
  int *v7; // rsi
  int *i; // rbx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v4 = v3 + 456;
  v5 = *(_QWORD *)(v3 + 480) + *(_QWORD *)(v3 + 488) - 1LL;
  result = *(char **)(*(_QWORD *)(v4 + 8) + 8 * ((*(_QWORD *)(v4 + 16) - 1LL) & (v5 >> 2)));
  *(_DWORD *)&result[4 * (v5 & 3)] = 2;
  v7 = a2[1];
  for ( i = *a2; i != v7; ++i )
    result = cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int const &>(*(_QWORD *)(a1 + 32), i);
  return result;
}
