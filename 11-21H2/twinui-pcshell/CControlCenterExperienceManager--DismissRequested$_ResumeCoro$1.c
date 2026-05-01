/*
 * XREFs of CControlCenterExperienceManager::DismissRequested$_ResumeCoro$1 @ 0x180194C00
 * Callers:
 *     CControlCenterExperienceManager::DismissRequested$_InitCoro$2 @ 0x180194B10 (CControlCenterExperienceManager--DismissRequested$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW40Shell@UI@WindowsUdk@3@XZ @ 0x18034E844 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOption.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F4D4 (-Options@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewReq.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ??$Start@W4DismissMethod@ControlCenterUITelemetry@@AEAW4InputType@2@@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4DismissMethod@2@AEAW4InputType@2@@Z @ 0x180352824 (--$Start@W4DismissMethod@ControlCenterUITelemetry@@AEAW4InputType@2@@DismissControlCenterV1@Cont.c)
 *     ??1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x18035350C (--1DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180353E88 (-InputDeviceKindToInputTypeConverter@@YA-AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKin.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803549EC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?copy_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceManager@@@Z @ 0x180354F84 (-copy_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceM.c)
 *     ?release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1803554EC (-release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall CControlCenterExperienceManager::DismissRequested__ResumeCoro_1(char *a1)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r12d
  int v7; // eax
  CControlCenterExperienceManager **v8; // rax
  CControlCenterExperienceManager *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int16 v12; // ax
  int v13; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    LOWORD(v13) = *((_WORD *)a1 + 4);
    switch ( (__int16)v13 )
    {
      case -1:
      case 3:
        goto LABEL_9;
      case 2:
        *((_QWORD *)a1 + 68) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 809,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 70) = a1 + 1;
        v3 = *(_QWORD *)(a1 + 801);
        winrt::com_ptr<CControlCenterExperienceManager>::copy_ref(a1 + 24, v3);
        *((_QWORD *)a1 + 4) = v3 + 680;
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
        v4 = *((_QWORD *)a1 + 68) + 800LL;
        *((_QWORD *)a1 + 92) = v4;
        *((_QWORD *)a1 + 54) = v4;
        v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
               v4,
               a1 + 48);
        *((_QWORD *)a1 + 52) = v5;
        v6 = winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::InputDeviceKind(v5);
        *((_DWORD *)a1 + 132) = v6;
        *((_DWORD *)a1 + 10) = v6;
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 48));
        v7 = InputDeviceKindToInputTypeConverter(v6);
        *((_DWORD *)a1 + 144) = v7;
        *((_DWORD *)a1 + 14) = v7;
        *((_DWORD *)a1 + 15) = 2;
        ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::Start<enum ControlCenterUITelemetry::DismissMethod,enum ControlCenterUITelemetry::InputType &>(a1 + 64);
        v8 = (CControlCenterExperienceManager **)(*((_QWORD *)a1 + 70) + 800LL);
        *((_QWORD *)a1 + 74) = v8;
        v9 = *v8;
        *((_QWORD *)a1 + 76) = *v8;
        *((_QWORD *)a1 + 49) = v9;
        v9 = (CControlCenterExperienceManager *)((char *)v9 + 32);
        *((_QWORD *)a1 + 78) = v9;
        *((_QWORD *)a1 + 64) = v9;
        v10 = CControlCenterExperienceManager::Hide(v9, 0LL, 0);
        *((_DWORD *)a1 + 112) = v10;
        *((_QWORD *)a1 + 50) = retaddr;
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x37D,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v10,
            v13);
        wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 64);
        *((_QWORD *)a1 + 94) = v4;
        *((_QWORD *)a1 + 58) = v4;
        LOBYTE(v11) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v4,
          v11);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1::~DismissControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::DismissControlCenterV1 *)(a1 + 64));
        winrt::com_ptr<CControlCenterExperienceManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 384);
        goto LABEL_9;
      case 5:
        winrt::com_ptr<CControlCenterExperienceManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_9:
        *((_QWORD *)a1 + 70) = a1 + 1;
        *((_QWORD *)a1 + 80) = a1 + 801;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 801);
        *((_QWORD *)a1 + 82) = a1 + 10;
        v12 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 336) = v12;
        if ( v12 )
        {
          *((_QWORD *)a1 + 86) = 817LL;
          *((_QWORD *)a1 + 62) = 817LL;
          *((_QWORD *)a1 + 60) = a1;
          *((_QWORD *)a1 + 98) = a1 + 1;
          *((_QWORD *)a1 + 96) = a1 + 10;
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
