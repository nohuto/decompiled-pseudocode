/*
 * XREFs of ??0?$test_merged_data@U_tip_SwipeDashboard@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x1805BC9E4
 * Callers:
 *     ?open_and_watch_errors@?$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA?AV?$test_watcher@U_tip_SwipeDashboard@@@2@XZ @ 0x1805BE5FC (-open_and_watch_errors@-$tip_test@U_tip_SwipeDashboard@@@tip@@QEAA-AV-$test_watcher@U_tip_SwipeD.c)
 * Callees:
 *     ?open_without_lock@?$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x180351548 (-open_without_lock@-$test_common_data@$00@details@tip@@QEAAXPEAU_GUID@@W4TestRetrievalOptions@@@.c)
 */

_QWORD *__fastcall tip::details::test_merged_data<_tip_SwipeDashboard>::test_merged_data<_tip_SwipeDashboard>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx

  a1[2] = &tip::details::test_merged_data<_tip_SwipeDashboard>::c_details;
  v4 = (__int64)(a1 + 1);
  *(_QWORD *)(v4 + 16) = 0LL;
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
  *a1 = &tip::details::test_merged_data<_tip_SwipeDashboard>::`vftable';
  a1[18] = a1 + 4;
  a1[19] = 0x1000000LL;
  tip::details::test_common_data<1>::open_without_lock(v4, a2, a3);
  return a1;
}
