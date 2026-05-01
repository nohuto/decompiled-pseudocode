/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1800B5544
 * Callers:
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800B5868 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x1800B5364 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x1800B5670 (--0CVirtualDesktopManager@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18013B9E0 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopNotification **a4,
        struct IVirtualDesktopForegroundPolicy **a5,
        struct IVirtualDesktopPersistence **a6,
        struct IVirtualDesktopGroupedViewsPolicy **a7,
        struct IVirtualDesktopLock **a8)
{
  CVirtualDesktopManager *v12; // rax
  volatile signed __int64 *v13; // rdi
  volatile int *v14; // rdx
  int v15; // esi
  signed __int64 v16; // rax
  signed __int64 v18; // rtt
  _QWORD v19[2]; // [rsp+40h] [rbp-28h] BYREF

  *a1 = 0LL;
  v12 = (CVirtualDesktopManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19[0] = v12;
  if ( v12 )
  {
    v19[1] = v12;
    v13 = (volatile signed __int64 *)CVirtualDesktopManager::CVirtualDesktopManager(v12);
    v19[0] = v13;
    v15 = CVirtualDesktopManager::RuntimeClassInitialize(
            (CVirtualDesktopManager *)v13,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8);
    if ( v15 >= 0 )
    {
      if ( v13 )
      {
        v16 = *((_QWORD *)v13 + 11);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v18 = v16;
            v16 = _InterlockedCompareExchange64(v13 + 11, v16 + 1, v16);
            if ( v18 != v16 )
              continue;
          }
          goto LABEL_7;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
      }
LABEL_7:
      *a1 = v13;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
