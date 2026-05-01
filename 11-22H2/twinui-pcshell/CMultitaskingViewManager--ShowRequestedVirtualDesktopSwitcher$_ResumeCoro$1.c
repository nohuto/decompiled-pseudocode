/*
 * XREFs of CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0
 * Callers:
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18020F9DC (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_InitCoro$2.c)
 * Callees:
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B420 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BBB0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?GetDeferral@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065908 (-GetDeferral@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellVie.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ?Result@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x18006D1B4 (-Result@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequ.c)
 *     ?Complete@?$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D4F0 (-Complete@-$consume_Windows_Foundation_IDeferral@UIDeferral@Foundation@Windows@winrt@@@impl@winr.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006D9B8 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?InputDeviceKind@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180072E48 (-InputDeviceKind@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z @ 0x180140060 (-copy_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXPEAVCMultitaskingViewManager@@@Z.c)
 *     ?release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x1801411F0 (-release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D5232 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?InvocationPoint@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D5284 (-InvocationPoint@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?InvokerWindowId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802D52C8 (-InvokerWindowId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shel.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_16_::_parameters_::__parameters_ @ 0x180416844 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync_--_16_.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1805537F0 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
void __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r13
  int IsMultitaskingViewVisible; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  _QWORD *v9; // r12
  __int64 *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, GUID *, GUID *); // rbx
  int v15; // eax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, GUID *, GUID *); // rbx
  int v18; // eax
  unsigned int v19; // edi
  __int64 *v20; // rax
  int v21; // ebx
  int v22; // ebx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  bool v26; // bl
  int v27; // eax
  int MultitaskingView; // eax
  int v29; // eax
  int v30; // [rsp+20h] [rbp-B8h]
  HWND hWndFrom; // [rsp+38h] [rbp-A0h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 *v34; // [rsp+F8h] [rbp+20h]

  try
  {
    if ( (unsigned __int16)(*(_WORD *)(a1 + 8) + 1) > 6u )
    {
LABEL_37:
      __debugbreak();
    }
    else
    {
      switch ( *(_WORD *)(a1 + 8) )
      {
        case 0xFFFF:
        case 3:
          goto LABEL_35;
        case 0:
        case 1:
          goto LABEL_37;
        case 2:
          *(_QWORD *)(a1 + 160) = a1 + 9;
          winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::GetDeferral(
            (__int64 *)(a1 + 185),
            (_QWORD *)(a1 + 16));
          *(_QWORD *)(a1 + 24) = 0LL;
          v1 = *(_QWORD *)(a1 + 177);
          winrt::com_ptr<CMultitaskingViewManager>::copy_ref((volatile int **)(a1 + 24), (volatile int *)v1);
          v3 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
                 v2,
                 a1 + 40,
                 (__int64 *)(v1 + 464));
          *(_QWORD *)(a1 + 32) = v3;
          if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
            goto LABEL_7;
          *(_WORD *)(a1 + 8) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
            v3,
            a1);
          return;
        case 4:
LABEL_7:
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(a1 + 32));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
          *(_DWORD *)(a1 + 64) = 0;
          v4 = *(_QWORD *)(a1 + 177);
          IsMultitaskingViewVisible = CMultitaskingViewManager::IsMultitaskingViewVisible(v4, 2LL, a1 + 64);
          if ( IsMultitaskingViewVisible < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x454,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)IsMultitaskingViewVisible,
              v30);
          *(_DWORD *)(a1 + 68) = 0;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
            1u,
            v6,
            v7);
          v8 = CMultitaskingViewManager::IsMultitaskingViewVisible(v4, 4LL, a1 + 68);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x459,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)(unsigned int)v8,
              v30);
          if ( !*(_DWORD *)(a1 + 64) && !*(_DWORD *)(a1 + 68) && !*(_BYTE *)(v4 + 480) )
          {
            v9 = (_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = 0LL;
            v10 = (__int64 *)(*(_QWORD *)(a1 + 160) + 176LL);
            v34 = v10;
            v11 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v10,
                    (_QWORD *)(a1 + 80));
            hWndFrom = (HWND)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvokerWindowId(v11);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
            if ( hWndFrom )
            {
              v12 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                      v10,
                      (_QWORD *)(a1 + 88));
              winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InvocationPoint(
                v12,
                a1 + 96);
              winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 88));
              *(_DWORD *)(a1 + 104) = (int)*(float *)(a1 + 96);
              *(_DWORD *)(a1 + 108) = (int)*(float *)(a1 + 100);
              MapWindowPoints(hWndFrom, 0LL, (LPPOINT)(a1 + 104), 1u);
              v13 = *(_QWORD *)(v4 + 240);
              v14 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, GUID *))(*(_QWORD *)v13 + 96LL);
              winrt::com_ptr<JointResize>::release_ref(a1 + 72);
              v30 = a1 + 72;
              v15 = v14(
                      v13,
                      a1 + 104,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
              if ( v15 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x46B,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v15);
            }
            if ( !*v9 )
            {
              v16 = *(_QWORD *)(v4 + 240);
              v17 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *))(*(_QWORD *)v16 + 72LL);
              winrt::com_ptr<JointResize>::release_ref(a1 + 72);
              v30 = a1 + 72;
              v18 = v17(
                      v16,
                      0LL,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                      &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
              if ( v18 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x471,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v18,
                  v30);
            }
            v19 = 0;
            v20 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                    v34,
                    (_QWORD *)(a1 + 112));
            v21 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::InputDeviceKind(v20);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 112));
            v22 = v21 - 2;
            if ( v22 )
            {
              if ( v22 == 1 )
              {
                v19 = 4;
                v23 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
                        v34,
                        (_QWORD *)(a1 + 120));
                v24 = winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
                        v23,
                        a1 + 128);
                v26 = winrt::operator==(v24, (__int64)L"FlyOut.TakeFocus", v25);
                winrt::hstring::~hstring((void **)(a1 + 128));
                winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 120));
                if ( v26 )
                  v19 = 6;
              }
            }
            else
            {
              v19 = 1;
            }
            *(_QWORD *)(a1 + 136) = 0LL;
            winrt::com_ptr<JointResize>::release_ref(a1 + 136);
            if ( (int)CMultitaskingViewManager::GetMultitaskingView(
                        v4,
                        0x10u,
                        (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                        (_QWORD *)(a1 + 136)) < 0 )
            {
              *(_QWORD *)(a1 + 144) = 0LL;
              winrt::com_ptr<JointResize>::release_ref(a1 + 144);
              MultitaskingView = CMultitaskingViewManager::CreateMultitaskingView(
                                   v4,
                                   0x10u,
                                   (__int64)&GUID_1be71764_e771_4442_b78f_eda2c7f067f3,
                                   (int)a1 + 144);
              if ( MultitaskingView < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x48C,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)MultitaskingView,
                  v30);
              v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 144) + 48LL))(
                      *(_QWORD *)(a1 + 144),
                      *v9,
                      v19);
              if ( v29 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x490,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v29);
              winrt::com_ptr<JointResize>::release_ref(a1 + 144);
            }
            else
            {
              v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 48LL))(
                      *(_QWORD *)(a1 + 136),
                      *v9,
                      v19);
              if ( v27 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x487,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
                  (const char *)(unsigned int)v27);
            }
            winrt::com_ptr<JointResize>::release_ref(a1 + 136);
            winrt::com_ptr<JointResize>::release_ref(a1 + 72);
          }
          winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Result((_QWORD *)(*(_QWORD *)(a1 + 160) + 176LL));
          winrt::impl::consume_Windows_Foundation_IDeferral<winrt::Windows::Foundation::IDeferral>::Complete((_QWORD *)(a1 + 16));
          winrt::com_ptr<CMultitaskingViewManager>::release_ref((_QWORD *)(a1 + 24));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 152);
          goto LABEL_35;
        case 5:
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 40);
          winrt::com_ptr<CMultitaskingViewManager>::release_ref((_QWORD *)(a1 + 24));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 16));
LABEL_35:
          winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync_::_16_::_parameters_::__parameters_(a1 + 177);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1);
          break;
      }
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
