/*
 * XREFs of ??4?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAVVirtualDesktopGestureWindow@@@Z @ 0x18060AE0C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@IEBAXXZ @ 0x18060F888 (-InternalAddRef@-$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v6 = a2;
    Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::InternalAddRef(&v6);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 16LL))(v4 + 16);
  }
  return a1;
}
