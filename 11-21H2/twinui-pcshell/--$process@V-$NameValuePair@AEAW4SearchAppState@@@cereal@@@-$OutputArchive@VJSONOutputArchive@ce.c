/*
 * XREFs of ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A664
 * Callers:
 *     ??$?RV?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V01@V?$NameValuePair@AEA_N@1@V21@V21@V21@V21@V21@V21@V21@V21@V21@V21@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$NameValuePair@AEAI@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@0$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x180198E58 (--$-RV-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V01@V-$NameValuePair@AEA_N@1@V21@V.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@11100@Z @ 0x18019A984 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAW4SearchAppState@@.c)
 * Callees:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x18015C08C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 */

char *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 408) = *(_QWORD *)a2;
  v3 = *(_QWORD *)(v2 + 32);
  v5 = **(_DWORD **)(a2 + 8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL), &v5);
}
