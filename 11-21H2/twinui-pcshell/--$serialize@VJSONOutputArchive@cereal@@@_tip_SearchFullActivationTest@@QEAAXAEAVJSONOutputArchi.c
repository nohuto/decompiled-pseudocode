/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_SearchFullActivationTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18019AE50
 * Callers:
 *     ??$?RV?$NameValuePair@AEAU_tip_SearchFullActivationTest@@@cereal@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAU_tip_SearchFullActivationTest@@@1@@Z @ 0x180198D78 (--$-RV-$NameValuePair@AEAU_tip_SearchFullActivationTest@@@cereal@@@-$OutputArchive@VJSONOutputAr.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V01@V?$NameValuePair@AEA_N@1@V21@V21@V21@V21@V21@V21@V21@V21@V21@V21@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V21@V21@V?$NameValuePair@AEAI@1@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONOutputArchive@1@$$QEAV?$NameValuePair@AEAW4FullActivationTestSource@@@1@0$$QEAV?$NameValuePair@AEA_N@1@1111111111$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$NameValuePair@AEAI@1@@Z @ 0x180198E58 (--$-RV-$NameValuePair@AEAW4FullActivationTestSource@@@cereal@@V01@V-$NameValuePair@AEA_N@1@V21@V.c)
 */

__int64 __fastcall _tip_SearchFullActivationTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
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

  v3[0] = "transition_type";
  v3[1] = a1 + 64;
  v4[0] = "using_reactivation_udk";
  v4[1] = a1 + 28;
  v5[0] = "invalid_hwnd";
  v5[1] = a1 + 27;
  v6[0] = "launch_source";
  v6[1] = a1 + 32;
  v7[0] = "view_already_navigated";
  v7[1] = a1 + 26;
  v8[0] = "view_already_visible";
  v8[1] = a1 + 25;
  v9[0] = "view_already_created";
  v9[1] = a1 + 24;
  v10[0] = "view_destroyed";
  v10[1] = a1 + 23;
  v11[0] = "positioned";
  v11[1] = a1 + 22;
  v12[0] = "navigated";
  v12[1] = a1 + 21;
  v13[0] = "view_dismissed";
  v13[1] = a1 + 20;
  v14[0] = "view_consolidated";
  v14[1] = a1 + 19;
  v15[0] = "hidden";
  v15[1] = a1 + 18;
  v16[0] = "view_created";
  v16[1] = a1 + 17;
  v17[0] = "timed_out";
  v17[1] = a1 + 16;
  v18[0] = "new_source";
  v18[1] = a1 + 12;
  v19[0] = "source";
  v19[1] = a1 + 8;
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::operator()<cereal::NameValuePair<enum FullActivationTestSource &>,cereal::NameValuePair<enum FullActivationTestSource &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<unsigned int &>>(
           a2,
           (__int64)v19,
           (__int64)v18,
           (int)v17,
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
