/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_ResumeCoro$1 @ 0x1801C93E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged$_InitCoro$2 @ 0x1801C9320 (winrt--Windows--Internal--Shell--implementation--DashboardManager--OnTaskbarSettingChanged$_Init.c)
 * Callees:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18003091C (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x180044518 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     std::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)_::function_void___cdecl(winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension)___lambda_6e64461b6651328ea871cea77f237b57__0_ @ 0x1801C1378 (std--function_void___cdecl(winrt--WindowsUdk--UI--Shell--Dashboard--DashboardExtens_ea_1801C1378.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@W4TaskbarSettingChangedEvent@Dashboard@5UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1801CF40C (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboar_ea_1801CF40C.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::OnTaskbarSettingChanged__ResumeCoro_1(
        __int64 a1)
{
  __int64 v2; // r9
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdx
  __int16 v6; // ax

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_3;
    case 2:
      *(_QWORD *)(a1 + 160) = a1 + 1;
      *(_QWORD *)(a1 + 176) = a1 + 353;
      v2 = *(_QWORD *)(a1 + 353);
      *(_QWORD *)(a1 + 192) = v2;
      *(_QWORD *)(a1 + 112) = v2;
      *(_QWORD *)(a1 + 88) = 8000LL;
      *(_QWORD *)(a1 + 208) = a1 + 9;
      *(_QWORD *)(a1 + 224) = a1 + 361;
      *(_QWORD *)(a1 + 104) = a1 + 361;
      v3 = *(_DWORD *)(a1 + 361);
      *(_DWORD *)(a1 + 240) = v3;
      *(_DWORD *)(a1 + 80) = v3;
      std::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension__::function_void___cdecl_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension____lambda_6e64461b6651328ea871cea77f237b57__0_(
        a1 + 16,
        v3);
      winrt::Windows::Internal::Shell::implementation::DashboardManager::CallDashboardExtension(v4, a1 + 16);
      std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>(a1 + 16, v5);
      std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *,enum winrt::WindowsUdk::UI::Shell::Dashboard::TaskbarSettingChangedEvent>::promise_type::final_suspend(
        a1,
        a1 + 96);
LABEL_3:
      *(_QWORD *)(a1 + 256) = a1 + 10;
      v6 = *(_WORD *)(a1 + 10);
      *(_WORD *)(a1 + 272) = v6;
      if ( v6 )
      {
        *(_QWORD *)(a1 + 288) = 369LL;
        *(_QWORD *)(a1 + 144) = 369LL;
        *(_QWORD *)(a1 + 128) = a1;
        *(_QWORD *)(a1 + 336) = a1 + 10;
        operator delete((void *)a1);
      }
      break;
    default:
      __debugbreak();
      break;
  }
  try
  {
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
