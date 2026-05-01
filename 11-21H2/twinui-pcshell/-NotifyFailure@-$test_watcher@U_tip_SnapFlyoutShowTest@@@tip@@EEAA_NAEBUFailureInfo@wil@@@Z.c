/*
 * XREFs of ?NotifyFailure@?$test_watcher@U_tip_SnapFlyoutShowTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1801C9300
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x180452794 (-log_failure@-$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<_tip_SnapFlyoutShowTest>::NotifyFailure(__int64 a1)
{
  tip::details::test_common_data<1>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
