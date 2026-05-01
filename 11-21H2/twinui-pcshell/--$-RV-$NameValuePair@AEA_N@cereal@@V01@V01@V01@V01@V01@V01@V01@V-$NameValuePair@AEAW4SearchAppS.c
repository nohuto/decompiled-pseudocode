/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0000000$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@11100@Z @ 0x180198F74
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18019B058 (--$serialize@VJSONOutputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONOutputArchive@cereal@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180136914 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAW4SearchAppState@@@2@V32@V32@V32@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@11100@Z @ 0x18019A984 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAW4SearchAppState@@.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 v15; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx

  v15 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v15 + 32), a2);
  v19 = *(_QWORD *)(v15 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v19 + 32), a3);
  v20 = *(_QWORD *)(v19 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v20 + 32), a4);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
    *(_QWORD *)(v20 + 32),
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15);
  return *(_QWORD *)(a1 + 32);
}
