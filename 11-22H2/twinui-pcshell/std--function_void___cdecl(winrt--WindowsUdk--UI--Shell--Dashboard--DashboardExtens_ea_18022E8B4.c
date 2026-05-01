/*
 * XREFs of std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_5b3b1adb9065819fc0671c711b5f2aa6__0_ @ 0x18022E8B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_ResumeCoro$1 @ 0x180244470 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardV_ea_180244470.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_5b3b1adb9065819fc0671c711b5f2aa6__0_(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int64 result; // rax
  __int128 v5; // xmm0

  v2 = *a2;
  v3 = a2[1];
  *(_QWORD *)a1 = off_1807C94B0;
  result = a1;
  *(_OWORD *)(a1 + 8) = v2;
  v5 = a2[2];
  *(_OWORD *)(a1 + 24) = v3;
  *(_OWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
