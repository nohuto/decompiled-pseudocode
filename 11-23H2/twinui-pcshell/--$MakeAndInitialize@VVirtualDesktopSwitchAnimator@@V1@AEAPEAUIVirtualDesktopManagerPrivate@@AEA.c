/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180147878
 * Callers:
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x180147798 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x18013BBC0 (-RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PE.c)
 *     ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x18014795C (--0VirtualDesktopSwitchAnimator@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180197664 (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &,IMultitaskingViewVisibilityService * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate **a3,
        struct IMultitaskingViewVisibilityService **a4)
{
  VirtualDesktopSwitchAnimator *v8; // rax
  volatile signed __int64 *v9; // rdi
  volatile int *v10; // rdx
  int v11; // esi
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  volatile signed __int64 *v15; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopSwitchAnimator *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = (volatile signed __int64 *)VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(v8);
    v15 = v9;
    v11 = VirtualDesktopSwitchAnimator::RuntimeClassInitialize((VirtualDesktopSwitchAnimator *)v9, *a2, *a3, *a4);
    if ( v11 >= 0 )
    {
      if ( v9 )
      {
        v12 = *((_QWORD *)v9 + 5);
        while ( v12 >= 0 )
        {
          if ( (_DWORD)v12 != 0x7FFFFFFF )
          {
            v13 = v12;
            v12 = _InterlockedCompareExchange64(v9 + 5, v12 + 1, v12);
            if ( v13 != v12 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v12 + 16), v10);
      }
LABEL_8:
      *a1 = v9;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
