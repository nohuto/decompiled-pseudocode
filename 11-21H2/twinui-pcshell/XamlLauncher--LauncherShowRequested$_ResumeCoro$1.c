/*
 * XREFs of XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x1801AB2D8 (XamlLauncher--LauncherShowRequested$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180027340 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180117A74 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF04 (-release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z @ 0x18017D3C4 (-copy_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1803A1680 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA_KXZ @ 0x1803A1EA0 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     _anonymous_namespace_::ContextToLauncherShowMethod @ 0x18044AB78 (_anonymous_namespace_--ContextToLauncherShowMethod.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUPoint@Foundation@Windows@3@XZ @ 0x18044AEE4 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ @ 0x18044BB68 (-RepairWNFStalenessIfNecessary@XamlLauncher@@AEAAXXZ.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z @ 0x18044C8AC (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
void __fastcall XamlLauncher::LauncherShowRequested__ResumeCoro_1(char *a1)
{
  char *v2; // r14
  volatile int *v3; // rbx
  XamlLauncher **v4; // r14
  XamlLauncher *v5; // rax
  __int64 v6; // rax
  XamlLauncher *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rax
  HWND v11; // r13
  __int64 v12; // rax
  ImmersiveMonitorHelper **v13; // rax
  ImmersiveMonitorHelper *v14; // rcx
  ImmersiveMonitorHelper **v15; // r13
  __int64 (***v16)(void); // rcx
  __int64 (**v17)(void); // rax
  __int64 (*v18)(void); // rax
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // eax
  int started; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rdx
  __int16 v30; // ax
  int v31; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  float v34; // [rsp+A8h] [rbp+10h]
  float v35; // [rsp+ACh] [rbp+14h]
  ImmersiveMonitorHelper ***v36; // [rsp+B0h] [rbp+18h]

  try
  {
    v2 = a1;
    LOWORD(v31) = *((_WORD *)a1 + 4);
    switch ( (__int16)v31 )
    {
      case -1:
      case 3:
        goto LABEL_14;
      case 2:
        *((_QWORD *)a1 + 52) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 1033,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 54) = a1 + 1;
        v3 = *(volatile int **)(a1 + 1025);
        winrt::com_ptr<XamlLauncher>::copy_ref((__int64 *)a1 + 3, v3);
        *((_QWORD *)a1 + 4) = v3 + 112;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
          a1 + 32,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
        v4 = (XamlLauncher **)(*((_QWORD *)a1 + 54) + 1024LL);
        *((_QWORD *)a1 + 56) = v4;
        v5 = *v4;
        *((_QWORD *)a1 + 58) = *v4;
        v5 = (XamlLauncher *)((char *)v5 + 344);
        *((_QWORD *)a1 + 60) = v5;
        v6 = *(_QWORD *)v5;
        *((_QWORD *)a1 + 62) = v6;
        *((_QWORD *)a1 + 16) = v6;
        *((_QWORD *)a1 + 37) = retaddr;
        if ( !v6 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x653,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)0x80070490LL,
            v31);
        *((_QWORD *)a1 + 64) = v4;
        v7 = *v4;
        *((_QWORD *)a1 + 66) = *v4;
        XamlLauncher::RepairWNFStalenessIfNecessary(v7);
        v8 = *((_QWORD *)a1 + 52);
        v9 = v8 + 1024;
        *((_QWORD *)a1 + 112) = v8 + 1024;
        *((_QWORD *)a1 + 18) = v8 + 1024;
        v10 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                v8 + 1024,
                a1 + 48);
        *((_QWORD *)a1 + 14) = v10;
        v11 = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v10);
        *((_QWORD *)a1 + 38) = v11;
        *((_QWORD *)a1 + 5) = v11;
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 48));
        if ( v11 )
        {
          *((_QWORD *)a1 + 114) = v9;
          *((_QWORD *)a1 + 20) = v9;
          v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                  v8 + 1024,
                  a1 + 56);
          *((_QWORD *)a1 + 40) = v12;
          winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
            v12,
            a1 + 64);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 56));
          v34 = *((float *)a1 + 16);
          *((_DWORD *)a1 + 136) = (int)v34;
          *((_DWORD *)a1 + 18) = (int)v34;
          v35 = *((float *)a1 + 17);
          *((_DWORD *)a1 + 140) = (int)v35;
          *((_DWORD *)a1 + 19) = (int)v35;
          v36 = (ImmersiveMonitorHelper ***)(*((_QWORD *)a1 + 54) + 1024LL);
          *((_QWORD *)a1 + 72) = v36;
          v13 = *v36;
          *((_QWORD *)a1 + 74) = *v36;
          v13 += 26;
          *((_QWORD *)a1 + 76) = v13;
          v14 = *v13;
          *((_QWORD *)a1 + 78) = *v13;
          *((_QWORD *)a1 + 22) = v14;
          if ( ImmersiveMonitorHelper::ConnectToMonitor(v14, v11, *(struct tagPOINT *)(a1 + 72)) )
          {
            *((_QWORD *)a1 + 80) = v36;
            v15 = *v36;
            *((_QWORD *)a1 + 82) = *v36;
            *((_QWORD *)a1 + 24) = v15;
            *((_QWORD *)a1 + 84) = v36;
            *((_QWORD *)a1 + 86) = v15;
            *((_QWORD *)a1 + 88) = v15 + 43;
            v16 = (__int64 (***)(void))v15[43];
            *((_QWORD *)a1 + 90) = v16;
            v17 = *v16;
            *((_QWORD *)a1 + 116) = *v16;
            v17 += 13;
            *((_QWORD *)a1 + 118) = v17;
            v18 = *v17;
            *((_QWORD *)a1 + 120) = v18;
            v19 = v18();
            a1[336] = v19;
            XamlLauncher::PublishLauncherVisibilityState(v15, v19);
          }
        }
        *((_QWORD *)a1 + 92) = v4;
        v20 = (__int64)*v4;
        *((_QWORD *)a1 + 94) = v20;
        v20 += 24LL;
        *((_QWORD *)a1 + 96) = v20;
        *((_QWORD *)a1 + 28) = v20;
        *((_QWORD *)a1 + 122) = v9;
        *((_QWORD *)a1 + 26) = v9;
        v21 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                v8 + 1024,
                a1 + 80);
        *((_QWORD *)a1 + 44) = v21;
        v22 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
                v21,
                a1 + 88);
        *((_QWORD *)a1 + 46) = v22;
        v23 = anonymous_namespace_::ContextToLauncherShowMethod(v22);
        *((_DWORD *)a1 + 96) = v23;
        started = XamlLauncher::ShowStartView(v20, v23, 0);
        *((_DWORD *)a1 + 100) = started;
        *((_DWORD *)a1 + 26) = started;
        *((_QWORD *)a1 + 36) = retaddr;
        if ( started < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x661,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)started,
            v31);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 11, v25, v26, v27);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 80));
        v28 = v8 + 1024;
        *((_QWORD *)a1 + 98) = v28;
        *((_QWORD *)a1 + 30) = v28;
        LOBYTE(v29) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v28,
          v29);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        winrt::com_ptr<XamlLauncher>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 96);
        v2 = a1;
        goto LABEL_14;
      case 5:
        winrt::com_ptr<XamlLauncher>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_14:
        *((_QWORD *)a1 + 54) = a1 + 1;
        *((_QWORD *)a1 + 100) = a1 + 1025;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 1025);
        *((_QWORD *)a1 + 102) = a1 + 10;
        v30 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 416) = v30;
        if ( v30 )
        {
          *((_QWORD *)a1 + 106) = 1041LL;
          *((_QWORD *)a1 + 34) = 1041LL;
          *((_QWORD *)v2 + 32) = a1;
          *((_QWORD *)a1 + 126) = a1 + 1;
          *((_QWORD *)a1 + 124) = a1 + 10;
          operator delete(a1);
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
