/*
 * XREFs of ?CreateXamlWindow@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065AFA8
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180658C9C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     ?IsVisible@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732A8 (-IsVisible@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ??$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAIAEBURect@Foundation@67@@winrt@@YA?A_PAEAIAEBURect@Foundation@Windows@0@@Z @ 0x18007FBD4 (--$make@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AE.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall TouchEdgeGripperWindow::CreateXamlWindow(TouchEdgeGripperWindow *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-38h] BYREF

  v6 = 7;
  v7 = 0LL;
  winrt::make<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,unsigned int &,winrt::Windows::Foundation::Rect const &>(
    &v5,
    &v6,
    (const struct winrt::Windows::Foundation::Rect *)&v7);
  v2 = (TouchEdgeGripperWindow *)((char *)this + 96);
  winrt::Windows::Foundation::IUnknown::operator=(v2, (winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsVisible(v2);
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(v2);
  v4 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v3,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_1808718AA, 0LL, 0LL, 2u, &v7);
}
