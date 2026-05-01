/*
 * XREFs of std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_6e64461b6651328ea871cea77f237b57__0_ @ 0x1806936F8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x180240370 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Resu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_6e64461b6651328ea871cea77f237b57__0_(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = off_1807F0C50;
  result = a1;
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
