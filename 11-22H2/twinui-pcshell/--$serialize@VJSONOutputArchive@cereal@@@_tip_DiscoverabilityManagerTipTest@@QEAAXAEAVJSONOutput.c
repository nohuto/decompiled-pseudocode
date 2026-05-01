/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_DiscoverabilityManagerTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1806F9434
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1806FCC80 (-serialize@-$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXAEAVJSONOu.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4InvokeType@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4InvokeType@@@1@@Z @ 0x1806F83A8 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V-$NameVa_ea_1806F83A8.c)
 */

__int64 __fastcall _tip_DiscoverabilityManagerTipTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v15[2]; // [rsp+100h] [rbp+0h] BYREF

  v5[0] = "invokeType";
  v5[1] = a1 + 56;
  v6[0] = "description";
  v6[1] = a1 + 24;
  v7[0] = "succeedIfCampaignInvoked";
  v7[1] = a1 + 16;
  v8[0] = "succeedIfSubscribed";
  v8[1] = a1 + 15;
  v9[0] = "ignoreIfCampaignThresholdNotMet";
  v9[1] = a1 + 14;
  v10[0] = "ignoreIfMiracastNotAvailable";
  v10[1] = a1 + 13;
  v11[0] = "failedGetViewCount";
  v11[1] = a1 + 12;
  v12[0] = "failedGetViews";
  v12[1] = a1 + 11;
  v13[0] = "failedToSubscribeApplicationView";
  v13[1] = a1 + 10;
  v14[0] = "failedToGetAvailableDeviceInformation";
  v14[1] = a1 + 9;
  v15[0] = "failedToInitializeComponent";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v15[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum InvokeType &>>(
           v3,
           v15,
           (int)v14,
           (int)v13,
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
