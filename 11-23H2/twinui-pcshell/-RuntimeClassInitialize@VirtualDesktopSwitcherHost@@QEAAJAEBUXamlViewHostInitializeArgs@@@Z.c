/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180775CF8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180770300 (--$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WR.c)
 * Callees:
 *     ?GetVirtualDesktopCollection@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007CD28 (-GetVirtualDesktopCollection@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDes.c)
 *     ??$convert_from_abi@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18007CFD8 (--$convert_from_abi@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@win.c)
 *     ??$convert_from_abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18007D038 (--$convert_from_abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@win.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x180137B24 (--4-$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmer.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewVisibilityServiceInternal@@@Z @ 0x18013ADD0 (--4-$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultit.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@@@Z @ 0x1801B2998 (--4-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@.c)
 *     ?CurrentVirtualDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B844C (-CurrentVirtualDesktop@-$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitcherHost::RuntimeClassInitialize(
        VirtualDesktopSwitcherHost *this,
        const struct XamlViewHostInitializeArgs *a2)
{
  int inited; // eax
  winrt::Windows::Foundation::IUnknown *v5; // rax
  winrt::Windows::Foundation::IUnknown *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, char *); // r15
  __int64 v9; // rcx
  int v10; // eax
  winrt::Windows::Foundation::IUnknown *v11; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  inited = CObjectWithThreadUseDetection::InitApartmentId((VirtualDesktopSwitcherHost *)((char *)this + 32));
  if ( inited < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
      (const char *)(unsigned int)inited,
      v13);
  Microsoft::WRL::ComPtr<IMultitaskingViewManager>::operator=((__int64 *)this + 11, *(_QWORD *)a2);
  Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityServiceInternal>::operator=(
    (__int64 *)this + 12,
    *((_QWORD *)a2 + 5));
  v5 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource>(
                                                 &v16,
                                                 *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a2 + 10));
  winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 232), v5);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  v6 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>(
                                                 &v16,
                                                 *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a2 + 11));
  winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 240), v6);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=(
    (__int64 *)this + 24,
    *((_QWORD *)a2 + 6));
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)a2 + 22);
  if ( v7 )
  {
    v8 = **v7;
    v9 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v8(v7, &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386, (char *)this + 216);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
        (const char *)(unsigned int)v10);
  }
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource>::GetVirtualDesktopCollection(
    (__int64 *)this + 29,
    &v15);
  v11 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopCollection<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::CurrentVirtualDesktop(
                                                  &v15,
                                                  &v16);
  winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 496), v11);
  if ( v16 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
  if ( v15 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  return 0LL;
}
