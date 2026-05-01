/*
 * XREFs of MiniSearchExperienceManager::LauncherDismissRequested$_ResumeCoro$1 @ 0x1801A76E0
 * Callers:
 *     MiniSearchExperienceManager::LauncherDismissRequested$_InitCoro$2 @ 0x1801A75EC (MiniSearchExperienceManager--LauncherDismissRequested$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_ @ 0x18034C6DC (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_14_--_parameters_--__parame.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x18034E02C (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDeferral@Foundation@Windows@3@XZ @ 0x18034E5B8 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewReque.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18034F788 (-Result@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedE.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?HandleLauncherDismissRequested@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A18E0 (-HandleLauncherDismissRequested@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?copy_ref@?$com_ptr@VIMiniSearch@@@winrt@@AEAAXPEAVIMiniSearch@@@Z @ 0x1803A4AC4 (-copy_ref@-$com_ptr@VIMiniSearch@@@winrt@@AEAAXPEAVIMiniSearch@@@Z.c)
 *     ?release_ref@?$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ @ 0x1803A4CF8 (-release_ref@-$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
void __fastcall MiniSearchExperienceManager::LauncherDismissRequested__ResumeCoro_1(_QWORD *a1)
{
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *v3; // rsi
  char *v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdx
  MiniSearchExperienceManager **v7; // rcx
  MiniSearchExperienceManager *v8; // rcx
  __int64 v9; // rcx
  __int16 v10; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_9;
      case 2:
        a1[12] = (char *)a1 + 9;
        v3 = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 2);
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          (char *)a1 + 313,
          a1 + 2);
        v4 = (char *)(a1 + 3);
        a1[3] = 0LL;
        a1[14] = (char *)a1 + 1;
        v5 = *(_QWORD *)((char *)a1 + 305);
        winrt::com_ptr<IMiniSearch>::copy_ref(a1 + 3, v5);
        if ( !a1[3] )
          goto LABEL_8;
        a1[4] = v5 + 232;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 4) )
        {
LABEL_7:
          winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 4);
          v7 = (MiniSearchExperienceManager **)(a1[14] + 304LL);
          a1[16] = v7;
          v8 = *v7;
          a1[18] = v8;
          MiniSearchExperienceManager::HandleLauncherDismissRequested(v8);
          v3 = (winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 2);
          v4 = (char *)(a1 + 3);
LABEL_8:
          v9 = a1[12] + 304LL;
          a1[32] = v9;
          a1[6] = v9;
          LOBYTE(v6) = 1;
          winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
            v9,
            v6);
          winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(v3);
          winrt::com_ptr<IMiniSearch>::release_ref(v4);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2(v3);
          std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
            a1,
            a1 + 5);
LABEL_9:
          a1[14] = (char *)a1 + 1;
          a1[20] = (char *)a1 + 305;
          CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_((char *)a1 + 305);
          a1[22] = (char *)a1 + 10;
          v10 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 96) = v10;
          if ( v10 )
          {
            a1[26] = 321LL;
            a1[10] = 321LL;
            a1[8] = a1;
            a1[36] = (char *)a1 + 1;
            a1[34] = (char *)a1 + 10;
            operator delete(a1);
          }
        }
        else
        {
          *((_WORD *)a1 + 4) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
            a1 + 4,
            a1);
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        winrt::com_ptr<IMiniSearch>::release_ref(a1 + 3);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 2));
        goto LABEL_9;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception();
  }
}
