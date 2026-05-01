/*
 * XREFs of ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78
 * Callers:
 *     ??1AppViewDataSourceAdapterBase@@IEAA@XZ @ 0x18004E650 (--1AppViewDataSourceAdapterBase@@IEAA@XZ.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180094910 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z @ 0x1800D7CBC (-GetAppViewManager@TaskFlowImmersiveShellBroker@@AEAAJPEAPEAUIApplicationViewCollection@@@Z.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801224E0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?unsubscribe_from_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18017C5F0 (-unsubscribe_from_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEA.c)
 *     ?unsubscribe_from_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x18017C620 (-unsubscribe_from_services@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801806C8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::operator() @ 0x1801B68C8 (_lambda_0ccf2911bb3556e965c79eb60c053427_--operator().c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x1801B95F0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_1801B95F0.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BDA00 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1803428E4 (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180342FB8 (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180383670 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     _lambda_67d44a18aa71790abd3976d622df6952_::operator() @ 0x1803C269C (_lambda_67d44a18aa71790abd3976d622df6952_--operator().c)
 *     ?OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1803E5320 (-OverrideNavigationLevelForView@WindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@.c)
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EB32C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ?GetTombstonedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1803EE2F0 (-GetTombstonedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr.c)
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1803EEF80 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1803EF430 (-OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInter.c)
 *     ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x1803EF660 (-PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x1803F457C (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1803F5190 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F6490 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6770 (-UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagem.c)
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6FB0 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 *     ?UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F7CA0 (-UwpWindowVisibilityChanged@UwpWindowEventDispatcher@@UEAAJPEAUIWindowVisibilityChangedEventArgs.c)
 *     ?WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F8040 (-WindowRemoved@UwpWindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     _lambda_00182c6ee200e78e0959b7edcc3d9c9f_::operator() @ 0x1803FFC58 (_lambda_00182c6ee200e78e0959b7edcc3d9c9f_--operator().c)
 *     _lambda_ae322bdbb7ebce1880ae0a7995b294cd_::operator() @ 0x180401528 (_lambda_ae322bdbb7ebce1880ae0a7995b294cd_--operator().c)
 *     _lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator() @ 0x180401B68 (_lambda_d2a465ae199f4521f0e17712fd5e9c58_--operator().c)
 *     ?SetUwpWindowContext@UwpWindowWrapperBase@@UEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180417E90 (-SetUwpWindowContext@UwpWindowWrapperBase@@UEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManageme.c)
 *     ?UwpWindowRemoved@UwpWindowWrapperBase@@UEAAJXZ @ 0x180418930 (-UwpWindowRemoved@UwpWindowWrapperBase@@UEAAJXZ.c)
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18049BEE0 (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049C620 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@Z @ 0x18049C93C (-CreateThumbnailsFromWindows@CAppThumbnailWindow@@IEAAJV-$com_ptr_t@UIDCompThumbnail@@Uerr_retur.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18049CC94 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x18049D170 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_18049D170.c)
 *     ?SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompThumbnailAnimation@@_N@Z @ 0x18049D468 (-SetRectAndCallback@CAppThumbnailWindow@@IEAAJAEBUCRect@Geometry@@PEAUIDCompThumbnail@@W4DCompTh.c)
 *     ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x18049D5F8 (-Uninitialize@CAppThumbnailWindow@@IEAAXXZ.c)
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail.c)
 *     ??$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18055AA6C (--$com_weak_query_failfast@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Window.c)
 *     ?reset@?$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x18055BF9C (-reset@-$unique_winrt_event_token@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windo.c)
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180568374 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 *     ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x18056858C (-RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV-$basic_string@GU-$char_traits@G@.c)
 *     ?TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805688B0 (-TerminateApp@Win32AppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@W.c)
 *     ??$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIServiceProvider@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180569980 (--$CoCreateInstance@UIServiceProvider@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr_t@UIServi.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1805ACD48 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1805ACDD8 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x180606394 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
