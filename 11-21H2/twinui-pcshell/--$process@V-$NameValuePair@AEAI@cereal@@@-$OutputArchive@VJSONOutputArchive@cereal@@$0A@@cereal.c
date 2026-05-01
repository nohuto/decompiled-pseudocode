/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18034A600
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$NameValuePair@AEAI@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A8B0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V-$NameValuePair@AEAV-$basic_strin.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 408) = *(_QWORD *)a2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
           *(_QWORD *)(v2 + 32),
           *(_DWORD **)(a2 + 8));
}
