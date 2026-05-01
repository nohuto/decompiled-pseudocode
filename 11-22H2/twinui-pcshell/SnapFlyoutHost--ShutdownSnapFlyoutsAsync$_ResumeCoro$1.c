/*
 * XREFs of SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800
 * Callers:
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x1802286F8 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2.c)
 * Callees:
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@experimental@std@@@Z @ 0x1801AEF7C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AE.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1802E99C4 (-get_weak@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-AU-.c)
 *     ?add_ref@?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@AEBAXXZ @ 0x18040A9D0 (-add_ref@-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ @ 0x180657584 (-release_ref@-$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_ @ 0x180679784 (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_13_--_parameters_--__parameters_.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v5; // r9

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_15;
      case 2:
        v1 = *(_QWORD *)(a1 + 66);
        v2 = v1 + 96;
        if ( !*(_QWORD *)(v1 + 96) || !*(_QWORD *)(a1 + 82) )
          goto LABEL_14;
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v1, a1 + 16);
        *(_QWORD *)(a1 + 24) = v2;
        *(_DWORD *)(a1 + 32) = 0;
        *(_BYTE *)(a1 + 36) = 0;
        *(_QWORD *)(a1 + 40) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready()
          || (*(_WORD *)(a1 + 8) = 4,
              !(unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std___experimental_std___Z((_QWORD *)(a1 + 40))) )
        {
LABEL_9:
          _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(a1 + 40);
          winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 48);
          if ( *(_QWORD *)(a1 + 48) )
          {
            v3 = *(_QWORD **)(a1 + 74);
            for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
            {
              *(_QWORD *)(a1 + 56) = i[2];
              winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::add_ref(a1 + 56);
              winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(v5);
              winrt::com_ptr<TouchEdgeGripperWindow>::release_ref(a1 + 56);
            }
          }
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 48);
          winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
LABEL_14:
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 64);
LABEL_15:
          SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_(a1 + 66);
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1);
        }
        break;
      case 4:
        goto LABEL_9;
      case 5:
        winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
        goto LABEL_15;
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
