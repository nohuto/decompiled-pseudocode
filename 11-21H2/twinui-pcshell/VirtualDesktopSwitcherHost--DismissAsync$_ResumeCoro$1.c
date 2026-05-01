/*
 * XREFs of VirtualDesktopSwitcherHost::DismissAsync$_ResumeCoro$1 @ 0x1801E9550
 * Callers:
 *     VirtualDesktopSwitcherHost::DismissAsync$_InitCoro$2 @ 0x1801E9484 (VirtualDesktopSwitcherHost--DismissAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewManager@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@2@@experimental@std@@@experimental@std@@@Z @ 0x1801D7260 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCMultitaskingViewM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?await_resume@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ @ 0x180350FBC (-await_resume@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAAXXZ.c)
 *     ?AnimationsEnabled@?$consume_Windows_UI_ViewManagement_IUISettings@UIUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x18038E8EC (-AnimationsEnabled@-$consume_Windows_UI_ViewManagement_IUISettings@UIUISettings@ViewManagement@U.c)
 *     ??$com_query@UIVirtualDesktopSwitcherHost@@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIVirtualDesktopSwitcherHost@@Uerr_exception_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180606334 (--$com_query@UIVirtualDesktopSwitcherHost@@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060BAB0 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VirtualDesktopSwitcherHost::DismissAsync__ResumeCoro_1(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  VirtualDesktopSwitcherHost **v4; // rdi
  VirtualDesktopSwitcherHost *v5; // rcx
  char v6; // al
  VirtualDesktopSwitcherHost *v7; // rcx
  void (***v8)(void); // rax
  void (**v9)(void); // rax
  void (*v10)(void); // rax
  __int16 v11; // ax

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_16;
      case 2:
        *(_QWORD *)(a1 + 96) = a1 + 1;
        *(_QWORD *)(a1 + 112) = a1 + 497;
        v1 = *(_DWORD **)(a1 + 497);
        *(_QWORD *)(a1 + 128) = v1;
        v1 += 126;
        *(_QWORD *)(a1 + 144) = v1;
        LODWORD(v1) = *v1;
        *(_DWORD *)(a1 + 160) = (_DWORD)v1;
        if ( (_DWORD)v1 == 1 )
          goto LABEL_15;
        if ( *(_DWORD *)(a1 + 505) == 1 )
        {
          v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 496LL);
          if ( *(_BYTE *)(v2 + 450) || *(_BYTE *)(v2 + 449) )
            goto LABEL_15;
        }
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 496LL);
        *(_QWORD *)(a1 + 16) = v3;
        wil::com_query<IVirtualDesktopSwitcherHost,VirtualDesktopSwitcherHost *>(a1 + 24);
        *(_QWORD *)(a1 + 32) = v3 + 432;
        if ( (unsigned __int8)winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 32) )
        {
LABEL_11:
          winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_resume(a1 + 32);
          v4 = (VirtualDesktopSwitcherHost **)(*(_QWORD *)(a1 + 96) + 496LL);
          *(_QWORD *)(a1 + 176) = v4;
          v5 = *v4;
          *(_QWORD *)(a1 + 192) = *v4;
          v5 = (VirtualDesktopSwitcherHost *)((char *)v5 + 464);
          *(_QWORD *)(a1 + 208) = v5;
          v6 = winrt::impl::consume_Windows_UI_ViewManagement_IUISettings<winrt::Windows::UI::ViewManagement::IUISettings>::AnimationsEnabled(v5);
          *(_BYTE *)(a1 + 48) = v6;
          v7 = *v4;
          if ( v6 )
          {
            *(_QWORD *)(a1 + 352) = v4;
            *(_QWORD *)(a1 + 368) = v7;
            VirtualDesktopSwitcherHost::StartDismissAnimation(v7);
          }
          else
          {
            *(_QWORD *)(a1 + 384) = v4;
            v8 = (void (***)(void))*v4;
            *(_QWORD *)(a1 + 400) = *v4;
            *(_QWORD *)(a1 + 416) = ++v8;
            v9 = *v8;
            *(_QWORD *)(a1 + 432) = v9;
            v9 += 5;
            *(_QWORD *)(a1 + 448) = v9;
            *(_QWORD *)(a1 + 224) = v4;
            *(_QWORD *)(a1 + 240) = v7;
            *(_QWORD *)(a1 + 256) = (char *)v7 + 8;
            v10 = *v9;
            *(_QWORD *)(a1 + 464) = v10;
            v10();
          }
          wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
LABEL_15:
          std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
            a1,
            a1 + 40);
LABEL_16:
          *(_QWORD *)(a1 + 272) = a1 + 10;
          v11 = *(_WORD *)(a1 + 10);
          *(_WORD *)(a1 + 288) = v11;
          if ( v11 )
          {
            *(_QWORD *)(a1 + 304) = 513LL;
            *(_QWORD *)(a1 + 80) = 513LL;
            *(_QWORD *)(a1 + 64) = a1;
            *(_QWORD *)(a1 + 480) = a1 + 10;
            operator delete((void *)a1);
          }
        }
        else
        {
          *(_WORD *)(a1 + 8) = 4;
          winrt::impl::notify_awaiter<winrt::apartment_context &>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CMultitaskingViewManager *,winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs>::promise_type>((struct winrt::impl::resume_apartment_context **)(a1 + 32));
        }
        break;
      case 4:
        goto LABEL_11;
      case 5:
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)(a1 + 24));
        goto LABEL_16;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
