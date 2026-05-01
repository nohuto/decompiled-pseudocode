/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x180116350
 * Callers:
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@AEBU_GUID@@PEAPEAX@Z @ 0x180116190 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 * Callees:
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x18010178C (--0CMultitaskingViewManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180117EF8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18014731C (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
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
  v4 = (CMultitaskingViewManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
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
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
