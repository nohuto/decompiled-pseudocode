/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805AE2B8
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1805B18F0 (-deserialize@-$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXAEAVJSONInputArchiv.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000000@Z @ 0x18034B0C0 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@-$InputArchive@VJSONInputArch.c)
 */

__int64 __fastcall _tip_SnapFlyoutShowTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "threadCreate";
  v3[1] = a1 + 15;
  v4[0] = "noMonitorInfo";
  v4[1] = a1 + 13;
  v5[0] = "controlFailedToLoad";
  v5[1] = a1 + 11;
  v6[0] = "threadFailedToStart";
  v6[1] = a1 + 12;
  v7[0] = "reused";
  v7[1] = a1 + 14;
  v8[0] = "shown";
  v8[1] = a1 + 8;
  v9[0] = "canceled";
  v9[1] = a1 + 9;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v9,
           v8,
           v7,
           v6,
           v5,
           v4,
           v3);
}
