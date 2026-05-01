/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@AEAW4VirtualDesktopPersistenceMode@@@Z @ 0x180110770
 * Callers:
 *     ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@W4VirtualDesktopPersistenceMode@@AEBU_GUID@@PEAPEAX@Z @ 0x1801106AC (-VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@W4VirtualDeskt.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x180110800 (--4-$ComPtr@UIVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopRegi.c)
 *     ??0VirtualDesktopPersistence@@QEAA@XZ @ 0x180110864 (--0VirtualDesktopPersistence@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C890 (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &,enum VirtualDesktopPersistenceMode &>(
        VirtualDesktopPersistence **a1,
        __int64 *a2,
        int *a3)
{
  unsigned int v3; // esi
  VirtualDesktopPersistence *v7; // rax
  VirtualDesktopPersistence *v8; // rax
  __int64 v9; // rdx
  VirtualDesktopPersistence *v10; // rdi
  int v11; // ebx
  volatile int *v12; // rdx
  VirtualDesktopPersistence *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (VirtualDesktopPersistence *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = VirtualDesktopPersistence::VirtualDesktopPersistence(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopRegistryHelpers>::operator=((char *)v8 + 16, v9);
    *((_DWORD *)v10 + 6) = v11;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopPersistence *)((char *)v10 + 12), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
