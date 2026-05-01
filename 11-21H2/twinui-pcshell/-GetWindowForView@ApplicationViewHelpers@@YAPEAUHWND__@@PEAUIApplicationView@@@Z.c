/*
 * XREFs of ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930
 * Callers:
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x18004FE80 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z @ 0x18004FF34 (-IsTabWindowOwner@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180056218 (-_PersistPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1800568E0 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x18008BA90 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x180098920 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800994B0 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800998E0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x1800C4260 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C4700 (-GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800C4E48 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x1800C4F58 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800E7040 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F1820 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800FE1D4 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180120140 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?ViewVirtualDesktopChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x18012B230 (-ViewVirtualDesktopChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 *     ?OnApplicationViewChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18012B280 (-OnApplicationViewChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@w.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1801302F4 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18013BD90 (-OnApplicationViewChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIApplicationView@@W4APPLIC.c)
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180147140 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::operator() @ 0x1801EA6B8 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--operator().c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x180238076 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x180320120 (-OnViewClosing@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     _lambda_67d44a18aa71790abd3976d622df6952_::operator() @ 0x1803C269C (_lambda_67d44a18aa71790abd3976d622df6952_--operator().c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x1803C7B8C (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1803C9530 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     ?GetSwitchItemForWindow@AppViewDataSourceAdapter@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180454530 (-GetSwitchItemForWindow@AppViewDataSourceAdapter@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXXZ @ 0x180454FD0 (-ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXXZ.c)
 *     ?SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktop@@@Z @ 0x18049E018 (-SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollect.c)
 *     ?RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIApplicationViewCollection@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUITouchGestureSettings@@@Z @ 0x1804A1E70 (-RuntimeClassInitialize@CAltTabViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManage.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x1804ABDB0 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804B365C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_::operator() @ 0x1804B3EE0 (_lambda_51a2f8a6ca084dc5a8b9443e2ed32d78_--operator().c)
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x1804B4280 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC1F0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804BC520 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E05C4 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z @ 0x1804E0E30 (-_PrepareTaggingInfoForApp@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2AE0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E2EC0 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E34E8 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F0D80 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z @ 0x180503B3C (-GetFrameRectForView@TabletModePositioner@@CAXPEAUIApplicationView@@PEAUtagRECT@@@Z.c)
 *     ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1805055B8 (-IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WIN.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180505920 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1805065F0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x180515040 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x180515430 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x180517540 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x180524340 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x180528084 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x180528B00 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z @ 0x180529764 (-OnArrangedWindowBorderEnter@JointResize@@AEAAJPEAUHWND__@@H@Z.c)
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18052BEB8 (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x180532EC0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180538B10 (-RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DET.c)
 *     ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A588 (-IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Win.c)
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x1805939D0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 *     ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18059772C (-ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ.c)
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18059DAE0 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 *     ?_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@@Z @ 0x18059E80C (-_ShouldShowViewInSnapAssist@CSnapAssistControllerBase@@IEAA_NPEAUIImmersiveMonitor@@PEAUIApplic.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1805A0A50 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 *     ?GetWindow@CSnappedWindow@@UEBAPEAUHWND__@@XZ @ 0x1805AB560 (-GetWindow@CSnappedWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z @ 0x1805AB698 (-RuntimeClassInitialize@CSnappedWindow@@QEAAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@@Z.c)
 *     ?CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFA40 (-CanResizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFBD4 (-IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18060E8A0 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18060EDD0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetWindowForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2)
{
  __int64 (__fastcall **v2)(ApplicationViewHelpers *, GUID *, __int64); // rax
  int (__fastcall *v4)(ApplicationViewHelpers *, GUID *, __int64); // rsi
  __int64 v5; // rdi
  __int64 (__fastcall **v6)(ApplicationViewHelpers *, GUID *, __int64); // rax
  __int64 (__fastcall *v7)(ApplicationViewHelpers *, GUID *, __int64); // rsi
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64); // rdi
  _QWORD *v12; // rax
  __int64 AddressOf; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, GUID *, __int64 *); // rsi
  __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v25; // rdi
  int v26; // [rsp+20h] [rbp-20h]
  __int64 v27; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v30; // [rsp+70h] [rbp+30h] BYREF
  __int64 v31; // [rsp+78h] [rbp+38h] BYREF
  __int64 v32; // [rsp+80h] [rbp+40h] BYREF
  __int64 v33; // [rsp+88h] [rbp+48h] BYREF

  v2 = *this;
  v33 = 0LL;
  v27 = 0LL;
  v4 = (int (__fastcall *)(ApplicationViewHelpers *, GUID *, __int64))*v2;
  v5 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v27, &v30);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v5);
  if ( v4((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v5) < 0 )
  {
    v6 = *this;
    v32 = 0LL;
    v7 = *v6;
    v8 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v32, &v30);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    v9 = v7((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v8);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v9,
        v26);
      goto LABEL_10;
    }
    v10 = v32;
    v31 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 24LL);
    v12 = Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v31, &v30);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v12);
    v14 = v11(v10, AddressOf);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v14,
        v26);
      goto LABEL_9;
    }
    v15 = v31;
    v30 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v31 + 24LL);
    v17 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v28);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v17);
    v18 = v16(v15, 5LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v17);
    if ( v18 == -2147023728 )
    {
      v23 = v31;
      v24 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v31 + 24LL);
      v25 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v30, &v28);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v25);
      v18 = v24(v23, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v25);
    }
    if ( v18 < 0 )
    {
      v22 = 45LL;
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 32LL))(v30, &v33);
      if ( v18 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
LABEL_9:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v31);
LABEL_10:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v32);
        goto LABEL_11;
      }
      v22 = 47LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v18,
      v26);
    goto LABEL_8;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &v33);
  if ( v21 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)(unsigned int)v21,
      v26);
LABEL_11:
  v19 = v33;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  return v19;
}
