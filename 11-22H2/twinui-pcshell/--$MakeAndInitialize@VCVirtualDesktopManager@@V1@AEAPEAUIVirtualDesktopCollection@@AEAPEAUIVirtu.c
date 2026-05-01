/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x18018CB94
 * Callers:
 *     ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18018CAF0 (-CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVis.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x18013B204 (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18017505C (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x18018CCBC (--0CVirtualDesktopManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,std::nullptr_t,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopNotification **a4,
        struct IVirtualDesktopForegroundPolicy **a5,
        struct IVirtualDesktopPersistence **a6,
        volatile signed __int64 *a7,
        struct IVirtualDesktopLock **a8)
{
  CVirtualDesktopManager *v12; // rax
  volatile signed __int64 *v13; // rdi
  volatile int *v14; // rdx
  int v15; // esi
  signed __int64 v16; // rax
  signed __int64 v18; // rtt
  struct IUnknown *v19; // [rsp+30h] [rbp-28h]

  *a1 = 0LL;
  v12 = (CVirtualDesktopManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = (volatile signed __int64 *)CVirtualDesktopManager::CVirtualDesktopManager(v12);
    a7 = v13;
    v15 = CVirtualDesktopManager::RuntimeClassInitialize(
            (CVirtualDesktopManager *)v13,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            v19,
            *a8);
    if ( v15 >= 0 )
    {
      if ( v13 )
      {
        v16 = *((_QWORD *)v13 + 12);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v18 = v16;
            v16 = _InterlockedCompareExchange64(v13 + 12, v16 + 1, v16);
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
    Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease((__int64 *)&a7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
