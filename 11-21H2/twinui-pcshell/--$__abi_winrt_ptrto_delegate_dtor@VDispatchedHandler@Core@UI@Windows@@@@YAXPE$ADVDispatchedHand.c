/*
 * XREFs of ??$__abi_winrt_ptrto_delegate_dtor@VDispatchedHandler@Core@UI@Windows@@@@YAXPE$ADVDispatchedHandler@Core@UI@Windows@@@Z @ 0x18042801C
 * Callers:
 *     _XamlExplorerHostWindow::_XamlExplorerHostWindow_::_1_::dtor$6 @ 0x180428AB8 (_XamlExplorerHostWindow--_XamlExplorerHostWindow_--_1_--dtor$6.c)
 *     _XamlExplorerHostWindow::AsyncDestroy_::_1_::dtor$4 @ 0x180428F0B (_XamlExplorerHostWindow--AsyncDestroy_--_1_--dtor$4.c)
 *     _XamlExplorerHostWindow::ChangeVisibility_::_1_::dtor$3 @ 0x18042903D (_XamlExplorerHostWindow--ChangeVisibility_--_1_--dtor$3.c)
 *     _XamlExplorerHostWindow::RunCallback_::_1_::dtor$5 @ 0x18042948B (_XamlExplorerHostWindow--RunCallback_--_1_--dtor$5.c)
 *     _MonitorFrame::BeginInvokeAnimation_::_1_::dtor$5 @ 0x1804319DC (_MonitorFrame--BeginInvokeAnimation_--_1_--dtor$5.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$5 @ 0x1804334F2 (_MonitorFrame--DestroyInternal_--_1_--dtor$5.c)
 *     _MonitorFrame::DismissAnimated_::_1_::dtor$11 @ 0x1804338C5 (_MonitorFrame--DismissAnimated_--_1_--dtor$11.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall __abi_winrt_ptrto_delegate_dtor<Windows::UI::Core::DispatchedHandler>(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return result;
}
