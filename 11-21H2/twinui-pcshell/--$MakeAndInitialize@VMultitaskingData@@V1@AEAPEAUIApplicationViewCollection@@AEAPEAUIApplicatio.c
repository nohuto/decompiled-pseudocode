/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804A0548
 * Callers:
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A0930 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??0MultitaskingData@@QEAA@XZ @ 0x1804A06CC (--0MultitaskingData@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A0908 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1804A0BAC (-RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,enum SwitchItemFilterBehavior &>(
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
        _QWORD *a11,
        _QWORD *a12,
        _DWORD *a13)
{
  MultitaskingData *v16; // rax
  int v17; // ebx
  MultitaskingData *v18; // r14
  volatile int *v19; // rdx
  MultitaskingData *v21; // [rsp+C0h] [rbp+8h] BYREF
  _QWORD *v22; // [rsp+C8h] [rbp+10h]

  v22 = a2;
  *a1 = 0LL;
  v16 = (MultitaskingData *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
  {
    v18 = MultitaskingData::MultitaskingData(v16);
    v21 = v18;
    v17 = MultitaskingData::RuntimeClassInitialize(v18, *v22, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11, *a12, *a13);
    if ( v17 >= 0 )
    {
      if ( v18 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((MultitaskingData *)((char *)v18 + 12), v19);
      *a1 = v18;
      v17 = 0;
    }
    Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(&v21);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v17;
}
