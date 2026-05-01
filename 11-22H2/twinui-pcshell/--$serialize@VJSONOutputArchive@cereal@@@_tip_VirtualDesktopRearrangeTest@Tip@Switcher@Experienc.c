/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180541690
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180543E30 (-serialize@-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Composa.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x18018D048 (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@I@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z @ 0x180540E4C (--$process@I@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAI@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V12@V12@V?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@000$$QEAV?$NameValuePair@AEAW4SwitcherType@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@1@@Z @ 0x1805412FC (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V12@V12@V-$NameValuePair@AEAW4Switche_ea_1805412FC.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+70h] [rbp-10h] BYREF
  int v13; // [rsp+90h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v8[0] = "switcherType";
  v8[1] = a1 + 12;
  v9[0] = "areModificationsSuspended";
  v9[1] = a1 + 20;
  v10[0] = "isUIAlreadyUpdated";
  v10[1] = a1 + 23;
  v11[0] = "didVirtualDesktopDisappear";
  v11[1] = a1 + 22;
  v12[0] = "isRequestingSameIndex";
  v12[1] = a1 + 21;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v4 + 408) = "activationMethod";
  v13 = *(_DWORD *)(a1 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL),
    &v13);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v6 + 408) = "destinationIndex";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(*(_QWORD *)(v6 + 32), (_DWORD *)(a1 + 16));
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum WindowsInternal::ComposableShell::Experiences::Switcher::Tip::SwitcherType &>>(
           *(_QWORD *)(v5 + 32),
           v12,
           (int)v11,
           (int)v10,
           (__int64)v9,
           (__int64)v8);
}
