/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x1801BB400
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$2 @ 0x1801BB344 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001D7C8 (--1-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$integra.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180041CEC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180043A1C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1802393DE (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__ResumeCoro_1(
        _QWORD *a1)
{
  char *v1; // rsi
  _QWORD *v2; // r13
  __int64 *v3; // rcx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  char *v7; // r15
  RTL_SRWLOCK **v8; // r12
  HMONITOR v9; // rax
  int SystemMetricsForDpi; // eax
  HWND **v11; // rbx
  HWND *v12; // rcx
  HWND *v13; // rcx
  LPARAM v14; // r9
  HWND *v15; // rax
  HWND v16; // rcx
  LPARAM v17; // r9
  HWND *v18; // rax
  HWND v19; // rcx
  const char *v20; // r9
  __int16 v21; // ax
  char *v22; // [rsp+28h] [rbp-80h]
  RTL_SRWLOCK **v24; // [rsp+30h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v31; // [rsp+C8h] [rbp+20h]

  try
  {
    v1 = (char *)a1;
    v2 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        a1[34] = (char *)a1 + 1;
        v3 = (_QWORD *)((char *)a1 + 657);
        *((_QWORD *)v1 + 36) = v3;
        v4 = *v3;
        *((_QWORD *)v1 + 38) = v4;
        *((_QWORD *)v1 + 14) = v4;
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          v4,
          (__int64 *)v1 + 2);
        v1[24] = 0;
        *((_QWORD *)v1 + 4) = v1 + 24;
        v5 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
        v1[96] = v5;
        if ( v5 )
          goto LABEL_6;
        *((_WORD *)v1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std___experimental_std___Z(
          v6,
          v1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        v7 = v1 + 16;
        v22 = v1 + 16;
        v31 = *((_QWORD *)v1 + 2);
        *((_QWORD *)v1 + 40) = v31 + 160;
        *((_QWORD *)v1 + 16) = v31 + 160;
        v8 = (RTL_SRWLOCK **)(v1 + 40);
        v24 = (RTL_SRWLOCK **)(v1 + 40);
        wil::srwlock::lock_exclusive(v31 + 160, (__int64)(v1 + 40));
        v9 = MonitorFromWindow(0LL, 1u);
        if ( (unsigned int)GetDpiForMonitorInternal(v9, 0LL, v1 + 52, v1 + 48) )
        {
          *((_DWORD *)v1 + 14) = GetSystemMetricsForDpi(49LL);
          *((_DWORD *)v1 + 15) = GetSystemMetricsForDpi(50LL);
          *((_DWORD *)v1 + 16) = GetSystemMetricsForDpi(11LL);
          SystemMetricsForDpi = GetSystemMetricsForDpi(12LL);
          try
          {
            *((_DWORD *)v1 + 17) = SystemMetricsForDpi;
            v11 = (HWND **)(*((_QWORD *)v1 + 34) + 656LL);
            *((_QWORD *)v1 + 42) = v11;
            v12 = *v11;
            *((_QWORD *)v1 + 44) = *v11;
            *((_QWORD *)v1 + 18) = v12;
            winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
              v12,
              v1 + 72,
              *((_QWORD *)v1 + 7));
            *((_QWORD *)v1 + 46) = v11;
            v13 = *v11;
            *((_QWORD *)v1 + 48) = *v11;
            *((_QWORD *)v1 + 20) = v13;
            winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
              v13,
              v1 + 80,
              *((_QWORD *)v1 + 8));
            v14 = *((_QWORD *)v1 + 9);
            if ( v14 )
            {
              *((_QWORD *)v1 + 50) = v11;
              v15 = *v11;
              *((_QWORD *)v1 + 52) = *v11;
              v15 += 4;
              *((_QWORD *)v1 + 54) = v15;
              v16 = *v15;
              *((_QWORD *)v1 + 56) = *v15;
              *((_QWORD *)v1 + 22) = v16;
              SendMessageW(v16, 0x80u, 0LL, v14);
              *((_QWORD *)v1 + 58) = v31 + 88;
              *((_QWORD *)v1 + 24) = v31 + 88;
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                v31 + 88,
                v1 + 72);
            }
            v17 = *((_QWORD *)v1 + 10);
            if ( v17 )
            {
              *((_QWORD *)v1 + 60) = v11;
              v18 = *v11;
              *((_QWORD *)v1 + 62) = *v11;
              v18 += 4;
              *((_QWORD *)v1 + 64) = v18;
              v19 = *v18;
              *((_QWORD *)v1 + 66) = *v18;
              *((_QWORD *)v1 + 26) = v19;
              SendMessageW(v19, 0x80u, 1uLL, v17);
              *((_QWORD *)v1 + 68) = v31 + 96;
              *((_QWORD *)v1 + 28) = v31 + 96;
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                v31 + 96,
                v1 + 80);
            }
            wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)v1 + 10);
            wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)v1 + 9);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x183,
              (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
              v20);
            v1 = (char *)a1;
            v7 = v22;
            v8 = v24;
            v2 = a1;
          }
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v8);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(v7);
        }
        else
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)v1 + 5);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(v1 + 16);
        }
        std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
          (__int64)v1,
          v1 + 88);
        goto LABEL_16;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 2);
LABEL_16:
        *((_QWORD *)v1 + 70) = v1 + 10;
        v21 = *((_WORD *)v1 + 5);
        *((_WORD *)v1 + 288) = v21;
        if ( v21 )
        {
          *((_QWORD *)v1 + 74) = 665LL;
          *((_QWORD *)v1 + 32) = 665LL;
          v2[30] = v1;
          *((_QWORD *)v1 + 80) = v1 + 10;
          operator delete(v1);
        }
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
