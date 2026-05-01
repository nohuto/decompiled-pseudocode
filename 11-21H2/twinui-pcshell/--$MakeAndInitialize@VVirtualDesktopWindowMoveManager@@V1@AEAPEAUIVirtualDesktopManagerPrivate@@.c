/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopWindowMoveManager@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x1801122A0
 * Callers:
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x180111114 (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@@Z @ 0x18011262C (-RuntimeClassInitialize@VirtualDesktopWindowMoveManager@@QEAAJPEAUIVirtualDesktopManagerPrivate@.c)
 *     ??0VirtualDesktopWindowMoveManager@@QEAA@XZ @ 0x180112EA4 (--0VirtualDesktopWindowMoveManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopWindowMoveManager,VirtualDesktopWindowMoveManager,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopPinnedAppsPrivate * &>(
        VirtualDesktopWindowMoveManager **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopCollection **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopPinnedAppsPrivate **a5)
{
  VirtualDesktopWindowMoveManager *v9; // rax
  VirtualDesktopWindowMoveManager *v10; // rbx
  int v11; // edi
  VirtualDesktopWindowMoveManager *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktopWindowMoveManager *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = VirtualDesktopWindowMoveManager::VirtualDesktopWindowMoveManager(v9);
    v13 = v10;
    v11 = VirtualDesktopWindowMoveManager::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(VirtualDesktopWindowMoveManager *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
