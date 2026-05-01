/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopsApi@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013D390
 * Callers:
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013EA5C (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@@Z @ 0x18013BB50 (-RuntimeClassInitialize@VirtualDesktopsApi@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ??0VirtualDesktopsApi@@QEAA@XZ @ 0x18013D45C (--0VirtualDesktopsApi@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopsApi,VirtualDesktopsApi,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopLock * &>(
        VirtualDesktopsApi **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopCollection **a3,
        struct IVirtualDesktopVisibilityPolicy **a4,
        struct IVirtualDesktopWindowMoveManager **a5,
        struct IVirtualDesktopLock **a6)
{
  VirtualDesktopsApi *v10; // rax
  VirtualDesktopsApi *v11; // rbx
  int v12; // edi
  VirtualDesktopsApi *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (VirtualDesktopsApi *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = VirtualDesktopsApi::VirtualDesktopsApi(v10);
    v14 = v11;
    v12 = VirtualDesktopsApi::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(VirtualDesktopsApi *))(*(_QWORD *)v11 + 8LL))(v11);
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
