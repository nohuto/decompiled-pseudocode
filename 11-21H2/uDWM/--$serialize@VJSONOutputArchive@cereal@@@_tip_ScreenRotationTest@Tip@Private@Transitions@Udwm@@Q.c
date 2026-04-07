/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800F3194
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6B40 (-serialize@-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@ti.c)
 * Callees:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x180042610 (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEA_N@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEA_N@1@1@Z @ 0x1800F2AF0 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEA_N@2@V32@@-$OutputArchive@VJSONOutp.c)
 */

char __fastcall Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v5[0] = "stateCompleted";
  v5[1] = a1 + 17;
  v6[0] = "visualsDeleted";
  v6[1] = a1 + 16;
  v7[0] = "captureCount";
  v7[1] = a1 + 12;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v3 + 408) = "transitionType";
  v8 = *(_DWORD *)(a1 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL),
    &v8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v2 + 32),
           (__int64)v7,
           v6,
           v5);
}
