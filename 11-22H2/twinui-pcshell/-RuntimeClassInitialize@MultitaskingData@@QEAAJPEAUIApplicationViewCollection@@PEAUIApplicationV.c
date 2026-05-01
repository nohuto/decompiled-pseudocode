/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@@Z @ 0x18056055C
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x18055FF28 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x18013A2E4 (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapServiceProvider@@@Z @ 0x18013A994 (--4-$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapServiceProvider@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoader@@@Z @ 0x18013A9E4 (--4-$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoa.c)
 *     ??4?$ComPtr@UIVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopThumbnailWindowFilter@@@Z @ 0x180560118 (--4-$ComPtr@UIVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDeskt.c)
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18056068C (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUIVirtualDesktopManagerInternal@@.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180564328 (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1805651E8 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingData::RuntimeClassInitialize(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct IVirtualDesktopNotificationService *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  const struct _GUID *v13; // rcx
  int Instance; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v19; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopThumbnailWindowFilter>::operator=(a1 + 7, a4);
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  Instance = SwitchItemFactory_CreateInstance(v13, &v19);
  v15 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
    Instance = SwitchItemCollection_CreateInstance(v19, a2, a3);
    v15 = Instance;
    if ( Instance >= 0 )
    {
      Instance = MultitaskingData::_InitializeVirtualDesktopComponents((MultitaskingData *)a1, a5, a6, a7);
      v15 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=(a1 + 8, a8);
        Microsoft::WRL::ComPtr<ISnapServiceProvider>::operator=(a1 + 9, a9);
        Microsoft::WRL::ComPtr<IApplicationViewIconLoader>::operator=(a1 + 10, a10);
        v15 = 0;
        goto LABEL_9;
      }
      v16 = 85LL;
    }
    else
    {
      v16 = 83LL;
    }
  }
  else
  {
    v16 = 82LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  return v15;
}
