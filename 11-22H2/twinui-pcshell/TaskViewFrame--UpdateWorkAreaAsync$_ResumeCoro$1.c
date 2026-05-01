/*
 * XREFs of TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x18028D880
 * Callers:
 *     TaskViewFrame::UpdateWorkAreaAsync$_InitCoro$2 @ 0x18028D758 (TaskViewFrame--UpdateWorkAreaAsync$_InitCoro$2.c)
 * Callees:
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18001A360 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ??$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z @ 0x18001C0F4 (--$WorkAreaUpdate@AEAMAEAMMMAEAN@XamlSwitcherTelemetry@@SAXAEAM0$$QEAM1AEAN@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x18004ED80 (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@e.c)
 *     ?StaticSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005C310 (-StaticSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1800628E8 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncActi.c)
 *     ?ScreenPointToImmersiveMonitorClient@@YA?AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123@@Z @ 0x18006D3E8 (-ScreenPointToImmersiveMonitorClient@@YA-AVPoint@Foundation@Windows@@PEAUIImmersiveMonitor@@V123.c)
 *     ?DisplayArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006F618 (-DisplayArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@Win.c)
 *     ??$await_transform@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@2@@Z @ 0x180070410 (--$await_transform@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@Window_ea_180070410.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180072A3C (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTaskViewFrame@@PEAUIImmersiveMonitor@@@experimental@std@@@experimental@std@@@Z @ 0x180073E04 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVTa.c)
 *     ??1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ @ 0x180085B0C (--1IVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?await_resume@?$notify_awaiter@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800ADC00 (-await_resume@-$notify_awaiter@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@Windows.c)
 *     ?GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801886E8 (-GetCurrentAsync@DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ??4DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1801BC92C (--4DisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x1801BF87C (--0Point@Foundation@Windows@@QEAA@MM@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall TaskViewFrame::UpdateWorkAreaAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r15
  __int64 *v3; // rsi
  __int64 v4; // r14
  __int64 CurrentAsync; // rax
  winrt::Windows::Foundation::IUnknown *v6; // rax
  float *v7; // r13
  float *v8; // r12
  double v9; // xmm0_8
  Windows::Foundation::Point *v10; // rax
  float *v11; // r13
  float *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  float *v15; // [rsp+98h] [rbp+10h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_10;
    case 2:
      v3 = (__int64 *)(a1 + 16);
      if ( (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 265) + 40LL))(*(_QWORD *)(a1 + 265), a1 + 16) < 0 )
        goto LABEL_9;
      v4 = *(_QWORD *)(a1 + 257);
      if ( *(_QWORD *)(v4 + 176) )
        goto LABEL_8;
      CurrentAsync = winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::GetCurrentAsync(a1 + 24);
      *(_QWORD *)(a1 + 240) = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>(
                                a1 - 96,
                                a1 + 32,
                                CurrentAsync);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
      {
LABEL_7:
        v6 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>::await_resume(
                                                       *(_QWORD *)(a1 + 240),
                                                       a1 + 64);
        v4 = *(_QWORD *)(a1 + 257);
        winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection::operator=(
          (winrt::Windows::Foundation::IUnknown *)(v4 + 176),
          v6);
        winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection::~IVirtualDesktopCollection((winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *)(a1 + 64));
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 24));
        v3 = (__int64 *)(a1 + 16);
LABEL_8:
        winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
          (__int64 *)(v4 + 176),
          (_QWORD *)(a1 + 72),
          *v3);
        *(_OWORD *)(v4 + 48) = *winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                                  (_QWORD *)(a1 + 72),
                                  (_OWORD *)(a1 + 80));
        v15 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                         (_QWORD *)(a1 + 72),
                         (_OWORD *)(a1 + 96));
        v7 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                        (_QWORD *)(a1 + 72),
                        (_OWORD *)(a1 + 112));
        v8 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                        (_QWORD *)(a1 + 72),
                        (_OWORD *)(a1 + 128));
        v9 = (float)((float)(v7[3] + v15[1])
                   - (float)(*((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::StaticSafeWorkArea(
                                          (_QWORD *)(a1 + 72),
                                          (_OWORD *)(a1 + 144))
                             + 3)
                           + v8[1]));
        *(double *)(v4 + 192) = v9;
        v10 = Windows::Foundation::Point::Point((Windows::Foundation::Point *)(a1 + 160), 0.0, v9);
        *(_DWORD *)(a1 + 176) = *(_DWORD *)v10;
        *(_DWORD *)(a1 + 180) = *((_DWORD *)v10 + 1);
        *(double *)(v4 + 184) = ScreenPointToImmersiveMonitorClient(
                                  (float *)(a1 + 168),
                                  *(__int64 **)(v4 + 16),
                                  *(_QWORD *)(a1 + 176))[1];
        v11 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                         (_QWORD *)(a1 + 72),
                         (_OWORD *)(a1 + 184))
            + 1;
        v12 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                         (_QWORD *)(a1 + 72),
                         (_OWORD *)(a1 + 200));
        XamlSwitcherTelemetry::WorkAreaUpdate<float &,float &,float,float,double &>(
          (float *)(v4 + 60),
          (float *)(v4 + 52),
          v12 + 3,
          v11,
          (double *)(v4 + 184));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 72));
LABEL_9:
        v13 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
                a1 - 96,
                (_QWORD *)(a1 + 224));
        *(_QWORD *)(a1 + 216) = v13;
        *v2 = 0;
        if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(
                v13,
                v14) )
        {
LABEL_10:
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>(a1 - 96);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 96));
        }
      }
      else
      {
        *v2 = 4;
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,TaskViewFrame *,IImmersiveMonitor *>::promise_type>();
      }
      return;
    case 4:
      goto LABEL_7;
    case 5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 32);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 24));
      goto LABEL_10;
    default:
      __debugbreak();
      return;
  }
}
