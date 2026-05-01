/*
 * XREFs of ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180111728
 * Callers:
 *     ??0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x1801110E8 (--0SnapFlyoutHost@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801113CC (-make_weak_ref@-$root_implements@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@U1.c)
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@6@Uauto_revoke_t@6@AEBUResetNotificationBoundaryHandler@23456@@Z @ 0x18011191C (-ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     ??1?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x180111BB0 (--1-$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Window.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x180225928 (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x18038CC34 (--0bad_alloc@std@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=14
WindowDragInputProvider *__fastcall WindowDragInputProvider::WindowDragInputProvider(
        WindowDragInputProvider *this,
        struct IPrivilegedArrangementOperations *a2)
{
  void *weak_ref; // rax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-50h] BYREF
  void *v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h]
  _BYTE v16[16]; // [rsp+48h] [rbp-30h] BYREF
  _BYTE pExceptionObject[32]; // [rsp+58h] [rbp-20h] BYREF
  _QWORD *v18; // [rsp+A8h] [rbp+30h]
  __int64 v19; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+40h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &WindowDragInputProvider::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IPrivilegedArrangementOperations *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  weak_ref = winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::WindowsTracker,winrt::Windows::Internal::Shell::WindowsTracker>::make_weak_ref((volatile signed __int64 *)this);
  if ( !weak_ref )
  {
    std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v13 = weak_ref;
  v20 = 0LL;
  v4 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)weak_ref + 24LL))(weak_ref, &v20);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v13);
  v5 = v20;
  v20 = 0LL;
  v19 = v5;
  v18 = operator new(0x18uLL);
  v6 = v19;
  v19 = 0LL;
  v18[1] = v6;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v18 + 4) = 1;
  *v18 = off_1807AF9D8;
  v12 = v18;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v19);
  v7 = (__int64 *)winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager::ResetNotificationBoundary((winrt::Windows::Foundation::IUnknown *)v16);
  v8 = *v7;
  *v7 = 0LL;
  v15 = v7[1];
  v14 = 0LL;
  v11 = v8;
  winrt::Windows::Foundation::IUnknown::operator=(&v14, (char *)this + 88);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 88, &v11);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v11);
  v9 = v15;
  v15 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = v9;
  __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v14);
  __1__factory_event_revoker_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UIDesktopSnapLayoutManagerStatics_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEA_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)v16);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  if ( v20 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v20);
  return this;
}
