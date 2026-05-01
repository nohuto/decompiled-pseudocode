/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_ResumeCoro$1 @ 0x1801CC440
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_InitCoro$2 @ 0x1801CC380 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaunchSettingsAsy.c)
 * Callees:
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180030878 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180041CEC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180043A1C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rcx
  char v2; // al
  __int64 v3; // rcx
  winrt::Windows::Internal::Shell::implementation::DashboardManager **v4; // rcx
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v5; // rcx
  __int16 v6; // ax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_7;
      case 2:
        *(_QWORD *)(a1 + 112) = a1 + 1;
        *(_QWORD *)(a1 + 128) = a1 + 289;
        v1 = *(_QWORD *)(a1 + 289);
        *(_QWORD *)(a1 + 144) = v1;
        *(_QWORD *)(a1 + 64) = v1;
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          v1,
          (__int64 *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = a1 + 24;
        v2 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
        *(_BYTE *)(a1 + 48) = v2;
        if ( v2 )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std___experimental_std___Z(
          v3,
          (void *)a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        v4 = (winrt::Windows::Internal::Shell::implementation::DashboardManager **)(*(_QWORD *)(a1 + 112) + 288LL);
        *(_QWORD *)(a1 + 160) = v4;
        v5 = *v4;
        *(_QWORD *)(a1 + 176) = v5;
        winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(v5);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
          a1,
          (_BYTE *)(a1 + 40));
        goto LABEL_7;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
LABEL_7:
        *(_QWORD *)(a1 + 192) = a1 + 10;
        v6 = *(_WORD *)(a1 + 10);
        *(_WORD *)(a1 + 208) = v6;
        if ( v6 )
        {
          *(_QWORD *)(a1 + 224) = 297LL;
          *(_QWORD *)(a1 + 96) = 297LL;
          *(_QWORD *)(a1 + 80) = a1;
          *(_QWORD *)(a1 + 272) = a1 + 10;
          operator delete((void *)a1);
        }
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
