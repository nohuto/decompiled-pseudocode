/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18019AA60
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1801A2540 (-deserialize@-$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@EEAAXAEAVJSONInput.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEAW4SearchAppState@@@cereal@@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4SearchAppState@@@1@@Z @ 0x18019A620 (--$process@V-$NameValuePair@AEAW4SearchAppState@@@cereal@@@-$InputArchive@VJSONInputArchive@cere.c)
 *     ??$process@V?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V?$NameValuePair@AEA_N@2@V32@V32@V32@V32@V32@V32@V32@V32@V32@V32@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$NameValuePair@AEAI@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x18019A6A8 (--$process@V-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V-$NameValuePair@AEA_N@2@V32.c)
 */

__int64 __fastcall _tip_SearchFullActivationTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v4[2]; // [rsp+90h] [rbp-80h] BYREF
  _QWORD v5[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v6[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v7[2]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+D0h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+E0h] [rbp-30h] BYREF
  _QWORD v10[2]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+100h] [rbp-10h] BYREF
  _QWORD v12[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v13[2]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v14[2]; // [rsp+130h] [rbp+20h] BYREF
  _QWORD v15[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v16[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v17[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v18[2]; // [rsp+170h] [rbp+60h] BYREF
  _QWORD v19[2]; // [rsp+180h] [rbp+70h] BYREF
  _QWORD v20[2]; // [rsp+190h] [rbp+80h] BYREF

  v5[0] = "transition_type";
  v5[1] = a1 + 64;
  v6[0] = "using_reactivation_udk";
  v6[1] = a1 + 28;
  v7[0] = "invalid_hwnd";
  v7[1] = a1 + 27;
  v8[0] = "launch_source";
  v8[1] = a1 + 32;
  v9[0] = "view_already_navigated";
  v9[1] = a1 + 26;
  v10[0] = "view_already_visible";
  v10[1] = a1 + 25;
  v11[0] = "view_already_created";
  v11[1] = a1 + 24;
  v12[0] = "view_destroyed";
  v12[1] = a1 + 23;
  v13[0] = "positioned";
  v13[1] = a1 + 22;
  v14[0] = "navigated";
  v14[1] = a1 + 21;
  v15[0] = "view_dismissed";
  v15[1] = a1 + 20;
  v16[0] = "view_consolidated";
  v16[1] = a1 + 19;
  v17[0] = "hidden";
  v17[1] = a1 + 18;
  v18[0] = "view_created";
  v18[1] = a1 + 17;
  v19[0] = "timed_out";
  v19[1] = a1 + 16;
  v20[0] = "new_source";
  v20[1] = a1 + 12;
  v4[0] = "source";
  v4[1] = a1 + 8;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum SearchAppState &>>(a2, v4);
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<enum FullActivationTestSource &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>>(
           a2,
           v20,
           (__int64)v19,
           (__int64)v18,
           (__int64)v17,
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
           (__int64)v5);
}
