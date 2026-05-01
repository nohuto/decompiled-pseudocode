/*
 * XREFs of MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1 @ 0x1801A7B20
 * Callers:
 *     MiniSearchExperienceManager::LauncherShowRequested$_InitCoro$2 @ 0x1801A7A2C (MiniSearchExperienceManager--LauncherShowRequested$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?Show@MiniSearchExperienceManager@@AEAAJ_N@Z @ 0x1801A8090 (-Show@MiniSearchExperienceManager@@AEAAJ_N@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
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
 *     ?copy_ref@?$com_ptr@VIMiniSearch@@@winrt@@AEAAXPEAVIMiniSearch@@@Z @ 0x1803A4AC4 (-copy_ref@-$com_ptr@VIMiniSearch@@@winrt@@AEAAXPEAVIMiniSearch@@@Z.c)
 *     ?release_ref@?$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ @ 0x1803A4CF8 (-release_ref@-$com_ptr@VIMiniSearch@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall MiniSearchExperienceManager::LauncherShowRequested__ResumeCoro_1(char *a1)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _BYTE **v5; // rax
  _BYTE *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  HWND v9; // r15
  HMONITOR v10; // rax
  _OWORD **v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  MiniSearchExperienceManager **v19; // rax
  MiniSearchExperienceManager *v20; // rcx
  __int64 v21; // rcx
  __int16 v22; // ax

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_14;
      case 2:
        *((_QWORD *)a1 + 38) = a1 + 9;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::GetDeferral(
          a1 + 713,
          a1 + 16);
        *((_QWORD *)a1 + 3) = 0LL;
        *((_QWORD *)a1 + 40) = a1 + 1;
        v3 = *(_QWORD *)(a1 + 705);
        winrt::com_ptr<IMiniSearch>::copy_ref(a1 + 24, v3);
        if ( !*((_QWORD *)a1 + 3) )
          goto LABEL_13;
        *((_QWORD *)a1 + 4) = v3 + 232;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
        {
LABEL_7:
          winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
          v5 = (_BYTE **)(*((_QWORD *)a1 + 40) + 704LL);
          *((_QWORD *)a1 + 42) = v5;
          v6 = *v5;
          *((_QWORD *)a1 + 44) = *v5;
          v6 += 149;
          *((_QWORD *)a1 + 46) = v6;
          LOBYTE(v5) = *v6;
          a1[384] = *v6;
          if ( !(_BYTE)v5 )
          {
            v7 = *((_QWORD *)a1 + 38) + 704LL;
            *((_QWORD *)a1 + 74) = v7;
            *((_QWORD *)a1 + 78) = v7;
            *((_QWORD *)a1 + 20) = v7;
            v8 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                   v7,
                   a1 + 48);
            *((_QWORD *)a1 + 18) = v8;
            v9 = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v8);
            *((_QWORD *)a1 + 34) = v9;
            *((_QWORD *)a1 + 5) = v9;
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 48));
            if ( v9 )
            {
              v10 = MonitorFromWindow(v9, 0);
              *((_QWORD *)a1 + 7) = v10;
              if ( v10 )
              {
                *((_DWORD *)a1 + 16) = 40;
                *(_OWORD *)(a1 + 68) = 0LL;
                *(_OWORD *)(a1 + 84) = 0LL;
                *((_DWORD *)a1 + 25) = 0;
                if ( GetMonitorInfoW(v10, (LPMONITORINFO)(a1 + 64)) )
                {
                  v11 = (_OWORD **)(*((_QWORD *)a1 + 40) + 704LL);
                  *((_QWORD *)a1 + 50) = v11;
                  v12 = *v11;
                  *((_QWORD *)a1 + 52) = *v11;
                  v12 = (_OWORD *)((char *)v12 + 88);
                  *((_QWORD *)a1 + 54) = v12;
                  *v12 = *(_OWORD *)(a1 + 68);
                }
              }
            }
            *((_QWORD *)a1 + 76) = v7;
            *((_QWORD *)a1 + 80) = v7;
            *((_QWORD *)a1 + 22) = v7;
            v13 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v7,
                    a1 + 112);
            *((_QWORD *)a1 + 36) = v13;
            v14 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
                    v13,
                    a1 + 120);
            *((_QWORD *)a1 + 32) = v14;
            v15 = winrt::operator==(v14, (__int64)L"FlyOut.TakeFocus");
            a1[104] = v15;
            winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1 + 15, v16, v17, v18);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 112));
            v19 = (MiniSearchExperienceManager **)(*((_QWORD *)a1 + 40) + 704LL);
            *((_QWORD *)a1 + 56) = v19;
            v20 = *v19;
            *((_QWORD *)a1 + 58) = *v19;
            *((_QWORD *)a1 + 24) = v20;
            MiniSearchExperienceManager::Show(v20, v15);
          }
LABEL_13:
          v21 = *((_QWORD *)a1 + 38) + 704LL;
          *((_QWORD *)a1 + 82) = v21;
          *((_QWORD *)a1 + 60) = v21;
          *((_QWORD *)a1 + 26) = v21;
          LOBYTE(v4) = 1;
          winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Result(
            v21,
            v4);
          winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete(a1 + 16);
          winrt::com_ptr<IMiniSearch>::release_ref(a1 + 24);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
          std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
            a1,
            a1 + 128);
LABEL_14:
          *((_QWORD *)a1 + 40) = a1 + 1;
          *((_QWORD *)a1 + 62) = a1 + 705;
          CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_14_::_parameters_::__parameters_(a1 + 705);
          *((_QWORD *)a1 + 64) = a1 + 10;
          v22 = *((_WORD *)a1 + 5);
          *((_WORD *)a1 + 264) = v22;
          if ( v22 )
          {
            *((_QWORD *)a1 + 68) = 721LL;
            *((_QWORD *)a1 + 30) = 721LL;
            *((_QWORD *)a1 + 28) = a1;
            *((_QWORD *)a1 + 86) = a1 + 1;
            *((_QWORD *)a1 + 84) = a1 + 10;
            operator delete(a1);
          }
        }
        else
        {
          *((_WORD *)a1 + 4) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>(
            a1 + 32,
            a1);
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        winrt::com_ptr<IMiniSearch>::release_ref(a1 + 24);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 16));
        goto LABEL_14;
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
