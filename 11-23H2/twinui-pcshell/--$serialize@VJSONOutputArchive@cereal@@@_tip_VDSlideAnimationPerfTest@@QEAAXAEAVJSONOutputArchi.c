/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_VDSlideAnimationPerfTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1805FFB5C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180607F00 (-serialize@-$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@EEAAXAEAVJSONOutputA.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAW4SwitchType@@@2@V12@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@00000$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAW4SwitchType@@@1@0000@Z @ 0x1805FEE3C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V12@V12@V-$NameValuePair@AEAV_ea_1805FEE3C.c)
 */

__int64 __fastcall _tip_VDSlideAnimationPerfTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v6[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v7[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v8[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v9[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v14[2]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v15[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v16[2]; // [rsp+120h] [rbp+20h] BYREF

  v5[0] = "failedToMakeBackgroundThumbnail";
  v5[1] = a1 + 17;
  v6[0] = "focusNotChanged";
  v6[1] = a1 + 16;
  v7[0] = "animationNotNeeded";
  v7[1] = a1 + 14;
  v8[0] = "isReadyForRemoteSwitchWithAnimation";
  v8[1] = a1 + 15;
  v9[0] = "switchType";
  v9[1] = a1 + 56;
  v10[0] = "DCompThumbnailAnimationType";
  v10[1] = a1 + 24;
  v11[0] = "failedToAnimate";
  v11[1] = a1 + 13;
  v12[0] = "failedToCommitAnimation";
  v12[1] = a1 + 12;
  v13[0] = "failedToSwitchDesktop";
  v13[1] = a1 + 11;
  v14[0] = "failedToCreateAdjacentDesktop";
  v14[1] = a1 + 10;
  v15[0] = "failedToAddWindowIntoCollection";
  v15[1] = a1 + 9;
  v16[0] = "failedToInitializeHotkeyWindow";
  v2 = a1 + 8;
  v3 = *(_QWORD *)(a2 + 32);
  v16[1] = v2;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<enum SwitchType &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           v3,
           v16,
           (int)v15,
           (int)v14,
           (__int64)v13,
           (__int64)v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9,
           (__int64)v8,
           (__int64)v7,
           (__int64)v6,
           (__int64)v5);
}
