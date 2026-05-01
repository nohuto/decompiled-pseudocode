/*
 * XREFs of ??0?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180353124
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18000AEF8 (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_ControlCenterShowTest>::test_merged_data<_tip_ControlCenterShowTest>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<_tip_ControlCenterShowTest>::c_details;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = a1 + 8;
  *(_QWORD *)v4 = a1;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 80) = 0LL;
  *(_WORD *)(v4 + 98) = -1;
  *(_BYTE *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_DWORD *)(v4 + 128) = 0;
  *(_QWORD *)a1 = &tip::details::test_merged_data<_tip_ControlCenterShowTest>::`vftable';
  *(_QWORD *)(a1 + 144) = a1 + 32;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = 0;
  tip::details::test_common_data<1>::open_without_lock(v4, a2, a3);
  return a1;
}
