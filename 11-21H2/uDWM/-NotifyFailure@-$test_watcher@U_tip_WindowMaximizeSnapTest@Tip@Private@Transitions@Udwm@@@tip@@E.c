/*
 * XREFs of ?NotifyFailure@?$test_watcher@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800F4470
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F62A8 (-log_failure@-$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::NotifyFailure(
        __int64 a1)
{
  tip::details::test_common_data<0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
