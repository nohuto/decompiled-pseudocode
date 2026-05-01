/*
 * XREFs of XamlLauncher::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801AAE40
 * Callers:
 *     XamlLauncher::LauncherDismissRequested$_InitCoro$2 @ 0x1801AAD50 (XamlLauncher--LauncherDismissRequested$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180042F50 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF04 (-release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z @ 0x18017D3C4 (-copy_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXPEAVXamlLauncher@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F4D4 (-Options@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewReq.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x18044AAE4 (-Context@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@.c)
 *     _anonymous_namespace_::ContextToLauncherDismissMethod @ 0x18044AB38 (_anonymous_namespace_--ContextToLauncherDismissMethod.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
void __fastcall XamlLauncher::LauncherDismissRequested__ResumeCoro_1(char *a1)
{
  volatile int *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int16 v18; // ax
  int v19; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    LOWORD(v19) = *((_WORD *)a1 + 4);
    switch ( (__int16)v19 )
    {
      case -1:
      case 3:
        goto LABEL_11;
      case 2:
        *((_QWORD *)a1 + 30) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 553,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 32) = a1 + 1;
        v3 = *(volatile int **)(a1 + 545);
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
        v6 = (__int64 *)(*((_QWORD *)a1 + 32) + 544LL);
        *((_QWORD *)a1 + 34) = v6;
        v7 = (__int64 *)*v6;
        *((_QWORD *)a1 + 36) = *v6;
        v7 += 43;
        *((_QWORD *)a1 + 38) = v7;
        v8 = *v7;
        *((_QWORD *)a1 + 40) = v8;
        *((_QWORD *)a1 + 9) = v8;
        *((_QWORD *)a1 + 22) = retaddr;
        if ( !v8 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x670,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)0x80070490LL,
            v19);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
          0,
          v4,
          v5);
        *((_QWORD *)a1 + 54) = v6;
        v9 = *v6;
        *((_QWORD *)a1 + 56) = *v6;
        v9 += 24LL;
        *((_QWORD *)a1 + 58) = v9;
        *((_QWORD *)a1 + 14) = v9;
        v10 = *((_QWORD *)a1 + 30) + 544LL;
        *((_QWORD *)a1 + 60) = v10;
        *((_QWORD *)a1 + 10) = v10;
        v11 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
                v10,
                a1 + 40);
        *((_QWORD *)a1 + 24) = v11;
        v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::Context(
                v11,
                a1 + 48);
        *((_QWORD *)a1 + 26) = v12;
        *((_DWORD *)a1 + 24) = anonymous_namespace_::ContextToLauncherDismissMethod(v12);
        v13 = XamlLauncher::Dismiss(v9);
        *((_DWORD *)a1 + 56) = v13;
        *((_DWORD *)a1 + 16) = v13;
        *((_QWORD *)a1 + 23) = retaddr;
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x68C,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
            (const char *)(unsigned int)v13,
            v19);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 6, v14, v15, v16);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 40));
        *((_QWORD *)a1 + 62) = v10;
        *((_QWORD *)a1 + 16) = v10;
        LOBYTE(v17) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v10,
          v17);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        winrt::com_ptr<XamlLauncher>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 56);
        goto LABEL_11;
      case 5:
        winrt::com_ptr<XamlLauncher>::release_ref((_QWORD *)a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_11:
        *((_QWORD *)a1 + 30) = a1 + 9;
        *((_QWORD *)a1 + 42) = a1 + 553;
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 553));
        *((_QWORD *)a1 + 44) = a1 + 10;
        v18 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 184) = v18;
        if ( v18 )
        {
          *((_QWORD *)a1 + 48) = 561LL;
          *((_QWORD *)a1 + 20) = 561LL;
          *((_QWORD *)a1 + 18) = a1;
          *((_QWORD *)a1 + 66) = a1 + 9;
          *((_QWORD *)a1 + 64) = a1 + 10;
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
