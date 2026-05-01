/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopVisibilityPolicy@@V1@AEAPEAUIVirtualDesktopNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@@Z @ 0x1801644F8
 * Callers:
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18016443C (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1800B54E0 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0CVirtualDesktopVisibilityPolicy@@QEAA@XZ @ 0x18016458C (--0CVirtualDesktopVisibilityPolicy@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C980 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopVisibilityPolicy,CVirtualDesktopVisibilityPolicy,IVirtualDesktopNotification * &>(
        CVirtualDesktopVisibilityPolicy **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  CVirtualDesktopVisibilityPolicy *v5; // rax
  CVirtualDesktopVisibilityPolicy *v6; // rax
  __int64 v7; // rdx
  CVirtualDesktopVisibilityPolicy *v8; // rdi
  volatile int *v9; // rdx
  CVirtualDesktopVisibilityPolicy *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CVirtualDesktopVisibilityPolicy *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CVirtualDesktopVisibilityPolicy::CVirtualDesktopVisibilityPolicy(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 2, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopVisibilityPolicy *)((char *)v8 + 12), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
