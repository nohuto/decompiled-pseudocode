/*
 * XREFs of ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V12@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180702D74
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1807050B4 (--$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputAr.c)
 * Callees:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1B60 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?saveValue@JSONOutputArchive@cereal@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18041ADA4 (-saveValue@JSONOutputArchive@cereal@@QEAAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r11
  __int64 v10; // rbx
  void **v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rbx
  void **v15; // rdi

  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  v10 = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v9 + 408) = *a2;
  v11 = (void **)a2[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v10 + 32));
  cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL), v11);
  v12 = *(_QWORD *)(a1 + 32);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 32LL);
  v14 = *(_QWORD *)(v13 + 32);
  *(_QWORD *)(v13 + 408) = *a3;
  v15 = (void **)a3[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v14 + 32));
  cereal::JSONOutputArchive::saveValue(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL), v15);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v12 + 32),
           a4,
           a5,
           a6);
}
