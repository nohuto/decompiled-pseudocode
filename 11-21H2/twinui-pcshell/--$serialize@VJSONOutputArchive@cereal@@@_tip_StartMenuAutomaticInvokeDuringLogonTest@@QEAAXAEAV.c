/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_StartMenuAutomaticInvokeDuringLogonTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18044A35C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18044C740 (-serialize@-$test_merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@@details@tip@@EEAAX.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V?$NameValuePair@AEA_J@1@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEA_J@1@000000$$QEAV?$NameValuePair@AEAJ@1@@Z @ 0x1801A9ACC (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V-$NameValuePair@AEA_J@1@V01@V01@V01@V01@V0_ea_1801A9ACC.c)
 */

__int64 __fastcall _tip_StartMenuAutomaticInvokeDuringLogonTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[2]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v4[2]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v5[2]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v6[2]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v7[2]; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD v8[2]; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v9[2]; // [rsp+C0h] [rbp+17h] BYREF
  _QWORD v10[2]; // [rsp+D0h] [rbp+27h] BYREF
  _QWORD v11[2]; // [rsp+E0h] [rbp+37h] BYREF
  _QWORD v12[2]; // [rsp+F0h] [rbp+47h] BYREF

  v3[0] = "startActivationResult";
  v3[1] = a1 + 32;
  v4[0] = "searchIsMissing";
  v4[1] = a1 + 29;
  v5[0] = "startCrashedDuringInvoke";
  v5[1] = a1 + 28;
  v6[0] = "timedOutAfterFiveSeconds";
  v6[1] = a1 + 27;
  v7[0] = "foregroundLostInvokeAbort";
  v7[1] = a1 + 26;
  v8[0] = "foregroundCouldNotBeClaimed";
  v8[1] = a1 + 25;
  v9[0] = "canceledForegroundLost";
  v9[1] = a1 + 24;
  v10[0] = "millisecondsSpentOpen";
  v10[1] = a1 + 16;
  v11[0] = "logonCompletedBeforeImmersiveShellInit";
  v11[1] = a1 + 9;
  v12[0] = "explorerBlackScreenLogon";
  v12[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<__int64 &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>>(
           a2,
           v12,
           v11,
           (int)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
