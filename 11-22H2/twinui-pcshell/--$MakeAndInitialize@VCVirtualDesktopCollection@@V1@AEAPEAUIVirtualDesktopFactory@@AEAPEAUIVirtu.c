/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801939A4
 * Callers:
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1801938DC (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x18013B114 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403A4 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CVirtualDesktopCollection@@QEAA@XZ @ 0x180193A6C (--0CVirtualDesktopCollection@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
        CVirtualDesktopCollection **a1,
        struct IVirtualDesktopFactory **a2,
        struct IVirtualDesktopPersistence **a3,
        char *a4)
{
  CVirtualDesktopCollection *v8; // rax
  CVirtualDesktopCollection *v9; // rdi
  volatile int *v10; // rdx
  int v11; // esi
  CVirtualDesktopCollection *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopCollection *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v9 = CVirtualDesktopCollection::CVirtualDesktopCollection(v8);
    v13 = v9;
    v11 = CVirtualDesktopCollection::RuntimeClassInitialize(v9, *a2, *a3, *a4);
    if ( v11 >= 0 )
    {
      if ( v9 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopCollection *)((char *)v9 + 12), v10);
      *a1 = v9;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
