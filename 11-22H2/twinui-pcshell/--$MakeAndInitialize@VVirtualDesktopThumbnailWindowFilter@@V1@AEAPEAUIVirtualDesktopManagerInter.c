/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18055ED4C
 * Callers:
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x18055FCE0 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x18055EE70 (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x18055F65C (-InternalRelease@-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18055FA20 (-RuntimeClassInitialize@VirtualDesktopThumbnailWindowFilter@@QEAAJPEAUIVirtualDesktopManagerInte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopThumbnailWindowFilter,VirtualDesktopThumbnailWindowFilter,IVirtualDesktopManagerInternal * &,ITabletModeController * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopThumbnailWindowFilter **a1,
        struct IVirtualDesktopManagerInternal **a2,
        struct ITabletModeController **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  VirtualDesktopThumbnailWindowFilter *v8; // rax
  int v9; // esi
  VirtualDesktopThumbnailWindowFilter *v10; // rdi
  volatile int *v11; // rdx
  VirtualDesktopThumbnailWindowFilter *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopThumbnailWindowFilter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v10 = VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(v8);
    v13 = v10;
    v9 = VirtualDesktopThumbnailWindowFilter::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference(
          (VirtualDesktopThumbnailWindowFilter *)((char *)v10 + 20),
          v11);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
