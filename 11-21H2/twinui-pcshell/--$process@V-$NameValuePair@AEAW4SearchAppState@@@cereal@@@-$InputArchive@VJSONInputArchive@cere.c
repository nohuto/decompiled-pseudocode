/*
 * XREFs of ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A620
 * Callers:
 *     ??$process@V?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$NameValuePair@AEAI@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A6A8 (--$process@V-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V-$NameValuePair@AEA_N@2@V32.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18019AA60 (--$serialize@VJSONInputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONInputArchive.c)
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18019AC74 (--$serialize@VJSONInputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONInputArchive@cereal@@@.c)
 * Callees:
 *     ??$process@AEAH@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z @ 0x180349FC8 (--$process@AEAH@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAXAEAH@Z.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned int *v3; // rbx
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 304) = *a2;
  v3 = (unsigned int *)a2[1];
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<int &>(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL), &v5);
  result = v5;
  *v3 = v5;
  return result;
}
