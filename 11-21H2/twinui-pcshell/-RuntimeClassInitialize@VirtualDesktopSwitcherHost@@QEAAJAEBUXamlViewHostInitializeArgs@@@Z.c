/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopSwitcherHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18060B598
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitcherHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x180605BB4 (--$MakeAndInitialize@VVirtualDesktopSwitcherHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WR.c)
 * Callees:
 *     ??$convert_from_abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18000FF68 (--$convert_from_abi@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@win.c)
 *     ??$convert_from_abi@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@wil@@YA?AUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x180052188 (--$convert_from_abi@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@win.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180103744 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??4?$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewVisibilityServiceInternal@@@Z @ 0x180116850 (--4-$ComPtr@UIMultitaskingViewVisibilityServiceInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@@@Z @ 0x180177F98 (--4-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIMultitaskingViewManager@.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitorManager@@@Z @ 0x18017A710 (--4-$com_ptr_t@UIImmersiveMonitorManager@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopSwitcherHost::RuntimeClassInitialize(
        VirtualDesktopSwitcherHost *this,
        const struct XamlViewHostInitializeArgs *a2)
{
  CObjectWithThreadUseDetection *v4; // rcx
  int inited; // eax
  __int64 (__fastcall ***v6)(_QWORD, void *, char *); // r14
  __int64 (__fastcall *v7)(_QWORD, void *, char *); // r15
  int v8; // eax
  winrt::Windows::Foundation::IUnknown *v9; // rax
  winrt::Windows::Foundation::IUnknown *v10; // rax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = (VirtualDesktopSwitcherHost *)((char *)this + 32);
  try
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId(v4);
    if ( inited < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB9,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
        (const char *)(unsigned int)inited,
        v13);
    Microsoft::WRL::ComPtr<IMultitaskingViewManager>::operator=((__int64 *)this + 11, *(_QWORD *)a2);
    Microsoft::WRL::ComPtr<IMultitaskingViewVisibilityServiceInternal>::operator=(
      (__int64 *)this + 12,
      *((_QWORD *)a2 + 6));
    v6 = (__int64 (__fastcall ***)(_QWORD, void *, char *))*((_QWORD *)a2 + 5);
    v7 = **v6;
    if ( *((_QWORD *)this + 30) )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((VirtualDesktopSwitcherHost *)((char *)this + 240));
    v8 = v7(
           v6,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>,
           (char *)this + 240);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xBD,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
        (const char *)(unsigned int)v8,
        v13);
    v9 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource>(
                                                   &v15,
                                                   *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a2 + 10));
    winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 248), v9);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    v10 = (winrt::Windows::Foundation::IUnknown *)wil::convert_from_abi<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>(
                                                    &v15,
                                                    *((__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a2 + 11));
    winrt::Windows::Foundation::IUnknown::operator=((VirtualDesktopSwitcherHost *)((char *)this + 256), v10);
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
    wil::com_ptr_t<IImmersiveMonitorManager,wil::err_exception_policy>::operator=(
      (__int64 *)this + 26,
      *((_QWORD *)a2 + 7));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC5,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v11);
  }
  return result;
}
