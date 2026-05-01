/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180198DA4
 * Callers:
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x180198CE8 (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x18013BA90 (--4-$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegi.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18014041C (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0VirtualDesktopPersistence@@QEAA@XZ @ 0x180198E38 (--0VirtualDesktopPersistence@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &>(
        VirtualDesktopPersistence **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  VirtualDesktopPersistence *v5; // rax
  VirtualDesktopPersistence *v6; // rax
  __int64 v7; // rdx
  VirtualDesktopPersistence *v8; // rdi
  volatile int *v9; // rdx
  VirtualDesktopPersistence *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (VirtualDesktopPersistence *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = VirtualDesktopPersistence::VirtualDesktopPersistence(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopRegistryHelpers>::operator=((__int64 *)v6 + 2, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopPersistence *)((char *)v8 + 12), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
