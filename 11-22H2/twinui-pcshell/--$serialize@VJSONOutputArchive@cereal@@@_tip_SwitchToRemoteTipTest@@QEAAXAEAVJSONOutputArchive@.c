/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_SwitchToRemoteTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18070DCB4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18071CAF0 (-serialize@-$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@EEAAXAEAVJSONOutputArch.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V01@V?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@V?$NameValuePair@AEA_N@1@V31@V?$NameValuePair@AEAH@1@V41@V31@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEAW4CloudPCState@Shell@Internal@Windows@winrt@@@1@$$QEAV?$NameValuePair@AEA_N@1@2$$QEAV?$NameValuePair@AEAH@1@320@Z @ 0x180278F74 (--$-RV-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s_ea_180278F74.c)
 */

__int64 __fastcall _tip_SwitchToRemoteTipTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v4[2]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v5[2]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v6[2]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v7[2]; // [rsp+90h] [rbp+7h] BYREF
  _QWORD v8[2]; // [rsp+A0h] [rbp+17h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp+27h] BYREF
  _QWORD v10[2]; // [rsp+C0h] [rbp+37h] BYREF
  _QWORD v11[2]; // [rsp+D0h] [rbp+47h] BYREF

  v3[0] = "correlationId";
  v3[1] = a1 + 96;
  v4[0] = "isLocalPC";
  v4[1] = a1 + 88;
  v5[0] = "hostProcessCount";
  v5[1] = a1 + 84;
  v6[0] = "providerWindowCount";
  v6[1] = a1 + 80;
  v7[0] = "switchDelivered";
  v7[1] = a1 + 77;
  v8[0] = "remoteSystemFound";
  v8[1] = a1 + 76;
  v9[0] = "state";
  v9[1] = a1 + 72;
  v10[0] = "remoteDesktopId";
  v10[1] = a1 + 40;
  v11[0] = "systemId";
  v11[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum winrt::Windows::Internal::Shell::CloudPCState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           v8,
           v7,
           v6,
           v5,
           (__int64)v4,
           (__int64)v3);
}
