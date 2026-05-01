/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1804A89C4
 * Callers:
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B5C (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A6A90 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopItemFactory@@QEAA@XZ @ 0x1804A8A58 (--0VirtualDesktopItemFactory@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemFactory,VirtualDesktopItemFactory,HMONITOR__ * &,IVirtualDesktopManagerInternal * &>(
        VirtualDesktopItemFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  VirtualDesktopItemFactory *v7; // rax
  VirtualDesktopItemFactory *v8; // rax
  __int64 v9; // rdx
  VirtualDesktopItemFactory *v10; // rdi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  VirtualDesktopItemFactory *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (VirtualDesktopItemFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = VirtualDesktopItemFactory::VirtualDesktopItemFactory(v7);
    v9 = *a3;
    v10 = v8;
    v11 = *a2;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)v8 + 2, v9);
    *((_QWORD *)v10 + 3) = v11;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItemFactory *)((char *)v10 + 12), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
