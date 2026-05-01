/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_SearchHideTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18019AC74
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801A25C0 (-deserialize@-$test_merged_data@U_tip_SearchHideTest@@@details@tip@@EEAAXAEAVJSONInputArchive@ce.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A620 (--$process@V-$NameValuePair@AEAW4SearchAppState@@@cereal@@@-$InputArchive@VJSONInputArchive@cere.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x18034AAB4 (--$process@V-$NameValuePair@AEA_N@cereal@@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0@Z @ 0x18034AB48 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@@-$InputArchive@VJSONInputArchive@cereal@@$0A@@cer.c)
 */

__int64 __fastcall _tip_SearchHideTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-79h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v7[2]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v8[2]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v9[2]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v10[2]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v11[2]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v12[2]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v13[2]; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v14[2]; // [rsp+C0h] [rbp+17h] BYREF
  _QWORD v15[2]; // [rsp+D0h] [rbp+27h] BYREF
  _QWORD v16[2]; // [rsp+E0h] [rbp+37h] BYREF
  _QWORD v17[2]; // [rsp+F0h] [rbp+47h] BYREF

  v16[0] = "navigation_level_active_during_suspension";
  v16[1] = a1 + 33;
  v17[0] = "view_visible_during_suspension";
  v17[1] = a1 + 32;
  v15[0] = "state_during_last_resort_suspension_timer";
  v15[1] = a1 + 28;
  v14[0] = "state_during_view_consolidation";
  v14[1] = a1 + 24;
  v13[0] = "state_during_hide_request_timer";
  v13[1] = a1 + 20;
  v12[0] = "initial_state";
  v12[1] = a1 + 16;
  v11[0] = "already_hidden";
  v11[1] = a1 + 15;
  v10[0] = "view_destroyed";
  v10[1] = a1 + 14;
  v9[0] = "activated_while_hiding";
  v9[1] = a1 + 13;
  v8[0] = "suspend_timer_expired";
  v8[1] = a1 + 12;
  v7[0] = "hide_view_timer_expired";
  v7[1] = a1 + 11;
  v6[0] = "suspended";
  v6[1] = a1 + 10;
  v5[0] = "view_cloaked";
  v5[1] = a1 + 9;
  v4[0] = "shell_initiated";
  v4[1] = a1 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v4);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v5);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v6);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v7);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v8);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v9);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v10);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>>(a2, v11);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(a2, v12);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(a2, v13);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(a2, v14);
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(a2, v15);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           v17,
           v16);
}
