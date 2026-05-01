/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801476D4
 * Callers:
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18014760C (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1800A0E94 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CVirtualDesktopCollection@@QEAA@XZ @ 0x1801477A0 (--0CVirtualDesktopCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C980 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
        CVirtualDesktopCollection **a1,
        struct IVirtualDesktopFactory **a2,
        struct IVirtualDesktopPersistence **a3,
        _BYTE *a4)
{
  CVirtualDesktopCollection *v8; // rax
  CVirtualDesktopCollection *v9; // rdi
  __int64 v10; // r9
  volatile int *v11; // rdx
  int v12; // esi
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopCollection *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = v8;
  if ( v8 )
  {
    v14[1] = v8;
    v9 = CVirtualDesktopCollection::CVirtualDesktopCollection(v8);
    v14[0] = v9;
    LOBYTE(v10) = *a4;
    v12 = CVirtualDesktopCollection::RuntimeClassInitialize(v9, *a2, *a3, v10);
    if ( v12 >= 0 )
    {
      if ( v9 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopCollection *)((char *)v9 + 12), v11);
      *a1 = v9;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
