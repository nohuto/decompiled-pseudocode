/*
 * XREFs of ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEA_J@1@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEA_J@1@000000$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801A9A2C
 * Callers:
 *     ??$serialize@VJSONInputArchive@cereal@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18044A228 (--$serialize@VJSONInputArchive@cereal@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVJ.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_J@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V?$NameValuePair@AEAJ@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_J@1@$$QEAV?$NameValuePair@AEA_N@1@11111$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801A9F48 (--$process@V-$NameValuePair@AEA_J@cereal@@V-$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V-$NameVa.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18034AAB4 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 */

__int64 __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<__int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a2);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a1, a3);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<__int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
    a1,
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
