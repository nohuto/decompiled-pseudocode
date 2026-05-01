/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1802590C0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_InitCoro$2 @ 0x180258FC8 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Ini.c)
 * Callees:
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18018F814 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_18018F814.c)
 *     ??$await_transform@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEAA?A_P$$QEAV?$duration@HU?$ratio@$0DM@$00@std@@@chrono@3@@Z @ 0x18019AD9C (--$await_transform@V-$duration@HU-$ratio@$0DM@$00@std@@@chrono@std@@@promise_type@-$coroutine_tr.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?await_ready@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA_NXZ @ 0x1801BCE34 (-await_ready@-$notify_awaiter@V-$duration@HU-$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@Uhstring@6@00I@Z @ 0x180258EF8 (-BackupAppAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-AUfire_and_f.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1806389B4 (-await_resume@-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1(
        __int64 a1)
{
  __int64 v1; // rsi
  winrt::hstring *v2; // r15
  void **v3; // r14
  unsigned int v4; // r8d
  void **v5; // rax
  __int64 v6; // rcx
  void *v7; // rsi
  __int16 v8; // ax
  winrt::hstring *v9; // r14
  void **v10; // rsi
  unsigned int v11; // r8d
  void **v12; // rax
  __int64 v13; // rcx
  winrt::hstring *v14; // r14
  void **v15; // rsi
  unsigned int v16; // r8d
  void **v17; // rax
  __int64 v18; // [rsp+28h] [rbp-B0h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_11;
      case 2:
        v1 = *(_QWORD *)(a1 + 305);
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          v1,
          (__int64 *)(a1 + 16));
        *(_QWORD *)(a1 + 32) = a1 + 24;
        v2 = winrt::hstring::hstring((winrt::hstring *)(a1 + 24), L"Win32");
        *(_QWORD *)(a1 + 48) = a1 + 40;
        v3 = (void **)winrt::hstring::hstring((winrt::hstring *)(a1 + 40), L"Install");
        *(_QWORD *)(a1 + 288) = a1 + 9;
        v5 = (void **)winrt::hstring::hstring((winrt::hstring *)(a1 + 56), (winrt::impl **)(a1 + 313), v4);
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          v1,
          (_BYTE *)(a1 + 64),
          v5,
          v3,
          v2,
          0);
        *(_DWORD *)(a1 + 80) = 1;
        v7 = (void *)std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<std::chrono::duration<int,std::ratio<60,1>>>(
                       v6,
                       a1 + 88,
                       (int *)(a1 + 80));
        *(_QWORD *)(a1 + 72) = v7;
        if ( winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_ready((__int64)v7) )
          goto LABEL_7;
        v8 = 4;
        goto LABEL_5;
      case 4:
LABEL_7:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(*(_QWORD *)(a1 + 72));
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 88);
        *(_QWORD *)(a1 + 136) = a1 + 128;
        v9 = winrt::hstring::hstring((winrt::hstring *)(a1 + 128), L"Win32");
        *(_QWORD *)(a1 + 152) = a1 + 144;
        v10 = (void **)winrt::hstring::hstring((winrt::hstring *)(a1 + 144), L"Update");
        v12 = (void **)winrt::hstring::hstring(
                         (winrt::hstring *)(a1 + 160),
                         (winrt::impl **)(*(_QWORD *)(a1 + 288) + 304LL),
                         v11);
        LODWORD(v18) = 1;
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          *(_QWORD *)(a1 + 305),
          (_BYTE *)(a1 + 168),
          v12,
          v10,
          v9,
          v18);
        *(_DWORD *)(a1 + 184) = 5;
        v7 = (void *)std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::await_transform<std::chrono::duration<int,std::ratio<60,1>>>(
                       v13,
                       a1 + 192,
                       (int *)(a1 + 184));
        *(_QWORD *)(a1 + 176) = v7;
        if ( winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_ready((__int64)v7) )
          goto LABEL_10;
        v8 = 6;
LABEL_5:
        *(_WORD *)(a1 + 8) = v8;
        winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<60,1>>>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type>(v7);
        return;
      case 5:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 88);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
        goto LABEL_11;
      case 6:
LABEL_10:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::await_resume(*(_QWORD *)(a1 + 176));
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 192);
        *(_QWORD *)(a1 + 240) = a1 + 232;
        v14 = winrt::hstring::hstring((winrt::hstring *)(a1 + 232), L"Win32");
        *(_QWORD *)(a1 + 256) = a1 + 248;
        v15 = (void **)winrt::hstring::hstring((winrt::hstring *)(a1 + 248), L"Update");
        v17 = (void **)winrt::hstring::hstring(
                         (winrt::hstring *)(a1 + 264),
                         (winrt::impl **)(*(_QWORD *)(a1 + 288) + 304LL),
                         v16);
        LODWORD(v18) = 2;
        winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync(
          *(_QWORD *)(a1 + 305),
          (_BYTE *)(a1 + 272),
          v17,
          v15,
          v14,
          v18);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
          a1,
          a1 + 273);
        goto LABEL_11;
      case 7:
        winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(a1 + 192);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref((__int64 *)(a1 + 16));
LABEL_11:
        *(_QWORD *)(a1 + 288) = a1 + 9;
        winrt::hstring::~hstring((void **)(a1 + 313));
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
