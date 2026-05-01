/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A8CB8
 * Callers:
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A96F8 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1804A8DA4 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A91D4 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A9310 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopIt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,HMONITOR__ * &,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopItemCollection **a1,
        VirtualDesktopItemCollection *a2,
        struct IVirtualDesktopItemFactory **a3,
        struct IVirtualDesktopManagerInternal **a4,
        struct IVirtualDesktopNotificationService **a5)
{
  VirtualDesktopItemCollection *v8; // rax
  int v9; // esi
  VirtualDesktopItemCollection *v10; // rdi
  HMONITOR v11; // rdx
  volatile int *v12; // rdx
  VirtualDesktopItemCollection *v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = a2;
  *a1 = 0LL;
  v8 = (VirtualDesktopItemCollection *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( v8 )
  {
    v10 = VirtualDesktopItemCollection::VirtualDesktopItemCollection(v8);
    v14 = v10;
    v9 = VirtualDesktopItemCollection::RuntimeClassInitialize(v10, v11, *a3, *a4, *a5);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItemCollection *)((char *)v10 + 156), v12);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
