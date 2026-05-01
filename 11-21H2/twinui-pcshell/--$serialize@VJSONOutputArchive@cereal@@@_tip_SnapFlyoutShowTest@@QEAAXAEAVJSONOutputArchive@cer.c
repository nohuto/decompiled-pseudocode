/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805AE398
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1805B2470 (-serialize@-$test_merged_data@U_tip_SnapFlyoutShowTest@@@details@tip@@EEAAXAEAVJSONOutputArchive.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000000@Z @ 0x18034B1B8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@@-$OutputArchive@VJSONOutputAr.c)
 */

__int64 __fastcall _tip_SnapFlyoutShowTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v6[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v7[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v8[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v9[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v10[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v11[2]; // [rsp+A0h] [rbp+47h] BYREF

  v5[0] = "threadCreate";
  v5[1] = a1 + 15;
  v6[0] = "noMonitorInfo";
  v6[1] = a1 + 13;
  v7[0] = "controlFailedToLoad";
  v7[1] = a1 + 11;
  v8[0] = "threadFailedToStart";
  v8[1] = a1 + 12;
  v9[0] = "reused";
  v9[1] = a1 + 14;
  v10[0] = "shown";
  v10[1] = a1 + 8;
  v11[0] = "canceled";
  v2 = a1 + 9;
  v3 = *(_QWORD *)(a2 + 32);
  v11[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           v3,
           v11,
           v10,
           v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
