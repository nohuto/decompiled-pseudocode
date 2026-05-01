/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopFactory@@V1@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopFactory@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18013CBE4
 * Callers:
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18013E880 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVisibilityPolicy@@@Z @ 0x18013BEF8 (--4-$ComPtr@UIVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopVis.c)
 *     ??4?$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z @ 0x18013BF58 (--4-$ComPtr@UIVirtualDesktopLock@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopLock@@@Z.c)
 *     ??0CVirtualDesktopFactory@@QEAA@XZ @ 0x18013CC84 (--0CVirtualDesktopFactory@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18014037C (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopFactory,CVirtualDesktopFactory,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopLock * &>(
        CVirtualDesktopFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  CVirtualDesktopFactory *v7; // rax
  CVirtualDesktopFactory *v8; // rax
  __int64 v9; // rdx
  CVirtualDesktopFactory *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  CVirtualDesktopFactory *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (CVirtualDesktopFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = CVirtualDesktopFactory::CVirtualDesktopFactory(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopVisibilityPolicy>::operator=((__int64 *)v8 + 2, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopLock>::operator=((__int64 *)v10 + 3, v11);
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopFactory *)((char *)v10 + 12), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
