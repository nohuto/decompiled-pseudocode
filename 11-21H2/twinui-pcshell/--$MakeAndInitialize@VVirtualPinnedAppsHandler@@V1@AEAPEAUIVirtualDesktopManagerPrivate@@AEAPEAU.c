/*
 * XREFs of ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1801105BC
 * Callers:
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110458 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualPinnedAppsHandler@@QEAA@XZ @ 0x180110504 (--0VirtualPinnedAppsHandler@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x180110900 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        VirtualPinnedAppsHandler **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopRegistryHelpers **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopGroupedViewsPolicy **a5,
        struct IVirtualDesktopLock **a6)
{
  VirtualPinnedAppsHandler *v10; // rax
  VirtualPinnedAppsHandler *v11; // rbx
  int v12; // edi
  VirtualPinnedAppsHandler *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualPinnedAppsHandler *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = VirtualPinnedAppsHandler::VirtualPinnedAppsHandler(v10);
    v14 = v11;
    v12 = VirtualPinnedAppsHandler::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
