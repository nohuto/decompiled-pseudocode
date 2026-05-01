/*
 * XREFs of ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAK@1@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_N@1@V41@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@3$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4@Z @ 0x1801C188C
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1801C3550 (--$serialize@VJSONOutputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONOutputArchive@c.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180136914 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x18013698C (--$process@V-$NameValuePair@AEAJ@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180175AE8 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@ce.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@@Z @ 0x18017D770 (--$process@V-$NameValuePair@AEA_K@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@AEAK@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z @ 0x1801C30E0 (--$process@AEAK@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAK@Z.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx

  v8 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(
    *(_QWORD *)(v8 + 32),
    a2);
  v12 = *(_QWORD *)(v8 + 32);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v13 + 408) = *a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned long &>(*(_QWORD *)(v13 + 32), a3[1]);
  v14 = *(_QWORD *)(v12 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>>(*(_QWORD *)(v14 + 32), a4);
  v15 = *(_QWORD *)(v14 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v15 + 32), a5);
  v16 = *(_QWORD *)(v15 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v16 + 32), a6);
  v17 = *(_QWORD *)(v16 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(
    *(_QWORD *)(v17 + 32),
    a7);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(
    *(_QWORD *)(v17 + 32),
    a8);
  return *(_QWORD *)(a1 + 32);
}
