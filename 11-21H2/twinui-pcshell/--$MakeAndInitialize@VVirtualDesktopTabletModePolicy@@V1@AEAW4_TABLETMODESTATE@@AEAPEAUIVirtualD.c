/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180112120
 * Callers:
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180110EB4 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x180112914 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x180112970 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801129D4 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??0VirtualDesktopTabletModePolicy@@QEAA@XZ @ 0x180112FC8 (--0VirtualDesktopTabletModePolicy@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C908 (-InternalRelease@-$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        VirtualDesktopTabletModePolicy **a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r14d
  VirtualDesktopTabletModePolicy *v11; // rax
  VirtualDesktopTabletModePolicy *v12; // rax
  __int64 v13; // rbx
  VirtualDesktopTabletModePolicy *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  volatile int *v18; // rdx
  VirtualDesktopTabletModePolicy *v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v11 = (VirtualDesktopTabletModePolicy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = VirtualDesktopTabletModePolicy::VirtualDesktopTabletModePolicy(v11);
    v13 = *a4;
    v14 = v12;
    v15 = *a3;
    v20 = v12;
    v16 = *a6;
    v17 = *a5;
    *((_DWORD *)v12 + 24) = *a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((char *)v12 + 48, v15);
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)v14 + 56, v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((char *)v14 + 64, v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((char *)v14 + 72, v16);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopTabletModePolicy *)((char *)v14 + 44), v18);
    *a1 = v14;
    Microsoft::WRL::ComPtr<VirtualDesktopAnimationSyncNotifications>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
