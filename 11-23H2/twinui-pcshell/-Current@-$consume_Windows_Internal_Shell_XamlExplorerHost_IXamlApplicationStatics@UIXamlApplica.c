/*
 * XREFs of ?Current@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics@UIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B1790
 * Callers:
 *     ?EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ @ 0x18004B7E4 (-EnsureXamlCoreForThreadIfNeeded@CMultitaskingViewManager@@AEAAJXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_cb771e4f68d6b51119928ba451ead061_@@CA@AEBUIXamlApplicationStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x180073180 (-_lambda_invoker_cdecl_@_lambda_cb771e4f68d6b51119928ba451ead061_@@CA@AEBUIXamlApplicationStatic.c)
 *     ?CreateInstance@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_KAEBUhstring@7@@Z @ 0x1800B16C8 (-CreateInstance@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Intern.c)
 *     ?CreateInstance2@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@_K0AEBUhstring@7@@Z @ 0x1804F7688 (-CreateInstance2@XamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Inter.c)
 *     ?CreateInstance@XamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@67@@Z @ 0x1804F99FC (-CreateInstance@XamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 *     ?XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ @ 0x180656FC8 (-XamlHostThreadProc@TouchEdgeGripperHost@@AEAAKXZ.c)
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ @ 0x18067D280 (-XamlExplorerHostThreadProc@SnapFlyoutHost@@AEAAKXZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlApplicationStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlApplicationStatics>::Current(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v3 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  result = a2;
  *a2 = v6;
  return result;
}
