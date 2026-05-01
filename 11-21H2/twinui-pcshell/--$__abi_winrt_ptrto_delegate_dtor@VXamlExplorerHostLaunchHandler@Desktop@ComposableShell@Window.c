/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@@YAXPE$ADVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x18041F9C0
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$24 @ 0x18021DF96 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_18021DF96.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$8 @ 0x1804207C7 (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$8.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler____::_1_::dtor$1 @ 0x18042401C (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_18042401C.c)
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$0 @ 0x180424948 (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$0.c)
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$1 @ 0x180424954 (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$1.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$0 @ 0x180424DFE (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler>(
        __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
