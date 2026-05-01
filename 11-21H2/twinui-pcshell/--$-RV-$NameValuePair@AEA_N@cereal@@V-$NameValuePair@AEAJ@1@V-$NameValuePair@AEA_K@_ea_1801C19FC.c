/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_K@1@V31@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C19FC
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_AppPrelaunch@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180173054 (--$serialize@VJSONOutputArchive@cereal@@@_tip_AppPrelaunch@@QEAAXAEAVJSONOutputArchive@cereal@@@.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_K@2@V42@V?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_K@1@2$$QEAV?$NameValuePair@AEAV?$vector@HV?$allocator@H@std@@@std@@@1@@Z @ 0x1801C3314 (--$process@V-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAJ@2@V-$NameValuePair@AEA_K@2@V42@V.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::vector<int> &>>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::vector<int> &>>(
    *(_QWORD *)(a1 + 32),
    a2,
    a3,
    a4,
    a5,
    a6);
  return *(_QWORD *)(a1 + 32);
}
