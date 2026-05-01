/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_DiscoverabilityManagerTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806F92E0
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1806FC670 (-deserialize@-$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@EEAAXAEAVJSON.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4InvokeType@@@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4InvokeType@@@1@@Z @ 0x1806F8274 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V12@V12@V12@V-$NameValuePair@AEAV-.c)
 */

__int64 __fastcall _tip_DiscoverabilityManagerTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v4[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v5[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v6[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v8[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v13[2]; // [rsp+100h] [rbp+0h] BYREF

  v3[0] = "invokeType";
  v3[1] = a1 + 56;
  v4[0] = "description";
  v4[1] = a1 + 24;
  v5[0] = "succeedIfCampaignInvoked";
  v5[1] = a1 + 16;
  v6[0] = "succeedIfSubscribed";
  v6[1] = a1 + 15;
  v7[0] = "ignoreIfCampaignThresholdNotMet";
  v7[1] = a1 + 14;
  v8[0] = "ignoreIfMiracastNotAvailable";
  v8[1] = a1 + 13;
  v9[0] = "failedGetViewCount";
  v9[1] = a1 + 12;
  v10[0] = "failedGetViews";
  v10[1] = a1 + 11;
  v11[0] = "failedToSubscribeApplicationView";
  v11[1] = a1 + 10;
  v12[0] = "failedToGetAvailableDeviceInformation";
  v12[1] = a1 + 9;
  v13[0] = "failedToInitializeComponent";
  v13[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum InvokeType &>>(
           a2,
           v13,
           (int)v12,
           (int)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
