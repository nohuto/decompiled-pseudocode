/*
 * XREFs of ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEA_N@1@V21@V21@V21@V21@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEA_N@1@11110@Z @ 0x1802790A8
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18070DBD4 (--$serialize@VJSONOutputArchive@cereal@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVJSONOutpu.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18017E1EC (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1802792A0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V-$NameValuePair@AEAV-$basic__ea_1802792A0.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180415808 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180415808.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v12; // rbx

  v8 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(*(_QWORD *)(v8 + 32));
  v12 = *(_QWORD *)(v8 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v12 + 32), a3);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
    *(_QWORD *)(v12 + 32),
    a4,
    a5,
    a6,
    a7,
    a8);
  return *(_QWORD *)(a1 + 32);
}
