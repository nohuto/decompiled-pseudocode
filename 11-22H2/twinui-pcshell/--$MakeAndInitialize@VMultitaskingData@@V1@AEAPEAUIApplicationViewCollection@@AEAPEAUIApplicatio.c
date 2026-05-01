/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x18055FF28
 * Callers:
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1805602F0 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??0MultitaskingData@@QEAA@XZ @ 0x180560084 (--0MultitaskingData@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1805602C8 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@@Z @ 0x18056055C (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,IUnknown * &,enum SwitchItemFilterBehavior &>(
        MultitaskingData **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        __int64 a11)
{
  MultitaskingData *v15; // rax
  int v16; // ebx
  MultitaskingData *v17; // rsi
  volatile int *v18; // rdx
  MultitaskingData *v20; // [rsp+A0h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = (MultitaskingData *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v15 )
  {
    v17 = MultitaskingData::MultitaskingData(v15);
    v20 = v17;
    a11 = 0LL;
    v16 = MultitaskingData::RuntimeClassInitialize(v17, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
    if ( v16 >= 0 )
    {
      if ( v17 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((MultitaskingData *)((char *)v17 + 12), v18);
      *a1 = v17;
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(&v20);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v16;
}
