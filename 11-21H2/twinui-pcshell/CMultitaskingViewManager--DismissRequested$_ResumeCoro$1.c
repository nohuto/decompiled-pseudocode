/*
 * XREFs of CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x1801B1F60
 * Callers:
 *     CMultitaskingViewManager::DismissRequested$_InitCoro$2 @ 0x1801B1E6C (CMultitaskingViewManager--DismissRequested$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052CF0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x18017D37C (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x18049AA90 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x18049B668 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall CMultitaskingViewManager::DismissRequested__ResumeCoro_1(__int64 a1)
{
  volatile int *v1; // rbx
  __int64 *v2; // rbx
  __int64 v3; // rcx
  int IsMultitaskingViewVisible; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int MultitaskingView; // eax
  __int64 (**v8)(void); // rax
  __int64 (*v9)(void); // rax
  int v10; // eax
  __int64 v11; // rcx
  __int16 v12; // ax
  int v13; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (***v16)(void); // [rsp+80h] [rbp+18h]

  try
  {
    LOWORD(v13) = *(_WORD *)(a1 + 8);
    switch ( (__int16)v13 )
    {
      case -1:
      case 3:
        goto LABEL_15;
      case 2:
        *(_QWORD *)(a1 + 224) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 521,
          a1 + 16);
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 240) = a1 + 1;
        v1 = *(volatile int **)(a1 + 513);
        winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile signed __int32 **)(a1 + 24), v1);
        *(_QWORD *)(a1 + 32) = v1 + 114;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
          goto LABEL_6;
        *(_WORD *)(a1 + 8) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
          a1 + 32,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
        *(_DWORD *)(a1 + 40) = 0;
        v2 = (__int64 *)(*(_QWORD *)(a1 + 240) + 512LL);
        *(_QWORD *)(a1 + 256) = v2;
        v3 = *v2;
        *(_QWORD *)(a1 + 272) = *v2;
        *(_QWORD *)(a1 + 112) = v3;
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v3, 2LL);
        *(_DWORD *)(a1 + 96) = IsMultitaskingViewVisible;
        *(_DWORD *)(a1 + 64) = IsMultitaskingViewVisible;
        *(_QWORD *)(a1 + 80) = retaddr;
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x431,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v13);
        if ( *(_DWORD *)(a1 + 40) )
        {
          *(_QWORD *)(a1 + 48) = 0LL;
          *(_QWORD *)(a1 + 288) = v2;
          v6 = *v2;
          *(_QWORD *)(a1 + 304) = *v2;
          *(_QWORD *)(a1 + 128) = v6;
          MultitaskingView = CMultitaskingViewManager::GetMultitaskingView(
                               v6,
                               2u,
                               (__int64)&GUID_389221b7_bf28_4d25_9501_b4491d822be1,
                               (_QWORD *)(a1 + 48));
          *(_DWORD *)(a1 + 192) = MultitaskingView;
          if ( MultitaskingView >= 0 )
          {
            v16 = *(__int64 (****)(void))(a1 + 48);
            v8 = *v16;
            *(_QWORD *)(a1 + 432) = *v16;
            v8 += 8;
            *(_QWORD *)(a1 + 448) = v8;
            v9 = *v8;
            *(_QWORD *)(a1 + 464) = v9;
            v10 = v9();
            *(_DWORD *)(a1 + 208) = v10;
            *(_DWORD *)(a1 + 72) = v10;
            *(_QWORD *)(a1 + 88) = retaddr;
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x438,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v10);
          }
          if ( *(_QWORD *)(a1 + 48) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 48));
        }
        v11 = *(_QWORD *)(a1 + 224) + 512LL;
        *(_QWORD *)(a1 + 320) = v11;
        *(_QWORD *)(a1 + 144) = v11;
        LOBYTE(v5) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v11,
          v5);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 56);
        goto LABEL_15;
      case 5:
        winrt::com_ptr<CMultitaskingViewManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_15:
        *(_QWORD *)(a1 + 240) = a1 + 1;
        *(_QWORD *)(a1 + 336) = a1 + 513;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 513);
        *(_QWORD *)(a1 + 352) = a1 + 10;
        v12 = *(_WORD *)(a1 + 10);
        *(_WORD *)(a1 + 368) = v12;
        if ( v12 )
        {
          *(_QWORD *)(a1 + 384) = 529LL;
          *(_QWORD *)(a1 + 176) = 529LL;
          *(_QWORD *)(a1 + 160) = a1;
          *(_QWORD *)(a1 + 496) = a1 + 1;
          *(_QWORD *)(a1 + 480) = a1 + 10;
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
