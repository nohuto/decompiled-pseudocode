/*
 * XREFs of ??0?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18034C268
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_NotificationCenterShowTest>::test_merged_data<_tip_NotificationCenterShowTest>(
        __int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)(a1 + 16) = &tip::details::test_merged_data<_tip_NotificationCenterShowTest>::c_details;
  *(_QWORD *)(a1 + 24) = 0LL;
  v2 = a1 + 8;
  *(_QWORD *)v2 = a1;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_DWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 80) = 0LL;
  *(_WORD *)(v2 + 98) = -1;
  *(_BYTE *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)a1 = &tip::details::test_merged_data<_tip_NotificationCenterShowTest>::`vftable';
  *(_QWORD *)(a1 + 144) = a1 + 32;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_WORD *)(a1 + 168) = 0;
  tip::details::test_common_data<1>::open_without_lock();
  return a1;
}
