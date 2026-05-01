/*
 * XREFs of ?NotifyFailure@?$test_watcher@U_tip_ColumnSmartFillTest@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x18019F900
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1803902B0 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<_tip_ColumnSmartFillTest>::NotifyFailure(__int64 a1)
{
  tip::details::test_common_data<0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
