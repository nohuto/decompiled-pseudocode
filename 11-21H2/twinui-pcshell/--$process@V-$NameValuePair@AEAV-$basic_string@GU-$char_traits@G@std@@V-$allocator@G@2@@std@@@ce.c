/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180175AE8
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$NameValuePair@AEAI@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A8B0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V-$NameValuePair@AEAV-$basic_strin.c)
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAK@1@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_N@1@V41@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@3$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4@Z @ 0x1801C188C (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAK@1@V-$NameValuePair@AEAJ@1@V-$NameValue.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

void __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  _QWORD *v4; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  v3 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 408) = *a2;
  v4 = (_QWORD *)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v3 + 32));
  cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL), v4);
}
