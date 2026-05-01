/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_InputSwitcherShowTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1806FF564
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180700A40 (-serialize@-$test_merged_data@U_tip_InputSwitcherShowTest@@@details@tip@@EEAAXAEAVJSONOutputArch.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0000$$QEAV?$NameValuePair@AEAW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@1@0@Z @ 0x1806FEB5C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V-$NameValuePair@AEAW4__M_ea_1806FEB5C.c)
 */

__int64 __fastcall _tip_InputSwitcherShowTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
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

  v5[0] = "controlCenterVisible";
  v5[1] = a1 + 13;
  v6[0] = "showKind";
  v6[1] = a1 + 16;
  v7[0] = "showComplete";
  v7[1] = a1 + 12;
  v8[0] = "showSuccess";
  v8[1] = a1 + 11;
  v9[0] = "canShow";
  v9[1] = a1 + 10;
  v10[0] = "controlCenterAvailable";
  v10[1] = a1 + 9;
  v11[0] = "timedOut";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v11[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum __MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001 &>,cereal::NameValuePair<bool &>>(
           v3,
           v11,
           (int)v10,
           (int)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
