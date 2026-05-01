/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_RemoteSessionOnStateChangedTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18071FD44
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180724070 (-deserialize@-$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@EEAAXAEA.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V31@V01@V01@V01@V01@V31@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1200002@Z @ 0x18027A8B0 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V-$NameValuePair@AEAW4CloudPCState@Shell@Internal@Window.c)
 */

__int64 __fastcall _tip_RemoteSessionOnStateChangedTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v4[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v5[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v6[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v8[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v13[2]; // [rsp+100h] [rbp+0h] BYREF

  v3[0] = "correlationId";
  v3[1] = a1 + 88;
  v4[0] = "isAnyProviderActive";
  v4[1] = a1 + 85;
  v5[0] = "transitionScreenAlreadyShown";
  v5[1] = a1 + 83;
  v6[0] = "transitionScreenAlreadyNotShowing";
  v6[1] = a1 + 84;
  v7[0] = "systemIdNotFoundInRSWMMap";
  v7[1] = a1 + 80;
  v8[0] = "systemId";
  v8[1] = a1 + 8;
  v9[0] = "state";
  v9[1] = a1 + 72;
  v10[0] = "remoteDesktopId";
  v10[1] = a1 + 40;
  v11[0] = "oldState";
  v11[1] = a1 + 76;
  v12[0] = "handleConnectionStateChangedDidNothing";
  v12[1] = a1 + 81;
  v13[0] = "failedToGetViewForHwnd";
  v13[1] = a1 + 82;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           v13,
           v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           v7,
           v6,
           v5,
           (__int64)v4,
           (__int64)v3);
}
