/*
 * XREFs of ??$?GUsystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@12@HU?$ratio@$0OBA@$00@2@@chrono@std@@YA?AV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@01@AEBV201@AEBV?$duration@HU?$ratio@$0OBA@$00@std@@@01@@Z @ 0x1805BBCB0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1801CC700 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1801CC700.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>,int,std::ratio<3600,1>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  *a1 = *a2 - 36000000000LL * *a3;
  return a1;
}
