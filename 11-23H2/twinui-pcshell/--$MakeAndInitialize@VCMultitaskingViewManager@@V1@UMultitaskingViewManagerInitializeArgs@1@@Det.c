/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1801268CC
 * Callers:
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x180126748 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 * Callees:
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x1800FF1CC (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180140284 (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
        CMultitaskingViewManager **a1,
        const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *a2)
{
  CMultitaskingViewManager *v4; // rax
  CMultitaskingViewManager *v5; // rdi
  volatile int *v6; // rdx
  int v7; // esi
  CMultitaskingViewManager *v9; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewManager *v10; // [rsp+50h] [rbp+18h]
  CMultitaskingViewManager *v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (CMultitaskingViewManager *)operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v10 = v4;
  if ( v4 )
  {
    v11 = v4;
    v5 = CMultitaskingViewManager::CMultitaskingViewManager(v4);
    v9 = v5;
    v7 = CMultitaskingViewManager::RuntimeClassInitialize(v5, a2);
    if ( v7 >= 0 )
    {
      if ( v5 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((CMultitaskingViewManager *)((char *)v5 + 36), v6);
      *a1 = v5;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
