/*
 * XREFs of ?NotifyFailure@?$test_watcher@U_tip_IsSupportedTipTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180278450
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x18041ABF0 (-log_failure@-$test_common_data@$00@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<_tip_IsSupportedTipTest>::NotifyFailure(__int64 a1)
{
  tip::details::test_common_data<1>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
