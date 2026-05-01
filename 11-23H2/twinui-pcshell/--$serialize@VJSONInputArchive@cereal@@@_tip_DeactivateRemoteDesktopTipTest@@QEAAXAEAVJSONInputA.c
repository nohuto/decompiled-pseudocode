/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_DeactivateRemoteDesktopTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18070D4D0
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18071AED0 (-deserialize@-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@EEAAXAEAVJSO.c)
 * Callees:
 *     ??$?RV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V?$NameValuePair@AEA_N@1@V21@V21@V21@V21@V01@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAAAEAVJSONInputArchive@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEA_N@1@11110@Z @ 0x18027903C (--$-RV-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s_ea_18027903C.c)
 */

__int64 __fastcall _tip_DeactivateRemoteDesktopTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "correlationId";
  v3[1] = a1 + 48;
  v4[0] = "removeWindowReturnedFalse";
  v4[1] = a1 + 44;
  v5[0] = "disconnectFromLocalPC";
  v5[1] = a1 + 43;
  v6[0] = "didAnyHwndFailToClose";
  v6[1] = a1 + 42;
  v7[0] = "remoteDesktopSuccessfullyRemoved";
  v7[1] = a1 + 41;
  v8[0] = "remoteSystemNotFound";
  v8[1] = a1 + 40;
  v9[0] = "systemId";
  v9[1] = a1 + 8;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::operator()<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<std::wstring &>>(
           a2,
           (__int64)v9,
           v8,
           (int)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
