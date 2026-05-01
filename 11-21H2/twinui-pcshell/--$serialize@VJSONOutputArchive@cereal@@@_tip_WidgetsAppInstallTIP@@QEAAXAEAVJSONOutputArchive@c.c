/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_WidgetsAppInstallTIP@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1801C3550
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_WidgetsAppInstallTIP@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_WidgetsAppInstallTIP@@@1@@Z @ 0x1801C181C (--$-RV-$NameValuePair@AEAU_tip_WidgetsAppInstallTIP@@@cereal@@@-$OutputArchive@VJSONOutputArchiv.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_K@cereal@@V?$NameValuePair@AEAK@1@V?$NameValuePair@AEAJ@1@V?$NameValuePair@AEA_N@1@V41@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V51@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_K@1@$$QEAV?$NameValuePair@AEAK@1@$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEA_N@1@3$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@4@Z @ 0x1801C188C (--$-RV-$NameValuePair@AEA_K@cereal@@V-$NameValuePair@AEAK@1@V-$NameValuePair@AEAJ@1@V-$NameValue.c)
 */

__int64 __fastcall _tip_WidgetsAppInstallTIP::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "finalVersionString";
  v3[1] = a1 + 40;
  v4[0] = "initialVersionString";
  v4[1] = a1 + 8;
  v5[0] = "packageInstallStarted";
  v5[1] = a1 + 89;
  v6[0] = "packageInstallRestarted";
  v6[1] = a1 + 88;
  v7[0] = "result";
  v7[1] = a1 + 84;
  v8[0] = "installState";
  v8[1] = a1 + 80;
  v9[0] = "installDurationInMilliseconds";
  v9[1] = a1 + 72;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           (__int64)v9,
           v8,
           v7,
           v6,
           v5,
           v4,
           v3);
}
