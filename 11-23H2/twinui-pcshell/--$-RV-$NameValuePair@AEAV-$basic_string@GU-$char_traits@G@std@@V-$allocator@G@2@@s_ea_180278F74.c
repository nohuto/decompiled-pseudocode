/*
 * XREFs of ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V01@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@V?$NameValuePair@AEA_N@1@V31@V?$NameValuePair@AEAH@1@V41@V31@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAH@1@320@Z @ 0x180278F74
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18070DCB4 (--$serialize@VJSONOutputArchive@cereal@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVJSONOutputArchive@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18017E1EC (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEAH@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x1801BB8B4 (--$process@V-$NameValuePair@AEAH@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x180415808 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180415808.c)
 *     ??$process@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18070D0B0 (--$process@V-$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@cereal@@@-$OutputAr.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18070D2F0 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$c_ea_18070D2F0.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx

  v10 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(*(_QWORD *)(v10 + 32));
  v13 = *(_QWORD *)(v10 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(*(_QWORD *)(v13 + 32));
  v14 = *(_QWORD *)(v13 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
    *(_QWORD *)(v14 + 32),
    a4);
  v15 = *(_QWORD *)(v14 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v15 + 32), a5);
  v16 = *(_QWORD *)(v15 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v16 + 32), a6);
  v17 = *(_QWORD *)(v16 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<int &>>(*(_QWORD *)(v17 + 32), a7);
  v18 = *(_QWORD *)(v17 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<int &>>(*(_QWORD *)(v18 + 32), a8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
    *(_QWORD *)(v18 + 32),
    a9,
    a10);
  return *(_QWORD *)(a1 + 32);
}
