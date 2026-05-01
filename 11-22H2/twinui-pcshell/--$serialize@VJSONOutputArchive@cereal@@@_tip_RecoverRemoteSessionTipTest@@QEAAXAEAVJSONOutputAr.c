/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_RecoverRemoteSessionTipTest@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1807050B4
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180708490 (-serialize@-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@EEAAXAEAVJSONOutp.c)
 * Callees:
 *     ??$process@AEA_K@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z @ 0x18019C508 (--$process@AEA_K@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@cereal@@V12@V?$NameValuePair@AEA_K@2@V32@V?$NameValuePair@AEA_N@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0$$QEAV?$NameValuePair@AEA_K@1@1$$QEAV?$NameValuePair@AEA_N@1@@Z @ 0x180702D74 (--$process@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180702D74.c)
 */

__int64 __fastcall _tip_RecoverRemoteSessionTipTest::serialize<cereal::JSONOutputArchive>(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v9[0] = "isLocalPC";
  v9[1] = a1 + 104;
  v10[0] = "restoredHostProcesses";
  v10[1] = a1 + 96;
  v4 = (unsigned __int64 *)(a1 + 72);
  v11[0] = "recoveredHostProcesses";
  v11[1] = a1 + 88;
  v12[0] = "systemId";
  v12[1] = a1 + 8;
  v13[0] = "remoteDesktopId";
  v13[1] = a1 + 40;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v5 + 408) = "recoveredWindows";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(*(_QWORD *)(v5 + 32), v4);
  v6 = *(_QWORD *)(v2 + 32);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = "restoredWindows";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned __int64 &>(
    *(_QWORD *)(v7 + 32),
    (unsigned __int64 *)(a1 + 80));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<unsigned __int64 &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v6 + 32),
           v13,
           v12,
           (__int64)v11,
           (__int64)v10,
           (__int64)v9);
}
