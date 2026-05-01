/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1_::_1_::dtor$20 @ 0x180243A6E
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync__ResumeCoro_1_::_1_::dtor_20(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 448) = *(_QWORD *)(a2 + 136) + 424LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 448));
}
