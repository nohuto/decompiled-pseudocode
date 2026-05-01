/*
 * XREFs of std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_312c58877751c28ad9ce6cd478c8fff2__0_ @ 0x1801C1338
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1 @ 0x1801CAA10 (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_312c58877751c28ad9ce6cd478c8fff2__0_(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = off_1806457E0;
  result = a1;
  *(_QWORD *)(a1 + 56) = a1;
  return result;
}
