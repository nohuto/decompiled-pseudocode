/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopRegistryHelpers@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRegistryHelpers@@@Z @ 0x180191E3C
 * Callers:
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180191D88 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ @ 0x1801403CC (-InternalRelease@-$ComPtr@VVirtualDesktopRegistryHelpers@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0VirtualDesktopRegistryHelpers@@QEAA@XZ @ 0x180191EC4 (--0VirtualDesktopRegistryHelpers@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x180191F28 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRegistryHelpers,VirtualDesktopRegistryHelpers,>(
        VirtualDesktopRegistryHelpers **a1)
{
  VirtualDesktopRegistryHelpers *v2; // rax
  VirtualDesktopRegistryHelpers *v3; // rdi
  volatile int *v4; // rdx
  int v5; // ebx
  VirtualDesktopRegistryHelpers *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (VirtualDesktopRegistryHelpers *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v7 = VirtualDesktopRegistryHelpers::VirtualDesktopRegistryHelpers(v2);
    v3 = v7;
    v5 = VirtualDesktopRegistryHelpers::RuntimeClassInitialize(v7);
    if ( v5 >= 0 )
    {
      if ( v3 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopRegistryHelpers *)((char *)v3 + 12), v4);
      *a1 = v3;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopRegistryHelpers>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
