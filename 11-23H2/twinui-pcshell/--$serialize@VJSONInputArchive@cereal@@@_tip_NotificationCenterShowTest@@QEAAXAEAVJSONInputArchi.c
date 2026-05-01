/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_NotificationCenterShowTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1804164F0
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18041A880 (-deserialize@-$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@EEAAXAEAVJSONInp.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAH@cereal@@V12@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAH@1@0$$QEAV?$NameValuePair@AEA_N@1@111111111@Z @ 0x180415124 (--$process@V-$NameValuePair@AEAH@cereal@@V12@V-$NameValuePair@AEA_N@2@V32@V32@V32@V_ea_180415124.c)
 */

__int64 __fastcall _tip_NotificationCenterShowTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v4[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v5[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v6[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v12[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v13[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v14[2]; // [rsp+120h] [rbp+20h] BYREF

  v3[0] = "viewVisible";
  v3[1] = a1 + 25;
  v4[0] = "viewRendered";
  v4[1] = a1 + 24;
  v5[0] = "viewRenderedEmpty";
  v5[1] = a1 + 23;
  v6[0] = "viewCold";
  v6[1] = a1 + 22;
  v7[0] = "appCold";
  v7[1] = a1 + 21;
  v8[0] = "vsDeploy";
  v8[1] = a1 + 20;
  v9[0] = "canceledShellNotReady";
  v9[1] = a1 + 19;
  v10[0] = "canceledByPolicy";
  v10[1] = a1 + 18;
  v11[0] = "canceledByReinvoke";
  v11[1] = a1 + 17;
  v12[0] = "canceledByDismiss";
  v12[1] = a1 + 16;
  v13[0] = "invokeMethod";
  v13[1] = a1 + 12;
  v14[0] = "inputType";
  v14[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<int &>,cereal::NameValuePair<int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v14,
           (int)v13,
           (int)v12,
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
