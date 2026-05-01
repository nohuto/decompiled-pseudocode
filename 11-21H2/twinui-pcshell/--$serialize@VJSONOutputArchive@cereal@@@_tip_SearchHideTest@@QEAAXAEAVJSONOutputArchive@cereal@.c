/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18019B058
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_SearchHideTest@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SearchHideTest@@@1@@Z @ 0x180198DE8 (--$-RV-$NameValuePair@AEAU_tip_SearchHideTest@@@cereal@@@-$OutputArchive@VJSONOutputArchive@cere.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAW4SearchAppState@@@1@V21@V21@V21@V01@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0000000$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@11100@Z @ 0x180198F74 (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@V-$NameValuePair@AEAW4SearchAppS.c)
 */

__int64 __fastcall _tip_SearchHideTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v4[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v5[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v6[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v11[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v12[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v13[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v14[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v15[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v16[2]; // [rsp+150h] [rbp+50h] BYREF

  v3[0] = "navigation_level_active_during_suspension";
  v3[1] = a1 + 33;
  v4[0] = "view_visible_during_suspension";
  v4[1] = a1 + 32;
  v5[0] = "state_during_last_resort_suspension_timer";
  v5[1] = a1 + 28;
  v6[0] = "state_during_view_consolidation";
  v6[1] = a1 + 24;
  v7[0] = "state_during_hide_request_timer";
  v7[1] = a1 + 20;
  v8[0] = "initial_state";
  v8[1] = a1 + 16;
  v9[0] = "already_hidden";
  v9[1] = a1 + 15;
  v10[0] = "view_destroyed";
  v10[1] = a1 + 14;
  v11[0] = "activated_while_hiding";
  v11[1] = a1 + 13;
  v12[0] = "suspend_timer_expired";
  v12[1] = a1 + 12;
  v13[0] = "hide_view_timer_expired";
  v13[1] = a1 + 11;
  v14[0] = "suspended";
  v14[1] = a1 + 10;
  v15[0] = "view_cloaked";
  v15[1] = a1 + 9;
  v16[0] = "shell_initiated";
  v16[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<enum SearchAppState &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v16,
           v15,
           v14,
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
