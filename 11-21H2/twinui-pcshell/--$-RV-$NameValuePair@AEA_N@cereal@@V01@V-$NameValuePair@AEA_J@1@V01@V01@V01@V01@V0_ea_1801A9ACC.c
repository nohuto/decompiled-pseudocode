/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEA_J@1@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEA_J@1@000000$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801A9ACC
 * Callers:
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18044A35C (--$serialize@VJSONOutputArchive@cereal@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAV.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180136914 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cerea.c)
 *     ??$process@V?$NameValuePair@AEA_J@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V?$NameValuePair@AEAJ@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_J@1@$$QEAV?$NameValuePair@AEA_N@1@11111$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801AA054 (--$process@V-$NameValuePair@AEA_J@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V32@V32@_ea_1801AA054.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<__int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbx
  __int64 v15; // rbx

  v11 = *(_QWORD *)(a1 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v11 + 32), a2);
  v15 = *(_QWORD *)(v11 + 32);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>>(*(_QWORD *)(v15 + 32), a3);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<__int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
    *(_QWORD *)(v15 + 32),
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11);
  return *(_QWORD *)(a1 + 32);
}
