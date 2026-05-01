/*
 * XREFs of ??4?$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180110800
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Z @ 0x180110770 (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180110900 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IVirtualDesktopRegistryHelpers>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v4 = *a1;
    }
    v6 = v4;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v6);
  }
  return a1;
}
