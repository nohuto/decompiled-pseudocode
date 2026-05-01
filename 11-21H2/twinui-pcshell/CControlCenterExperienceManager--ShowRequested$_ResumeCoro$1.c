/*
 * XREFs of CControlCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801958E0
 * Callers:
 *     CControlCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801957EC (CControlCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z @ 0x18000A170 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE@Z.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW40Shell@UI@WindowsUdk@3@XZ @ 0x18034E888 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ??$Start@W4InvokeMethod@ControlCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@SA?AV012@$$QEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x18035287C (--$Start@W4InvokeMethod@ControlCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchCont.c)
 *     ??1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ @ 0x180353538 (--1LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAA@XZ.c)
 *     ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180353E88 (-InputDeviceKindToInputTypeConverter@@YA-AW4InputType@ControlCenterUITelemetry@@W4InputDeviceKin.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803549EC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?copy_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceManager@@@Z @ 0x180354F84 (-copy_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXPEAVCControlCenterExperienceM.c)
 *     ?release_ref@?$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x1803554EC (-release_ref@-$com_ptr@VCControlCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall CControlCenterExperienceManager::ShowRequested__ResumeCoro_1(_QWORD *a1)
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
  int v13; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_9;
      case 2:
        a1[70] = (char *)a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          (char *)a1 + 825,
          a1 + 2);
        a1[3] = 0LL;
        a1[72] = (char *)a1 + 1;
        v3 = *(_QWORD *)((char *)a1 + 817);
        winrt::com_ptr<CControlCenterExperienceManager>::copy_ref(a1 + 3, v3);
        a1[4] = v3 + 680;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 4) )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
          a1 + 4,
          a1);
        return;
      case 4:
LABEL_6:
        winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 4);
        v4 = a1[70] + 816LL;
        a1[94] = v4;
        a1[56] = v4;
        v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
               v4,
               a1 + 6);
        a1[54] = v5;
        v6 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v5);
        *((_DWORD *)a1 + 136) = v6;
        *((_DWORD *)a1 + 10) = v6;
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 6));
        v7 = InputDeviceKindToInputTypeConverter(v6);
        *((_DWORD *)a1 + 148) = v7;
        *((_DWORD *)a1 + 14) = v7;
        *((_DWORD *)a1 + 15) = 2;
        *((_DWORD *)a1 + 16) = 2;
        ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::Start<enum ControlCenterUITelemetry::InvokeMethod,enum ControlCenterUITelemetry::InputType &,enum ControlCenterUITelemetry::StateOnInvoke>(a1 + 10);
        v8 = (CControlCenterExperienceManager **)(a1[72] + 816LL);
        a1[76] = v8;
        v9 = *v8;
        a1[78] = *v8;
        a1[51] = v9;
        v9 = (CControlCenterExperienceManager *)((char *)v9 + 32);
        a1[80] = v9;
        a1[66] = v9;
        v10 = CControlCenterExperienceManager::Show(v9, 0LL, 0, 1, 1u, 1u);
        *((_DWORD *)a1 + 116) = v10;
        a1[52] = retaddr;
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x367,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v10,
            v13);
        wil::ActivityBase<ControlCenterLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 10);
        a1[96] = v4;
        a1[60] = v4;
        LOBYTE(v11) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v4,
          v11);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 2);
        ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1::~LaunchControlCenterV1((ControlCenterUITelemetry::ControlCenterTelemetry::LaunchControlCenterV1 *)(a1 + 10));
        winrt::com_ptr<CControlCenterExperienceManager>::release_ref(a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 2));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 50);
        goto LABEL_9;
      case 5:
        winrt::com_ptr<CControlCenterExperienceManager>::release_ref(a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 2));
LABEL_9:
        a1[72] = (char *)a1 + 1;
        a1[82] = (char *)a1 + 817;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_((char *)a1 + 817);
        a1[84] = (char *)a1 + 10;
        v12 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 344) = v12;
        if ( v12 )
        {
          a1[88] = 833LL;
          a1[64] = 833LL;
          a1[62] = a1;
          a1[100] = (char *)a1 + 1;
          a1[98] = (char *)a1 + 10;
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
