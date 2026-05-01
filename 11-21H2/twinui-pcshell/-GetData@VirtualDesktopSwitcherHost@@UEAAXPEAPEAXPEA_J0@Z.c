/*
 * XREFs of ?GetData@VirtualDesktopSwitcherHost@@UEAAXPEAPEAXPEA_J0@Z @ 0x180609D90
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInBand@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@3@IAEBURect@Foundation@83@@Z @ 0x180015FDC (-CreateInBand@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::GetData(__int64 **this, void **a2, __int64 *a3, void **a4)
{
  void *v6; // rbx
  signed int v7; // eax
  signed int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = this - 18;
  v9 = 0LL;
  winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>::CreateInBand(
    this + 12,
    &v10,
    6u,
    &v9);
  v6 = v10;
  v7 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, 0LL);
  if ( v7 < 0 )
    winrt::throw_hresult(v7);
  v8 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, 0LL);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a3 = -18407207LL;
  *a4 = v6;
}
