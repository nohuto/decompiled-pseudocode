/*
 * XREFs of VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x18028B890
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x18028B7C8 (VirtualDesktopSwitcherHost--DismissAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$await_transform@AEAUapartment_context@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCActionCenterExperienceManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@QEAA?A_PAEAUapartment_context@winrt@@@Z @ 0x180065BEC (--$await_transform@AEAUapartment_context@winrt@@@promise_type@-$coroutine_traits@Ufire_and_forge.c)
 *     ?AnimationsEnabled@?$consume_Windows_UI_ViewManagement_IUISettings@UIUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006B630 (-AnimationsEnabled@-$consume_Windows_UI_ViewManagement_IUISettings@UIUISettings@ViewManagement@U.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienceManager@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x180072C04 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCJumpViewExperienc.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ @ 0x1801B3360 (-await_resume@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x180234F54 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??$com_query@UIVirtualDesktopSwitcherHost@@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x1807708D8 (--$com_query@UIVirtualDesktopSwitcherHost@@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 *v4; // rdi

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        v1 = *(_QWORD *)(a1 + 66);
        if ( *(_DWORD *)(v1 + 528) == 1 || *(_DWORD *)(a1 + 74) == 1 && (*(_BYTE *)(v1 + 457) || *(_BYTE *)(v1 + 458)) )
          goto LABEL_15;
        *(_QWORD *)(a1 + 16) = v1;
        wil::com_query<IVirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost *>(a1 + 24);
        v3 = std::experimental::coroutine_traits<winrt::fire_and_forget,CActionCenterExperienceManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type::await_transform<winrt::apartment_context &>(
               v2,
               a1 + 40,
               (__int64 *)(v1 + 440));
        *(_QWORD *)(a1 + 32) = v3;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        {
LABEL_11:
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_resume(*(_QWORD *)(a1 + 32));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 40));
          v4 = *(__int64 **)(a1 + 66);
          if ( winrt::impl::consume_Windows_UI_ViewManagement_IUISettings<winrt::Windows::UI::ViewManagement::IUISettings>::AnimationsEnabled(v4 + 59) )
            VirtualDesktopSwitcherHost::StartDismissAnimation((VirtualDesktopSwitcherHost *)v4);
          else
            (*(void (__fastcall **)(__int64 *))(v4[1] + 40))(v4 + 1);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
LABEL_15:
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 64);
LABEL_16:
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)a1);
        }
        else
        {
          *(_WORD *)(a1 + 8) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CJumpViewExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type>(
            v3,
            a1);
        }
        break;
      case 4:
        goto LABEL_11;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 40));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
        goto LABEL_16;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
