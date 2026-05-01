/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18034AA88
 * Callers:
 *     ??$process@V?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$NameValuePair@AEAI@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A6A8 (--$process@V-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V-$NameValuePair@AEA_N@2@V32.c)
 *     ??$process@V?$NameValuePair@AEAK@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_N@2@V42@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3@Z @ 0x1801C3248 (--$process@V-$NameValuePair@AEAK@cereal@@V-$NameValuePair@AEAJ@2@V-$NameValuePair@AEA_N@2@V42@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  *(_QWORD *)(v2 + 304) = *a2;
  return cereal::JSONInputArchive::loadValue(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL), a2[1]);
}
