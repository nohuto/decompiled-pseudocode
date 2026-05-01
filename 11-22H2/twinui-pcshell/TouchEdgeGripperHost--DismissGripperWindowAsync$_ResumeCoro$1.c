/*
 * XREFs of TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0
 * Callers:
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_InitCoro$2 @ 0x18021F114 (TouchEdgeGripperHost--DismissGripperWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180050328 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x1801AA480 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801B0E64 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801B2828 (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1801B7C64 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021FC2C (-NotifyGripperDismissedIfNecessaryAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803F9E3C (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x18064E058 (-release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180656548 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouch_ea_180656548.c)
 *     ?DismissGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ @ 0x1806568F4 (-DismissGripperWindow@TouchEdgeGestureTelemetry@@SAXXZ.c)
 *     ?await_resume@?$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x180657480 (-await_resume@-$notify_awaiter@AEAUDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?get_weak@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VTouchEdgeGripperHost@@@2@XZ @ 0x180657564 (-get_weak@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QE.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ @ 0x180657584 (-release_ref@-$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ.c)
 *     ?Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z @ 0x18065B170 (-Dismiss@TouchEdgeGripperWindow@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  RTL_SRWLOCK *v3; // rsi
  __int64 Ptr; // rsi
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // r13
  TouchEdgeGripperWindow *v7; // rcx
  __int64 v8; // r8
  char v10; // [rsp+A8h] [rbp+10h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_23;
      case 2:
        TouchEdgeGestureTelemetry::DismissGripperWindow();
        v1 = *(_QWORD *)(a1 + 251);
        if ( !*(_BYTE *)(v1 + 24) )
          goto LABEL_22;
        winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_weak(v1, a1 + 16);
        *(_BYTE *)(a1 + 24) = 0;
        *(_QWORD *)(a1 + 32) = a1 + 24;
        if ( !winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        {
          *(_WORD *)(a1 + 8) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
            v2,
            a1);
          return;
        }
LABEL_7:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 40);
        if ( !*(_QWORD *)(a1 + 40) )
          goto LABEL_21;
        v3 = *(RTL_SRWLOCK **)(a1 + 251);
        wil::srwlock::lock_shared(v3 + 29, (RTL_SRWLOCK **)(a1 + 48));
        Ptr = (__int64)v3[4].Ptr;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 48));
        *(_QWORD *)(a1 + 112) = winrt::resume_on_signal(a1 + 56, Ptr, 0LL);
        if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(a1 + 112) )
        {
          *(_WORD *)(a1 + 8) = 6;
          ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std___experimental_std___Z((PVOID *)(a1 + 112));
          return;
        }
LABEL_11:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ((__int64 *)(a1 + 112));
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 56);
        v5 = *(_QWORD *)(a1 + 251);
        if ( !*(_BYTE *)(v5 + 24) )
          goto LABEL_21;
        *(_QWORD *)(a1 + 120) = v5 + 72;
        *(_DWORD *)(a1 + 128) = 0;
        *(_BYTE *)(a1 + 132) = 0;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready(a1 + 120)
          || (*(_WORD *)(a1 + 8) = 8,
              !(unsigned __int8)winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,TouchEdgeGripperHost *,bool>::promise_type>(
                                  a1 + 120,
                                  a1)) )
        {
LABEL_16:
          winrt::impl::notify_awaiter<winrt::Windows::System::DispatcherQueue &>::await_resume(a1 + 120);
          TouchEdgeGestureTelemetry::WatchCurrentThread(
            (wil::ActivityThreadWatcher *)(a1 + 144),
            "TouchEdgeGripperHost::DismissGripperWindowAsync");
          winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 224);
          if ( *(_QWORD *)(a1 + 224) )
          {
            v6 = *(RTL_SRWLOCK **)(a1 + 251);
            wil::srwlock::lock_exclusive(v6 + 29, (RTL_SRWLOCK **)(a1 + 232));
            v7 = (TouchEdgeGripperWindow *)v6[7].Ptr;
            if ( v7 )
            {
              v10 = *((_BYTE *)v7 + 160);
              TouchEdgeGripperWindow::Dismiss(v7, *(_BYTE *)(a1 + 259));
              *(_QWORD *)(a1 + 240) = 0LL;
              winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
                &v6[7],
                a1 + 240);
              winrt::com_ptr<TouchEdgeGripperWindow>::release_ref(a1 + 240);
              LOBYTE(v8) = v10;
              TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync(v6, a1 + 248, v8);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 232));
          }
          winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 224);
          wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 144));
LABEL_21:
          winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
LABEL_22:
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 249);
LABEL_23:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1);
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_23;
      case 6:
        goto LABEL_11;
      case 7:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 56);
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_23;
      case 8:
        goto LABEL_16;
      case 9:
        winrt::com_ptr<TouchEdgeGripperHost>::release_ref(a1 + 40);
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1 + 16);
        goto LABEL_23;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
