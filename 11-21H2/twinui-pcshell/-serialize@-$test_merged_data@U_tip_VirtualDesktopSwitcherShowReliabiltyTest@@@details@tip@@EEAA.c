/*
 * XREFs of ?serialize@?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x18060CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ??$process@AEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@Z @ 0x180607378 (--$process@AEAU_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@-$OutputArchive@VJSONOutputArchiv.c)
 */

void __fastcall tip::details::test_merged_data<_tip_VirtualDesktopSwitcherShowReliabiltyTest>::serialize(
        unsigned __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( (a3 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    *(_QWORD *)(v6 + 408) = "test";
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<_tip_VirtualDesktopSwitcherShowReliabiltyTest &>(
      *(_QWORD *)(v6 + 32),
      (a1 + 144) & ((unsigned __int128)-(__int128)a1 >> 64));
  }
  if ( (a3 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 32LL);
    v8 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 408) = "metrics";
    cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v8 + 32));
    *(_DWORD *)(a1 + 120) = 0;
    cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v8 + 32));
  }
}
