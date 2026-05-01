/*
 * XREFs of ?InternalAddRef@?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@IEBAXXZ @ 0x18060F888
 * Callers:
 *     ??4?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18060AE0C (--4-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAVVirtualDesktopGestureW.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VVirtualDesktopGestureWindow@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180612EF0 (-s_WndProcBase@-$CWRLImpWndProc@VVirtualDesktopGestureWindow@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@IUtagRECT@@@Z @ 0x18061910C (-CreateAdjacentDesktop@VirtualDesktopHotKeyWindow@@AEAAJPEA_NPEAUIVirtualDesktop@@V-$shared_any_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  return result;
}
