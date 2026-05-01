/*
 * XREFs of ?ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@6@Uauto_revoke_t@6@AEBUResetNotificationBoundaryHandler@23456@@Z @ 0x18011191C
 * Callers:
 *     ??0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z @ 0x180111728 (--0WindowDragInputProvider@@QEAA@PEAUIPrivilegedArrangementOperations@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180111A8C (--$as@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@Utype@-$abi@.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager::ResetNotificationBoundary(
        winrt::Windows::Foundation::IUnknown *this,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rbx
  _QWORD *v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = operator new(0x30uLL);
  v6 = v5 + 2;
  v5[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  v5[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>::`vftable';
  v5[4] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics>::`vftable';
  v5[5] = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v5[1] = 1LL;
  *v5 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>::`vftable';
  v11 = v5 + 2;
  winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v12,
    v5 + 2);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  v11 = 0LL;
  v7 = v12;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v12 + 56LL))(v12, *a3, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  v9 = v11;
  *(_QWORD *)this = v7;
  winrt::Windows::Foundation::IUnknown::add_ref(this);
  *((_QWORD *)this + 1) = v9;
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return this;
}
