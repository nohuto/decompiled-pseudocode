/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1805657C0
 * Callers:
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180565900 (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEA.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180564270 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopItemFactory@@QEAA@XZ @ 0x180565854 (--0VirtualDesktopItemFactory@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemFactory,VirtualDesktopItemFactory,IVirtualDesktopManagerInternal * &>(
        VirtualDesktopItemFactory **a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  VirtualDesktopItemFactory *v5; // rax
  VirtualDesktopItemFactory *v6; // rax
  __int64 v7; // rdx
  VirtualDesktopItemFactory *v8; // rdi
  volatile int *v9; // rdx
  VirtualDesktopItemFactory *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (VirtualDesktopItemFactory *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = VirtualDesktopItemFactory::VirtualDesktopItemFactory(v5);
    v7 = *a2;
    v8 = v6;
    v11 = v6;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)v6 + 2, v7);
    if ( v8 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItemFactory *)((char *)v8 + 12), v9);
    *a1 = v8;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
