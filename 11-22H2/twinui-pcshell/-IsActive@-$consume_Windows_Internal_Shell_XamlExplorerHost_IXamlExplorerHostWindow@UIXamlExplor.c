/*
 * XREFs of ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180774BB4
 * Callers:
 *     ?VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x180777040 (-VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ.c)
 *     ?IsActive@TaskViewFrame@@UEAA_NXZ @ 0x180787320 (-IsActive@TaskViewFrame@@UEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 112LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
