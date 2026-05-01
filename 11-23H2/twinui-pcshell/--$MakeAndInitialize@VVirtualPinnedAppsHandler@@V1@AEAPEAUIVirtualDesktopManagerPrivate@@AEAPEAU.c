/*
 * XREFs of ??$MakeAndInitialize@VVirtualPinnedAppsHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualPinnedAppsHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAPEAUIVirtualDesktopVisibilityPolicy@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x18019731C
 * Callers:
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180197278 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B9C8 (-RuntimeClassInitialize@VirtualPinnedAppsHandler@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIV.c)
 *     ??0VirtualPinnedAppsHandler@@QEAA@XZ @ 0x1801973F8 (--0VirtualPinnedAppsHandler@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualPinnedAppsHandler,VirtualPinnedAppsHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopRegistryHelpers * &,IVirtualDesktopVisibilityPolicy * &,std::nullptr_t,IVirtualDesktopLock * &>(
        VirtualPinnedAppsHandler **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopRegistryHelpers **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        __int64 a5,
        struct IVirtualDesktopLock **a6)
{
  VirtualPinnedAppsHandler *v10; // rax
  VirtualPinnedAppsHandler *v11; // rbx
  int v12; // edi
  struct IUnknown *v14; // [rsp+20h] [rbp-28h]
  VirtualPinnedAppsHandler *v15; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualPinnedAppsHandler *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = VirtualPinnedAppsHandler::VirtualPinnedAppsHandler(v10);
    v15 = v11;
    a5 = 0LL;
    v12 = VirtualPinnedAppsHandler::RuntimeClassInitialize(v11, *a2, *a3, *a4, v14, *a6);
    if ( v12 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
