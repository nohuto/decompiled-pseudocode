/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x180543E30
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C18D8 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800C1AA4 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAU?$test_data_metrics@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU?$test_data_metrics@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@Z @ 0x180540D8C (--$process@AEAU-$test_data_metrics@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Co.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x180541690 (--$serialize@VJSONOutputArchive@cereal@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experienc.c)
 */

void __fastcall tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::serialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 *v3; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (__int64 *)(a2 + 32);
  v5 = a1 + 176;
  if ( (a3 & 1) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*v3 + 32) + 32LL);
    v8 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 408) = "test";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v8 + 32));
    WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<cereal::JSONOutputArchive>(
      v5 & -(__int64)(a1 != 0),
      *(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL));
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v8 + 32));
  }
  if ( (a3 & 2) != 0 )
  {
    v11[1] = a1 + 152;
    v9 = *v3;
    v11[0] = v5 & -(__int64)(a1 != 0);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL);
    *(_QWORD *)(v10 + 408) = "metrics";
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<tip::details::test_data_metrics<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest> &>(
      *(_QWORD *)(v10 + 32),
      v11);
  }
}
