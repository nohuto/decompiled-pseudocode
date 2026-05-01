/*
 * XREFs of ?Bounds@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow@UIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1806E6EFC
 * Callers:
 *     ?HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z @ 0x1806E7AA8 (-HandleSizeUpdate@SharedDesktopBackgroundVisualHost@@AEAAXUtagSIZE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::Bounds(
        __int64 **a1,
        __int128 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *v2;
  v5 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v3 + 56))(v2, &v5);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
