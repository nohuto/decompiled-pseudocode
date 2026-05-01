/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0000000@Z @ 0x1803A0824
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_MiniSearchActivationTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1803A0CA8 (--$serialize@VJSONOutputArchive@cereal@@@_tip_MiniSearchActivationTest@@QEAAXAEAVJSONOutputArchi.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_SwipeDashboard@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805BC6FC (--$serialize@VJSONOutputArchive@cereal@@@_tip_SwipeDashboard@@QEAAXAEAVJSONOutputArchive@cereal@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000000@Z @ 0x18034B398 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@@-$OutputArchive@VJSONOutp.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    *(_QWORD *)(a1 + 32),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return *(_QWORD *)(a1 + 32);
}
