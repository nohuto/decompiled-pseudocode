/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013C7A0
 * Callers:
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180147314 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x18013BE3C (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ @ 0x18013C840 (--0CVirtualDesktopHolographicViewTransitionNotification@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18014020C (-InternalRelease@-$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
        CVirtualDesktopHolographicViewTransitionNotification **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopHolographicViewTransitionNotification *v7; // rax
  CVirtualDesktopHolographicViewTransitionNotification *v8; // rax
  __int64 v9; // rdx
  CVirtualDesktopHolographicViewTransitionNotification *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  CVirtualDesktopHolographicViewTransitionNotification *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopHolographicViewTransitionNotification *)operator new(
                                                                 0x40uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopHolographicViewTransitionNotification::CVirtualDesktopHolographicViewTransitionNotification(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((__int64 *)v8 + 6, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((__int64 *)v10 + 7, v11);
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference(
        (CVirtualDesktopHolographicViewTransitionNotification *)((char *)v10 + 44),
        v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
