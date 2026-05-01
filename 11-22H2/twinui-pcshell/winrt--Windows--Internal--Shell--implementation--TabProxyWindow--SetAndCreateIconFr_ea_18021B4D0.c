/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1 @ 0x18021B4D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_InitCoro$2 @ 0x18021B41C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFromGlyphAsync$.c)
 * Callees:
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x180059E08 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVXamlLauncher@@UDismis.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18006DFE4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@.c)
 *     ?SetEvent_scope_exit@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180070754 (-SetEvent_scope_exit@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@experimental@std@@@Z @ 0x1800715E8 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180072F74 (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x1801AA480 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801B0E64 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801B2828 (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1801B7C64 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?release_ref@?$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BCF98 (-release_ref@-$com_ptr@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802E82AA (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-SetEvent@details@wil@@Y.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1802E87D0 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ??$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z @ 0x18063A79C (--$WindowTabHostIconTimeout@_N@WindowTabHostTelemetry@@SAX$$QEA_N@Z.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18063B2F4 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync__ResumeCoro_1(
        __int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rcx
  __int64 *v3; // rdx
  bool v4; // bl
  __int64 v5; // r8
  const char *v6; // r9
  char *v7; // rbx
  HMONITOR v8; // rax
  int SystemMetricsForDpi; // eax
  __int64 v10; // r13
  LPARAM *v11; // r15
  __int64 *v12; // r14
  const char *v13; // r9
  char *v14; // [rsp+28h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v1 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_22;
      case 2:
        winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
          *(__int64 *)((char *)a1 + 193),
          a1 + 2);
        *((_BYTE *)v1 + 24) = 0;
        v1[4] = (__int64)(v1 + 3);
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_6;
        *((_WORD *)v1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std___experimental_std___Z(
          v2,
          v1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        v3 = (__int64 *)(v1[2] + 160);
        v1[22] = (__int64)v3;
        v1[12] = winrt::resume_on_signal((__int64)(v1 + 5), *v3, 20000000LL);
        if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(v1 + 12)) )
          goto LABEL_9;
        *((_WORD *)v1 + 4) = 6;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std___experimental_std___Z((PVOID *)v1 + 12);
        return;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(a1 + 2);
        goto LABEL_22;
      case 6:
LABEL_9:
        v4 = !_await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ(v1 + 12);
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(v1 + 5));
        if ( v4 )
        {
          *((_BYTE *)v1 + 104) = 1;
          WindowTabHostTelemetry::WindowTabHostIconTimeout<bool>();
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(v1 + 2);
        }
        else
        {
          v7 = (char *)(v1 + 14);
          v14 = (char *)(v1 + 14);
          _SetEvent_scope_exit___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEBA_AV__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___2_XZ(
            (_QWORD *)v1[22],
            v1 + 14,
            v5,
            v6);
          v8 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v8, 0LL, (char *)v1 + 124, v1 + 15) )
          {
            *((_DWORD *)v1 + 32) = GetSystemMetricsForDpi(49LL);
            *((_DWORD *)v1 + 33) = GetSystemMetricsForDpi(50LL);
            *((_DWORD *)v1 + 34) = GetSystemMetricsForDpi(11LL);
            SystemMetricsForDpi = GetSystemMetricsForDpi(12LL);
            try
            {
              *((_DWORD *)v1 + 35) = SystemMetricsForDpi;
              v10 = *(__int64 *)((char *)v1 + 193);
              winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
                v10,
                v1 + 18,
                v1[16]);
              v11 = v1 + 19;
              winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
                v10,
                v1 + 19,
                v1[17]);
              if ( v1[18] )
              {
                SendMessageW(*(HWND *)(v10 + 32), 0x80u, 0LL, v1[18]);
                v12 = v1 + 2;
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  v1[2] + 88,
                  v1 + 18);
              }
              else
              {
                v12 = v1 + 2;
              }
              if ( *v11 )
              {
                SendMessageW(*(HWND *)(v10 + 32), 0x80u, 1uLL, *v11);
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  *v12 + 96,
                  v1 + 19);
              }
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>((HICON *)v1 + 19);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>((HICON *)v1 + 18);
            }
            catch ( ... )
            {
              wil::details::in1diag3::Log_CaughtException(
                retaddr,
                (void *)0x1B5,
                (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
                v13);
              v12 = a1 + 2;
              v1 = a1;
              v7 = v14;
            }
            __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(v7);
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(v12);
          }
          else
          {
            __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(v1 + 14);
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(v1 + 2);
          }
        }
        std::experimental::coroutine_traits<winrt::fire_and_forget,XamlLauncher *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::final_suspend(
          (__int64)v1,
          (_BYTE *)v1 + 160);
        goto LABEL_22;
      case 7:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(a1 + 5));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowTabHost>::release_ref(v1 + 2);
LABEL_22:
        if ( *((_WORD *)v1 + 5) )
          operator delete(v1);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
