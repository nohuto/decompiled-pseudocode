/*
 * XREFs of ??$process@V?$NameValuePair@AEAJ@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18013698C
 * Callers:
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAK@1@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_N@1@V41@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@3$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4@Z @ 0x1801C188C (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAK@1@V-$NameValuePair@AEAJ@1@V-$NameValue.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_K@2@V42@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C3314 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V-$NameValuePair@AEA_K@2@V42@V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 408) = *a2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v2 + 32), a2[1]);
}
