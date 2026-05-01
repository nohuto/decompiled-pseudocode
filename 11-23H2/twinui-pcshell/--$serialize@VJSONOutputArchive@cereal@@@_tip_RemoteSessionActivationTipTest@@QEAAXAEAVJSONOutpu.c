/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_RemoteSessionActivationTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18071FE98
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180724BD0 (-serialize@-$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@EEAAXAEAVJSONO.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V01@V21@V21@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1011@Z @ 0x18027AA9C (--$-RV-$NameValuePair@AEA_N@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_tr_ea_18027AA9C.c)
 */

__int64 __fastcall _tip_RemoteSessionActivationTipTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+27h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+37h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+47h] BYREF

  v3[0] = "correlationId";
  v3[1] = a1 + 112;
  v4[0] = "systemId";
  v4[1] = a1 + 48;
  v5[0] = "registrationDataNotFound";
  v5[1] = a1 + 10;
  v6[0] = "remoteDesktopId";
  v6[1] = a1 + 80;
  v7[0] = "packageFamilyName";
  v7[1] = a1 + 16;
  v8[0] = "hasExistingActivatedRemoteSession";
  v8[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
