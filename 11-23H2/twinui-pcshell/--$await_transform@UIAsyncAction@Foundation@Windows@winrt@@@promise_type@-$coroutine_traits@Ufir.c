/*
 * XREFs of ??$await_transform@UIAsyncAction@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_P$$QEAUIAsyncAction@Foundation@Windows@winrt@@@Z @ 0x1801AEBB8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::final_release$_ResumeCoro$1 @ 0x18027D060 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--final_release$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncAction>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 8) = a3;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a2;
  *(_BYTE *)(a2 + 24) = 1;
  return result;
}
