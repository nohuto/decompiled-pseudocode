/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801C3460
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801CF1C0 (-deserialize@-$test_merged_data@U_tip_WidgetsAppInstallTIP@@@details@tip@@EEAAXAEAVJSONInputArch.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAK@cereal@@V?$NameValuePair@AEAJ@2@V?$NameValuePair@AEA_N@2@V42@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V52@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@3@Z @ 0x1801C3248 (--$process@V-$NameValuePair@AEAK@cereal@@V-$NameValuePair@AEAJ@2@V-$NameValuePair@AEA_N@2@V42@V-.c)
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@@Z @ 0x1805BC218 (--$process@V-$NameValuePair@AEA_K@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 */

__int64 __fastcall _tip_WidgetsAppInstallTIP::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v4[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v5[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v6[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v8[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v9[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v10[2]; // [rsp+A0h] [rbp+47h] BYREF

  v5[0] = "finalVersionString";
  v5[1] = a1 + 40;
  v6[0] = "initialVersionString";
  v6[1] = a1 + 8;
  v7[0] = "packageInstallStarted";
  v7[1] = a1 + 89;
  v8[0] = "packageInstallRestarted";
  v8[1] = a1 + 88;
  v9[0] = "result";
  v9[1] = a1 + 84;
  v10[0] = "installState";
  v10[1] = a1 + 80;
  v4[0] = "installDurationInMilliseconds";
  v4[1] = a1 + 72;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>>(a2, v4);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
