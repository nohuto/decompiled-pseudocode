/*
 * XREFs of ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V01@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@V?$NameValuePair@AEA_N@1@V31@V?$NameValuePair@AEAH@1@V41@V31@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAH@1@320@Z @ 0x180278EE0
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18070D900 (--$serialize@VJSONInputArchive@cereal@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVJSONInputArchive@ce.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1801AE66C (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEAH@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@@Z @ 0x1804150BC (--$process@V-$NameValuePair@AEAH@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1804157DC (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@ce.c)
 *     ??$process@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18070D040 (--$process@V-$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@cereal@@@-$InputArc.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18070D220 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$c_ea_18070D220.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  ((void (*)(void))cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>)();
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(a1, a3);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>>(
    a1,
    a4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a5);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a6);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>>(a1, a7);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>>(a1, a8);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
    a1,
    a9,
    a10);
  return *(_QWORD *)(a1 + 32);
}
