/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x18011242C
 * Callers:
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801113CC (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 * Callees:
 *     ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1801126FC (-RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PE.c)
 *     ??0VirtualDesktopSwitchAnimator@@QEAA@XZ @ 0x180112D58 (--0VirtualDesktopSwitchAnimator@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ @ 0x180161E0C (-InternalRelease@-$ComPtr@VVirtualDesktopSwitchAnimator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopSwitchAnimator,VirtualDesktopSwitchAnimator,IVirtualDesktopManagerPrivate * &,IVirtualDesktopAnimationSyncNotificationServicePrivate * &,IMultitaskingViewVisibilityService * &>(
        VirtualDesktopSwitchAnimator **a1,
        struct IVirtualDesktopManagerPrivate **a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate **a3,
        struct IMultitaskingViewVisibilityService **a4)
{
  VirtualDesktopSwitchAnimator *v8; // rax
  VirtualDesktopSwitchAnimator *v9; // rax
  struct IMultitaskingViewVisibilityService *v10; // r9
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v11; // r8
  VirtualDesktopSwitchAnimator *v12; // rbx
  struct IVirtualDesktopManagerPrivate *v13; // rdx
  volatile int *v14; // rdx
  int v15; // edi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  VirtualDesktopSwitchAnimator *v19; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopSwitchAnimator *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = VirtualDesktopSwitchAnimator::VirtualDesktopSwitchAnimator(v8);
    v10 = *a4;
    v11 = *a3;
    v12 = v9;
    v13 = *a2;
    v19 = v9;
    v15 = VirtualDesktopSwitchAnimator::RuntimeClassInitialize(v9, v13, v11, v10);
    if ( v15 >= 0 )
    {
      if ( v12 )
      {
        v16 = *((_QWORD *)v12 + 4);
        while ( v16 >= 0 )
        {
          if ( (_DWORD)v16 != 0x7FFFFFFF )
          {
            v17 = v16;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 4, v16 + 1, v16);
            if ( v17 != v16 )
              continue;
          }
          goto LABEL_8;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v16 + 16), v14);
      }
LABEL_8:
      *a1 = v12;
      v15 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopSwitchAnimator>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
