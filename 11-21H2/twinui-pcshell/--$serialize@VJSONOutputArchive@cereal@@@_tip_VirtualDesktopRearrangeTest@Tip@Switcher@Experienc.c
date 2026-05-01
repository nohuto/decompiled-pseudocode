/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x18048CB20
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18048E5B0 (-serialize@-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 * Callees:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000@Z @ 0x18005C72C (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@@-$OutputArchive@VJSONOutputArchive@cereal.c)
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18034A01C (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@I@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z @ 0x18048C67C (--$process@I@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-48h]
  const char *v9; // [rsp+30h] [rbp-40h] BYREF
  __int64 v10; // [rsp+38h] [rbp-38h]
  const char *v11; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  _QWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v9 = "areModificationsSuspended";
  v10 = a1 + 16;
  v11 = "isUIAlreadyUpdated";
  v12 = a1 + 19;
  v13[0] = "didVirtualDesktopDisappear";
  v13[1] = a1 + 18;
  v14[0] = "isRequestingSameIndex";
  v14[1] = a1 + 17;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v4 + 408) = "activationMethod";
  v15 = *(_DWORD *)(a1 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL),
    &v15);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v6 + 408) = "destinationIndex";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v6 + 32), (_DWORD *)(a1 + 12));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>>(
           *(_QWORD *)(v5 + 32),
           v14,
           (__int64)v13,
           (__int64)&v11,
           (__int64)&v9,
           v8,
           (__int64)v9,
           v10,
           (__int64)v11,
           v12);
}
