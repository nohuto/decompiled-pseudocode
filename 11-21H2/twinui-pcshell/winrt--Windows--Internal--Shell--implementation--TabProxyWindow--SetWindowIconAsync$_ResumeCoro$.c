/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x1801BB9D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_InitCoro$2 @ 0x1801BB918 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x18001AB44 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x18001AC14 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@St.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18001D7C8 (--1-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIcon@@YAH0@ZU-$integra.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180022E4C (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x180022E58 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMe.c)
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180030D10 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     ??$await_transform@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVMeetAndChatIris@implementation@Shell@Internal@Windows@2@W4MeetAndChatUsageType@5672@@experimental@std@@QEAA?AU?$notify_awaiter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@$$QEAU?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@6@@Z @ 0x18003F8F8 (--$await_transform@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windo.c)
 *     ?OpenReadAsync@?$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18003FD64 (-OpenReadAsync@-$consume_Windows_Storage_Streams_IRandomAccessStreamReference@UIRandomAccessStre.c)
 *     ?GetIconAsync@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@3@XZ @ 0x18003FDB8 (-GetIconAsync@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Intern.c)
 *     ??$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA?AU?$com_ptr@UIStream@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z$$QEAPEAU2@@Z @ 0x180040E58 (--$capture@UIStream@@P6AJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@ZPEAU2@@winrt@@YA-AU-$com_ptr@UIStream.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x180041CEC (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUTabProxyWindow@imp.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180042A04 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1800432B4 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-De.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ?get_strong@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180043A1C (-get_strong@-$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxy.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F6E50 (-release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F9DD8 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@0@AEBU1230@0@Z @ 0x1801BAE94 (--$when_any@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Fou.c)
 *     _lambda_b8623916b833b4369876a538bb21da9f_::operator() @ 0x1801BB280 (_lambda_b8623916b833b4369876a538bb21da9f_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x1802393DE (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1-DestroyIco.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18049A2BC (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18049A350 (-Cancel@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamReference.c)
 */

// Hidden C++ exception states: #wind=20 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1(
        char *a1)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  HMONITOR v7; // rax
  int SystemMetricsForDpi; // ebx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  winrt::Windows::Foundation::IUnknown *v12; // rax
  winrt::Windows::Foundation::IUnknown *v13; // rax
  __int64 v14; // rcx
  char v15; // al
  char v16; // bl
  _QWORD *Async; // rax
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // rax
  HICON *v21; // rcx
  __int64 v22; // r9
  int IconFromStreamWithWIC; // eax
  HWND **v24; // rax
  HWND *v25; // rcx
  HWND v26; // rcx
  __int64 (__fastcall **v27)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v28)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v29; // eax
  HICON *v30; // rax
  HICON *v31; // rcx
  __int64 v32; // r9
  int v33; // eax
  HWND **v34; // rax
  HWND *v35; // rcx
  HWND v36; // rcx
  __int16 v37; // ax
  __int64 v38; // [rsp+38h] [rbp-E0h]
  __int64 v39; // [rsp+38h] [rbp-E0h]
  __int64 v40; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall ***v42)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+138h] [rbp+20h]

  try
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) > 0xAu )
    {
LABEL_34:
      __debugbreak();
    }
    else
    {
      switch ( *((_WORD *)a1 + 4) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_32;
        case 0:
        case 1:
          goto LABEL_34;
        case 2:
          *((_QWORD *)a1 + 90) = a1 + 1;
          v3 = (__int64 *)(a1 + 1185);
          *((_QWORD *)a1 + 92) = v3;
          v4 = *v3;
          *((_QWORD *)a1 + 94) = v4;
          *((_QWORD *)a1 + 30) = v4;
          winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::get_strong(
            v4,
            (__int64 *)a1 + 2);
          a1[24] = 0;
          *((_QWORD *)a1 + 4) = a1 + 24;
          v5 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
          a1[224] = v5;
          if ( v5 )
            goto LABEL_7;
          *((_WORD *)a1 + 4) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUTabProxyWindow_implementation_Shell_Internal_Windows_2__experimental_std___experimental_std___Z(
            v6,
            a1);
          return;
        case 4:
LABEL_7:
          _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
          v38 = *((_QWORD *)a1 + 2);
          *((_QWORD *)a1 + 96) = v38 + 160;
          *((_QWORD *)a1 + 32) = v38 + 160;
          wil::srwlock::lock_exclusive(v38 + 160, (__int64)(a1 + 40));
          v7 = MonitorFromWindow(0LL, 1u);
          if ( (unsigned int)GetDpiForMonitorInternal(v7, 0LL, a1 + 52, a1 + 48) )
          {
            SystemMetricsForDpi = GetSystemMetricsForDpi(49LL);
            if ( SystemMetricsForDpi <= (int)GetSystemMetricsForDpi(50LL) )
              v9 = 50LL;
            else
              v9 = 49LL;
            *((_DWORD *)a1 + 14) = GetSystemMetricsForDpi(v9);
            v10 = GetSystemMetricsForDpi(11LL);
            if ( v10 <= (int)GetSystemMetricsForDpi(12LL) )
              v11 = 12LL;
            else
              v11 = 11LL;
            *((_DWORD *)a1 + 15) = GetSystemMetricsForDpi(v11);
            *((_QWORD *)a1 + 98) = v38 + 48;
            *((_QWORD *)a1 + 34) = v38 + 48;
            winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::GetIconAsync(
              (__int64 *)(v38 + 48),
              (_QWORD *)a1 + 8);
            a1[80] = 0;
            v12 = lambda_b8623916b833b4369876a538bb21da9f_::operator()(
                    (__int64)(a1 + 80),
                    (winrt::Windows::Foundation::IUnknown *)(a1 + 88));
            *((_QWORD *)a1 + 66) = v12;
            v13 = winrt::when_any<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
                    (winrt::Windows::Foundation::IUnknown *)(a1 + 96),
                    (__int64)(a1 + 64),
                    (__int64)v12);
            *((_QWORD *)a1 + 68) = v13;
            *((_QWORD *)a1 + 9) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                                    v14,
                                    (__int64)(a1 + 104),
                                    (__int64)v13);
            v15 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
            a1[624] = v15;
            if ( !v15 )
            {
              *((_WORD *)a1 + 4) = 6;
              winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::TabProxyWindow *>::promise_type>();
              return;
            }
LABEL_18:
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::await_resume(
              *((_QWORD *)a1 + 9),
              (__int64)(a1 + 128));
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 104);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 96));
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 88));
            *((_QWORD *)a1 + 18) = 0LL;
            v16 = winrt::Windows::Foundation::operator==(
                    (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a1 + 16,
                    (_QWORD *)a1 + 18);
            a1[136] = v16;
            winrt::Windows::Foundation::IUnknown::release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 144));
            if ( v16 )
            {
              winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::Cancel(a1 + 64);
              winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 128));
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
              wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
            }
            else
            {
              Async = winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReference<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::OpenReadAsync(
                        (__int64 *)a1 + 16,
                        (_QWORD *)a1 + 20);
              *((_QWORD *)a1 + 80) = Async;
              *((_QWORD *)a1 + 19) = std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::MeetAndChatIris *,enum winrt::Windows::Internal::Shell::MeetAndChatUsageType>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>(
                                       v18,
                                       (__int64)(a1 + 168),
                                       (__int64)Async);
              v19 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready();
              a1[656] = v19;
              if ( !v19 )
              {
                *((_WORD *)a1 + 4) = 8;
                winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type>();
                return;
              }
LABEL_23:
              winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_resume(
                *((_QWORD *)a1 + 19),
                (__int64)(a1 + 192));
              winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 168);
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 160));
              *((_QWORD *)a1 + 25) = *((_QWORD *)a1 + 24);
              winrt::capture<IStream,long (*)(IUnknown *,_GUID const &,void * *),IUnknown *>(
                (_QWORD *)a1 + 26,
                CreateStreamOverRandomAccessStream,
                (_QWORD *)a1 + 25);
              *((_QWORD *)a1 + 36) = 0LL;
              *((_QWORD *)a1 + 37) = 0LL;
              v20 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                      (__int64)(a1 + 312),
                      (__int64)(a1 + 288));
              *((_QWORD *)a1 + 74) = v20;
              *((_QWORD *)a1 + 100) = v20 + 8;
              *((_QWORD *)a1 + 50) = v20 + 8;
              v39 = *((_QWORD *)a1 + 2);
              *((_QWORD *)a1 + 102) = v39 + 104;
              v21 = *(HICON **)(v39 + 104);
              *((_QWORD *)a1 + 104) = v21;
              *((_QWORD *)a1 + 48) = v21;
              IconFromStreamWithWIC = CreateIconFromStreamWithWIC(
                                        v21,
                                        *((struct IStream **)a1 + 26),
                                        *((_DWORD *)a1 + 14),
                                        v22,
                                        (HICON *)(v20 + 8));
              *((_DWORD *)a1 + 168) = IconFromStreamWithWIC;
              a1[304] = IconFromStreamWithWIC >= 0;
              wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>((__int64)(a1 + 312));
              if ( a1[304] )
              {
                v24 = (HWND **)(*((_QWORD *)a1 + 90) + 1184LL);
                *((_QWORD *)a1 + 106) = v24;
                v25 = *v24;
                *((_QWORD *)a1 + 108) = *v24;
                v25 += 4;
                *((_QWORD *)a1 + 110) = v25;
                v26 = *v25;
                *((_QWORD *)a1 + 112) = v26;
                *((_QWORD *)a1 + 52) = v26;
                SendMessageW(v26, 0x80u, 0LL, *((_QWORD *)a1 + 36));
                *((_QWORD *)a1 + 114) = v39 + 88;
                *((_QWORD *)a1 + 54) = v39 + 88;
                wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                  v39 + 88,
                  a1 + 288);
              }
              *((_QWORD *)a1 + 42) = 0LL;
              v42 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 26);
              v27 = *v42;
              *((_QWORD *)a1 + 140) = *v42;
              v27 += 5;
              *((_QWORD *)a1 + 142) = v27;
              v28 = *v27;
              *((_QWORD *)a1 + 144) = v28;
              *((_QWORD *)a1 + 56) = v28;
              v29 = v28(v42, *((_QWORD *)a1 + 42), 0LL, 0LL);
              *((_DWORD *)a1 + 172) = v29;
              if ( v29 >= 0 )
              {
                v30 = (HICON *)wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>(
                                 (__int64)(a1 + 352),
                                 (__int64)(a1 + 296));
                *((_QWORD *)a1 + 76) = v30++;
                *((_QWORD *)a1 + 116) = v30;
                *((_QWORD *)a1 + 60) = v30;
                v31 = (HICON *)**((_QWORD **)a1 + 102);
                *((_QWORD *)a1 + 118) = v31;
                *((_QWORD *)a1 + 58) = v31;
                v33 = CreateIconFromStreamWithWIC(v31, *((struct IStream **)a1 + 26), *((_DWORD *)a1 + 15), v32, v30);
                *((_DWORD *)a1 + 176) = v33;
                a1[344] = v33 >= 0;
                wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>>((__int64)(a1 + 352));
                if ( a1[344] )
                {
                  v34 = (HWND **)(*((_QWORD *)a1 + 90) + 1184LL);
                  *((_QWORD *)a1 + 120) = v34;
                  v35 = *v34;
                  *((_QWORD *)a1 + 122) = *v34;
                  v35 += 4;
                  *((_QWORD *)a1 + 124) = v35;
                  v36 = *v35;
                  *((_QWORD *)a1 + 126) = v36;
                  *((_QWORD *)a1 + 62) = v36;
                  SendMessageW(v36, 0x80u, 1uLL, *((_QWORD *)a1 + 37));
                  v40 = *((_QWORD *)a1 + 2);
                  *((_QWORD *)a1 + 128) = v40 + 96;
                  *((_QWORD *)a1 + 64) = v40 + 96;
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>>::swap(
                    v40 + 96,
                    a1 + 296);
                }
              }
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)a1 + 37);
              wil::details::unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HICON__ *,int (*)(HICON__ *),&int DestroyIcon(HICON__ *),wistd::integral_constant<unsigned __int64,0>,HICON__ *,HICON__ *,0,std::nullptr_t>>((HICON *)a1 + 36);
              if ( *((_QWORD *)a1 + 26) )
                winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)a1 + 26);
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 192));
              winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 128));
              winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
              wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
            }
          }
          else
          {
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
            winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          }
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
            (__int64)a1,
            a1 + 376);
LABEL_32:
          *((_QWORD *)a1 + 130) = a1 + 10;
          v37 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 528) = v37;
          if ( v37 )
          {
            *((_QWORD *)a1 + 134) = 1193LL;
            *((_QWORD *)a1 + 72) = 1193LL;
            *((_QWORD *)a1 + 70) = a1;
            *((_QWORD *)a1 + 146) = a1 + 10;
            operator delete(a1);
          }
          break;
        case 5:
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_32;
        case 6:
          goto LABEL_18;
        case 7:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 104);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 96));
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 88));
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_32;
        case 8:
          goto LABEL_23;
        case 9:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 168);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 160));
          winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a1 + 128));
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 64));
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 5);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 16);
          goto LABEL_32;
      }
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
