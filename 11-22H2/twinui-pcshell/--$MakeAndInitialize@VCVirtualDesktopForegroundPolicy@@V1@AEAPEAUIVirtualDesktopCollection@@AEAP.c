/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopForegroundPolicy@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x1801990A4
 * Callers:
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180198FDC (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@@Z @ 0x18013AFD8 (-RuntimeClassInitialize@CVirtualDesktopForegroundPolicy@@QEAAJPEAUIVirtualDesktopCollection@@PEA.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403F4 (-InternalRelease@-$ComPtr@VCVirtualDesktopForegroundPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CVirtualDesktopForegroundPolicy@@QEAA@XZ @ 0x180199148 (--0CVirtualDesktopForegroundPolicy@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopForegroundPolicy,CVirtualDesktopForegroundPolicy,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopDefaultForegroundHandler * &>(
        CVirtualDesktopForegroundPolicy **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopDefaultForegroundHandler **a4)
{
  CVirtualDesktopForegroundPolicy *v8; // rax
  CVirtualDesktopForegroundPolicy *v9; // rax
  struct IVirtualDesktopDefaultForegroundHandler *v10; // r9
  struct IVirtualDesktopVisibilityPolicy *v11; // r8
  CVirtualDesktopForegroundPolicy *v12; // rdi
  struct IVirtualDesktopCollection *v13; // rdx
  volatile int *v14; // rdx
  int v15; // ebx
  CVirtualDesktopForegroundPolicy *v17; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopForegroundPolicy *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CVirtualDesktopForegroundPolicy::CVirtualDesktopForegroundPolicy(v8);
    v10 = *a4;
    v11 = *a3;
    v12 = v9;
    v13 = *a2;
    v17 = v9;
    v15 = CVirtualDesktopForegroundPolicy::RuntimeClassInitialize(v9, v13, v11, v10);
    if ( v15 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (CVirtualDesktopForegroundPolicy *)((char *)v12 + 12),
          v14);
      *a1 = v12;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopForegroundPolicy>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
