/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktop@@V1@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktop@@AEAPEAUIVirtualDesktop@@AEAPEAUIThumbnailDeviceSource@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x18010EE74
 * Callers:
 *     ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA5A0 (-VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtual.c)
 * Callees:
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18010E7AC (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIThumbnailDeviceSource@@PE.c)
 *     ??0VirtualDesktop@@QEAA@XZ @ 0x18010EF68 (--0VirtualDesktop@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x18017CA98 (-InternalRelease@-$ComPtr@VVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktop,VirtualDesktop,IVirtualDesktop * &,IThumbnailDeviceSource * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktop **a2,
        struct IThumbnailDeviceSource **a3,
        struct IVirtualDesktopManagerInternal **a4,
        struct IVirtualDesktopNotificationService **a5)
{
  VirtualDesktop *v9; // rax
  volatile signed __int64 *v10; // rdi
  volatile int *v11; // rdx
  int v12; // esi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  volatile signed __int64 *v16; // [rsp+30h] [rbp-28h] BYREF

  *a1 = 0LL;
  v9 = (VirtualDesktop *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = (volatile signed __int64 *)VirtualDesktop::VirtualDesktop(v9);
    v16 = v10;
    v12 = VirtualDesktop::RuntimeClassInitialize((VirtualDesktop *)v10, *a2, *a3, *a4, *a5);
    if ( v12 >= 0 )
    {
      if ( v10 )
      {
        v13 = *((_QWORD *)v10 + 9);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v14 = v13;
            v13 = _InterlockedCompareExchange64(v10 + 9, v13 + 1, v13);
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v11);
      }
LABEL_8:
      *a1 = v10;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktop>::InternalRelease(&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
