/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x180571550
 * Callers:
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x180571BC8 (-VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z @ 0x18013959C (--4-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItem@@QEAA@XZ @ 0x1805715F4 (--0VirtualDesktopItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x180571A78 (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
        VirtualDesktopItem **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v5; // edi
  VirtualDesktopItem *v7; // rax
  VirtualDesktopItem *v8; // rax
  __int64 v9; // rdx
  VirtualDesktopItem *v10; // rsi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  VirtualDesktopItem *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  *a1 = 0LL;
  v7 = (VirtualDesktopItem *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = VirtualDesktopItem::VirtualDesktopItem(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v14 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=((__int64 *)v8 + 11, v9);
    Microsoft::WRL::ComPtr<IVirtualDesktop>::operator=((__int64 *)v10 + 12, v11);
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItem *)((char *)v10 + 84), v12);
    *a1 = v10;
    Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
