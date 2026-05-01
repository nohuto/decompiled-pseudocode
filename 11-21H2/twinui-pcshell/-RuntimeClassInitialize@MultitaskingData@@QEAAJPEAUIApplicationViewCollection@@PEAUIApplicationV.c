/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingData@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x1804A0BAC
 * Callers:
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x1804A0548 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ??4?$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@Z @ 0x1800FE0AC (--4-$ComPtr@UIImmersiveSettingsCache@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveSettingsCache@@@.c)
 *     ??4?$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapServiceProvider@@@Z @ 0x1801169CC (--4-$ComPtr@UISnapServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUISnapServiceProvider@@@Z.c)
 *     ??4?$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoader@@@Z @ 0x180116A1C (--4-$ComPtr@UIApplicationViewIconLoader@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewIconLoa.c)
 *     ??4?$ComPtr@UIVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopThumbnailWindowFilter@@@Z @ 0x1804A0760 (--4-$ComPtr@UIVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDeskt.c)
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A0D08 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopM.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A6B48 (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8308 (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
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
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  const struct _GUID *v16; // rcx
  int Instance; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v24; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IVirtualDesktopThumbnailWindowFilter>::operator=(a1 + 7, a4);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  Instance = SwitchItemFactory_CreateInstance(v16, &v24);
  v18 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1 + 2);
    Instance = SwitchItemCollection_CreateInstance(v24, a2, a3, a11, a12, a13);
    v18 = Instance;
    if ( Instance >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
        0,
        v20,
        v21);
      Instance = MultitaskingData::_InitializeVirtualDesktopComponents((MultitaskingData *)a1, 0LL, a5, a6, a7);
      v18 = Instance;
      if ( Instance >= 0 )
      {
        Microsoft::WRL::ComPtr<IImmersiveSettingsCache>::operator=(a1 + 8, a8);
        Microsoft::WRL::ComPtr<ISnapServiceProvider>::operator=(a1 + 9, a9);
        Microsoft::WRL::ComPtr<IApplicationViewIconLoader>::operator=(a1 + 10, a10);
        v18 = 0;
        goto LABEL_9;
      }
      v19 = 87LL;
    }
    else
    {
      v19 = 84LL;
    }
  }
  else
  {
    v19 = 83LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
    (const char *)(unsigned int)Instance);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  return v18;
}
