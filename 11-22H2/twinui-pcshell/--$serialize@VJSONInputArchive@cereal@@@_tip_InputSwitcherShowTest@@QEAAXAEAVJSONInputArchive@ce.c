/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_InputSwitcherShowTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806FF484
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180700700 (-deserialize@-$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXAEAVJSONInputArc.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@2@V12@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@1@0@Z @ 0x1806FEA64 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAW4__MIDL___MIDL_it.c)
 */

__int64 __fastcall _tip_InputSwitcherShowTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "controlCenterVisible";
  v3[1] = a1 + 13;
  v4[0] = "showKind";
  v4[1] = a1 + 16;
  v5[0] = "showComplete";
  v5[1] = a1 + 12;
  v6[0] = "showSuccess";
  v6[1] = a1 + 11;
  v7[0] = "canShow";
  v7[1] = a1 + 10;
  v8[0] = "controlCenterAvailable";
  v8[1] = a1 + 9;
  v9[0] = "timedOut";
  v9[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum __MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001 &>,cereal::NameValuePair<bool &>>(
           a2,
           v9,
           (int)v8,
           (int)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
