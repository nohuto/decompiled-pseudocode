/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V01@V21@V21@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1011@Z @ 0x18027AA34
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18071FC80 (--$serialize@VJSONInputArchive@cereal@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVJSONInputA.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x1801AE66C (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1804157DC (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@ce.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x18071FA74 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$c_ea_18071FA74.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a2);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(a1, a3);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<std::wstring &>>(a1, a4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
    a1,
    a5,
    a6,
    a7);
  return *(_QWORD *)(a1 + 32);
}
