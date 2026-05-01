/*
 * XREFs of CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801935D0
 * Callers:
 *     CActionCenterExperienceManager::ShowRequested$_InitCoro$2 @ 0x1801934DC (CActionCenterExperienceManager--ShowRequested$_InitCoro$2.c)
 * Callees:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002F958 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ??$Start@W4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAW4InvokeMethod@2@AEAW4InputType@2@$$QEAW4StateOnInvoke@2@@Z @ 0x180348954 (--$Start@W4InvokeMethod@NotificationCenterUITelemetry@@AEAW4InputType@2@W4StateOnInvoke@2@@Launc.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ??1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x18034D300 (--1LaunchActionCenter@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AW40Shell@UI@WindowsUdk@3@XZ @ 0x18034E888 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InputDeviceKindToInputTypeConverter@@YA?AW4InputType@NotificationCenterUITelemetry@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18034E8CC (-InputDeviceKindToInputTypeConverter@@YA-AW4InputType@NotificationCenterUITelemetry@@W4InputDevi.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXPEAVCActionCenterExperienceManager@@@Z @ 0x180351038 (-copy_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXPEAVCActionCenterExperienceMan.c)
 *     ?release_ref@?$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ @ 0x180351794 (-release_ref@-$com_ptr@VCActionCenterExperienceManager@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1(char *a1)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // r12d
  int v7; // eax
  char **v8; // rcx
  char *v9; // rcx
  int v10; // eax
  DWORD v11; // edx
  __int64 v12; // rdx
  __int16 v13; // ax
  int v14; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    LOWORD(v14) = *((_WORD *)a1 + 4);
    switch ( (__int16)v14 )
    {
      case -1:
      case 3:
        goto LABEL_9;
      case 2:
        *((_QWORD *)a1 + 68) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 793,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 70) = a1 + 1;
        v3 = *(_QWORD *)(a1 + 785);
        winrt::com_ptr<CActionCenterExperienceManager>::copy_ref(a1 + 24, v3);
        *((_QWORD *)a1 + 4) = v3 + 848;
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
        v4 = *((_QWORD *)a1 + 68) + 784LL;
        *((_QWORD *)a1 + 90) = v4;
        *((_QWORD *)a1 + 56) = v4;
        v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
               v4,
               a1 + 48);
        *((_QWORD *)a1 + 54) = v5;
        v6 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v5);
        *((_DWORD *)a1 + 132) = v6;
        *((_DWORD *)a1 + 10) = v6;
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 48));
        v7 = InputDeviceKindToInputTypeConverter(v6);
        *((_DWORD *)a1 + 144) = v7;
        *((_DWORD *)a1 + 14) = v7;
        *((_DWORD *)a1 + 15) = 2;
        *((_DWORD *)a1 + 16) = 2;
        NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::Start<enum NotificationCenterUITelemetry::InvokeMethod,enum NotificationCenterUITelemetry::InputType &,enum NotificationCenterUITelemetry::StateOnInvoke>(a1 + 80);
        v8 = (char **)(*((_QWORD *)a1 + 70) + 784LL);
        *((_QWORD *)a1 + 74) = v8;
        v9 = *v8;
        *((_QWORD *)a1 + 76) = v9;
        v10 = CActionCenterExperienceManager::Show(v9);
        *((_DWORD *)a1 + 116) = v10;
        *((_DWORD *)a1 + 102) = v10;
        *((_QWORD *)a1 + 52) = retaddr;
        if ( v10 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x2E5,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v10,
            v14);
        wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
          (__int64)(a1 + 80),
          v11);
        *((_QWORD *)a1 + 92) = v4;
        *((_QWORD *)a1 + 60) = v4;
        LOBYTE(v12) = 1;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
          v4,
          v12);
        winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter::~LaunchActionCenter((NotificationCenterUITelemetry::NotificationCenterTelemetry::LaunchActionCenter *)(a1 + 80));
        winrt::com_ptr<CActionCenterExperienceManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 400);
        goto LABEL_9;
      case 5:
        winrt::com_ptr<CActionCenterExperienceManager>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
LABEL_9:
        *((_QWORD *)a1 + 70) = a1 + 1;
        *((_QWORD *)a1 + 78) = a1 + 785;
        CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 785);
        *((_QWORD *)a1 + 80) = a1 + 10;
        v13 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 328) = v13;
        if ( v13 )
        {
          *((_QWORD *)a1 + 84) = 801LL;
          *((_QWORD *)a1 + 64) = 801LL;
          *((_QWORD *)a1 + 62) = a1;
          *((_QWORD *)a1 + 96) = a1 + 1;
          *((_QWORD *)a1 + 94) = a1 + 10;
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
