/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_StartMenuInvokeTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18002D520
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180019530 (-serialize@-$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@EEAAXAEAVJSONOutputArchiv.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@V01@V01@V01@V?$NameValuePair@AEAJ@1@V21@V21@V21@V01@V01@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEA_N@1@0000000000$$QEAV?$NameValuePair@AEAJ@1@11100@Z @ 0x1801ACF5C (--$-RV-$NameValuePair@AEA_N@cereal@@V01@V01@V01@V01@V01@V01@V01@V01@V01@V01@V-$Name_ea_1801ACF5C.c)
 */

__int64 __fastcall _tip_StartMenuInvokeTest::serialize<cereal::JSONOutputArchive>(__int64 a1, int a2)
{
  _QWORD v3[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v4[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v5[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v6[2]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v9[2]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v11[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v12[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v13[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v14[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v15[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v16[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v17[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v18[2]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v19[2]; // [rsp+190h] [rbp+80h] BYREF

  v3[0] = "searchLaunchedDuringInvoke";
  v3[1] = a1 + 20;
  v4[0] = "startLaunchedDuringInvoke";
  v4[1] = a1 + 19;
  v5[0] = "rootFrameInitialization";
  v5[1] = a1 + 36;
  v6[0] = "utmInitialization";
  v6[1] = a1 + 32;
  v7[0] = "searchActivationResult";
  v7[1] = a1 + 28;
  v8[0] = "startActivationResult";
  v8[1] = a1 + 24;
  v9[0] = "invalidStateTransitionDuringShow";
  v9[1] = a1 + 18;
  v10[0] = "startShownWithoutSearchAfterCutoffTimer";
  v10[1] = a1 + 16;
  v11[0] = "searchActivationFailed";
  v11[1] = a1 + 15;
  v12[0] = "chStartEnabled";
  v12[1] = a1 + 17;
  v13[0] = "searchCrashedDuringInvoke";
  v13[1] = a1 + 14;
  v14[0] = "startCrashedDuringInvoke";
  v14[1] = a1 + 13;
  v15[0] = "timedOutAfterFiveSeconds";
  v15[1] = a1 + 12;
  v16[0] = "canceledDeviceLocked";
  v16[1] = a1 + 11;
  v17[0] = "foregroundLostInvokeAbort";
  v17[1] = a1 + 10;
  v18[0] = "foregroundCouldNotBeClaimed";
  v18[1] = a1 + 9;
  v19[0] = "canceledForegroundLost";
  v19[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<long &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           a2,
           (unsigned int)v19,
           (unsigned int)v18,
           (unsigned int)v17,
           (__int64)v16,
           (__int64)v15,
           (__int64)v14,
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
