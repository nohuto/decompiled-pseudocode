/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_BootToCloudPCTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180704C14
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180707CB0 (-deserialize@-$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@EEAAXAEAVJSONInputArchive.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V32@V12@V?$NameValuePair@AEA_K@2@V12@V?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@010$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAW4BootModeType@CloudPCHelpers@@@1@@Z @ 0x180703400 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V-$NameVa_ea_180703400.c)
 */

__int64 __fastcall _tip_BootToCloudPCTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v4[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v5[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v6[2]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v11[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v12[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v13[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v14[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v15[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v16[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v17[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v18[2]; // [rsp+180h] [rbp+70h] BYREF

  v3[0] = "modeType";
  v3[1] = a1 + 88;
  v4[0] = "networkFailFastTriggered";
  v4[1] = a1 + 19;
  v5[0] = "maxConnectionTimeoutInMinutes";
  v5[1] = a1 + 96;
  v6[0] = "providerAppNotAvailable";
  v6[1] = a1 + 18;
  v7[0] = "correlationId";
  v7[1] = a1 + 56;
  v8[0] = "userDismissedConnectScreen";
  v8[1] = a1 + 17;
  v9[0] = "infoText";
  v9[1] = a1 + 24;
  v10[0] = "timeoutOccurred";
  v10[1] = a1 + 16;
  v11[0] = "cloudpcExited";
  v11[1] = a1 + 15;
  v12[0] = "errorTransitionScreenTriggered";
  v12[1] = a1 + 14;
  v13[0] = "clientDisconnected";
  v13[1] = a1 + 13;
  v14[0] = "shellappruntimeRestarted";
  v14[1] = a1 + 12;
  v15[0] = "shelldesktopswitcheventFailed";
  v15[1] = a1 + 11;
  v16[0] = "providerAppAlreadyLaunched";
  v16[1] = a1 + 10;
  v17[0] = "providerAppNotLaunched";
  v17[1] = a1 + 9;
  v18[0] = "cloudpcSuccessfullyConnected";
  v18[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum CloudPCHelpers::BootModeType &>>(
           a2,
           v18,
           (int)v17,
           (int)v16,
           (__int64)v15,
           (__int64)v14,
           (__int64)v13,
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
