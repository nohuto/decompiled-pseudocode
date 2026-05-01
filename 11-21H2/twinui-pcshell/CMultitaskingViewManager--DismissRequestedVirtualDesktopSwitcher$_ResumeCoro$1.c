/*
 * XREFs of CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x1801B24B0
 * Callers:
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x1801B23B8 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180052CF0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114010 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VsUpdates@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180117A58 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAA_NW.c)
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
void __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  struct HINSTANCE__ *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  volatile int *v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  int IsMultitaskingViewVisible; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MultitaskingView; // eax
  __int64 (__fastcall **v13)(_QWORD, __int64); // rax
  __int64 (__fastcall *v14)(_QWORD, __int64); // rax
  int v15; // eax
  __int64 v16; // rcx
  __int16 v17; // ax
  int v18; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v21)(_QWORD, __int64); // [rsp+80h] [rbp+18h]

  try
  {
    LOWORD(v18) = *(_WORD *)(a1 + 8);
    v3 = &_ImageBase;
    switch ( (__int16)v18 )
    {
      case -1:
      case 3:
        goto LABEL_15;
      case 2:
        LOBYTE(v3) = 3;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::__private_IsEnabledPreCheck(
          (__int64)`wil::Feature<__WilFeatureTraits_Feature_TD>::GetImpl'::`2'::impl,
          (__int64)v3,
          a3);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VsUpdates>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_VsUpdates>::GetImpl'::`2'::impl,
          1u,
          v4,
          v5);
        *(_QWORD *)(a1 + 240) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 537,
          a1 + 16);
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 256) = a1 + 1;
        v6 = *(volatile int **)(a1 + 529);
        winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile signed __int32 **)(a1 + 24), v6);
        *(_QWORD *)(a1 + 32) = v6 + 114;
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
        v7 = (__int64 *)(*(_QWORD *)(a1 + 256) + 528LL);
        *(_QWORD *)(a1 + 272) = v7;
        v8 = *v7;
        *(_QWORD *)(a1 + 288) = *v7;
        *(_QWORD *)(a1 + 96) = v8;
        IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v8, 16LL);
        *(_DWORD *)(a1 + 192) = IsMultitaskingViewVisible;
        *(_DWORD *)(a1 + 64) = IsMultitaskingViewVisible;
        *(_QWORD *)(a1 + 80) = retaddr;
        if ( IsMultitaskingViewVisible < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x49B,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
            (const char *)(unsigned int)IsMultitaskingViewVisible,
            v18);
        if ( *(_DWORD *)(a1 + 40) )
        {
          *(_QWORD *)(a1 + 48) = 0LL;
          *(_QWORD *)(a1 + 304) = v7;
          v11 = *v7;
          *(_QWORD *)(a1 + 320) = *v7;
          *(_QWORD *)(a1 + 112) = v11;
          MultitaskingView = CMultitaskingViewManager::GetMultitaskingView(
                               v11,
                               0x10u,
                               (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                               (_QWORD *)(a1 + 48));
          *(_DWORD *)(a1 + 208) = MultitaskingView;
          if ( MultitaskingView >= 0 )
          {
            v21 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 48);
            v13 = *v21;
            *(_QWORD *)(a1 + 448) = *v21;
            v13 += 7;
            *(_QWORD *)(a1 + 464) = v13;
            v14 = *v13;
            *(_QWORD *)(a1 + 480) = v14;
            *(_QWORD *)(a1 + 128) = v14;
            v15 = v14(v21, 1LL);
            *(_DWORD *)(a1 + 224) = v15;
            *(_DWORD *)(a1 + 72) = v15;
            *(_QWORD *)(a1 + 88) = retaddr;
            if ( v15 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x4A2,
                (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                (const char *)(unsigned int)v15);
          }
          if ( *(_QWORD *)(a1 + 48) )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 48));
        }
        v16 = *(_QWORD *)(a1 + 240) + 528LL;
        *(_QWORD *)(a1 + 336) = v16;
        *(_QWORD *)(a1 + 144) = v16;
        LOBYTE(v10) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v16,
          v10);
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
        *(_QWORD *)(a1 + 256) = a1 + 1;
        *(_QWORD *)(a1 + 352) = a1 + 529;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 529);
        *(_QWORD *)(a1 + 368) = a1 + 10;
        v17 = *(_WORD *)(a1 + 10);
        *(_WORD *)(a1 + 384) = v17;
        if ( v17 )
        {
          *(_QWORD *)(a1 + 400) = 545LL;
          *(_QWORD *)(a1 + 176) = 545LL;
          *(_QWORD *)(a1 + 160) = a1;
          *(_QWORD *)(a1 + 512) = a1 + 1;
          *(_QWORD *)(a1 + 496) = a1 + 10;
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
