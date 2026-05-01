/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180704DF4
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x180707D30 (-deserialize@-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXAEAVJSONIn.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_K@cereal@@V12@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V12@V12@V?$NameValuePair@AEA_N@2@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_K@1@0$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@100$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180703060 (--$process@V-$NameValuePair@AEA_K@cereal@@V12@V-$NameValuePair@AEAV-$basic_string@GU-$char_trait.c)
 */

__int64 __fastcall _tip_RecoverRemoteSessionTipTest::serialize<cereal::JSONInputArchive>(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v7[2]; // [rsp+80h] [rbp+27h] BYREF
  _QWORD v8[2]; // [rsp+90h] [rbp+37h] BYREF
  _QWORD v9[2]; // [rsp+A0h] [rbp+47h] BYREF

  v3[0] = "isLocalPC";
  v3[1] = a1 + 104;
  v4[0] = "restoredHostProcesses";
  v4[1] = a1 + 96;
  v5[0] = "recoveredHostProcesses";
  v5[1] = a1 + 88;
  v6[0] = "systemId";
  v6[1] = a1 + 8;
  v7[0] = "remoteDesktopId";
  v7[1] = a1 + 40;
  v8[0] = "restoredWindows";
  v8[1] = a1 + 80;
  v9[0] = "recoveredWindows";
  v9[1] = a1 + 72;
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
           a2,
           v9,
           (int)v8,
           (int)v7,
           (__int64)v6,
           (__int64)v5,
           (__int64)v4,
           (__int64)v3);
}
