/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopTabletModePolicy@@V1@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModePolicy@@AEAW4_TABLETMODESTATE@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CE58
 * Callers:
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180195928 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x18013BE3C (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x18013BEF8 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18013C018 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ??0VirtualDesktopTabletModePolicy@@QEAA@XZ @ 0x18013CF3C (--0VirtualDesktopTabletModePolicy@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402AC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopTabletModePolicy,VirtualDesktopTabletModePolicy,enum _TABLETMODESTATE &,IVirtualDesktopCollection * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        __int64 **a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // ebp
  VirtualDesktopTabletModePolicy *v11; // rax
  VirtualDesktopTabletModePolicy *v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // r14
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
    v14 = (__int64 *)v12;
    v15 = *a3;
    v20 = v12;
    v16 = *a6;
    v17 = *a5;
    *((_DWORD *)v12 + 24) = *a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)v12 + 6, v15);
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=(v14 + 7, v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=(v14 + 8, v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=(v14 + 9, v16);
    if ( v14 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v14 + 44), v18);
    *a1 = v14;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
