/*
 * XREFs of ?deserialize@?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x18060CAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall tip::details::test_merged_data<_tip_VirtualDesktopSwitcherShowReliabiltyTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = (a1 + 144) & -(__int64)(a1 != 0);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "test";
  return cereal::InputArchive<cereal::JSONInputArchive,0>::process<_tip_VirtualDesktopSwitcherShowReliabiltyTest &>(
           v4,
           v3);
}
