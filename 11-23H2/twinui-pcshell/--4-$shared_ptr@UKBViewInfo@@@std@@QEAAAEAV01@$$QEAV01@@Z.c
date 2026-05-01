/*
 * XREFs of ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18009BDC8 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ??$?4$$T$$T$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU?$pair@$$T$$T@1@@Z @ 0x18009C4AC (--$-4$$T$$T$0A@@-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastDVRA.c)
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800AD6DC (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 *     _lambda_de295fbb3a8b8f22692faabe0885dace_::operator()_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator$_ResumeCoro$1_const_&_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_ @ 0x180204010 (_lambda_de295fbb3a8b8f22692faabe0885dace_--operator()_winrt--WindowsUdk--UI--Shell-_ea_180204010.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18020C4D8 (-ensure_data@-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18020C534 (-ensure_data@-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest@KeyboardHostingTipTests@@@t.c)
 *     std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___ @ 0x18020CC2C (std--call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___.c)
 *     ??$?4U?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@$0A@@?$pair@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803D12D8 (--$-4U-$pair@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$shared_ptr@UBroadcastD_ea_1803D12D8.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E21FC (std--_Pop_heap_hole_by_index_std--shared_ptr_GameMruItem____std--shared_ptr_GameMruItem___lambda.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E2310 (std--_Sort_heap_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d7.c)
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x1803E3158 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 *     wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180508D70 (wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x180531B78 (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@QEAA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@XZ @ 0x180543D40 (-open_and_watch_errors@-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Com.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x18054D660 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?start@?$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x180550F8C (-start@-$tip_test@U_tip_AppThumbnailTest@@@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FE91C (--$open_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_VDSlideAnimationPerfTest@@@details@tip@@@std@@XZ @ 0x1806078E8 (-ensure_data@-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18060C114 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18064FE44 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180650060 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1806501E0 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x1806507DC (-HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ.c)
 *     ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x180650E00 (-PointersDown@TouchGestureProcessor@@QEAAXI@Z.c)
 *     ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18065128C (-PointersUp@TouchGestureProcessor@@QEAAXXZ.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x180651638 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x180652498 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_81c5145ef34e7f56f193ed620fca7ca3___ @ 0x18067946C (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 *     ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067BCE0 (-OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Intern.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x18067DEC8 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x1806F81D8 (--$open_and_watch_errors@V-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@@std@@XZ @ 0x1806FC6E8 (-ensure_data@-$tip_test@U_tip_DiscoverabilityManagerTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA?A_PXZ @ 0x180702AF4 (--$open_and_watch_errors@V-$tip_test@U_tip_BootToCloudPCTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@XZ @ 0x180707DA8 (-ensure_data@-$tip_test@U_tip_BootToCloudPCTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD84 (--$open_and_watch_errors@V-$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@XZ @ 0x18071B148 (-ensure_data@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 *     ?ensure_data@?$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@XZ @ 0x18071B1A4 (-ensure_data@-$tip_test@U_tip_SwitchToRemoteTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 *     ?ensure_data@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@details@tip@@@std@@XZ @ 0x18071B200 (-ensure_data@-$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@AEBAAEAV-$shared_p.c)
 *     ?open@?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x18071C20C (-open@-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@XZ @ 0x1807240E8 (-ensure_data@-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test.c)
 *     ?ensure_data@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@XZ @ 0x180724144 (-ensure_data@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@AEBAAEAV-$shared_ptr@V-$.c)
 *     ?open@?$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z @ 0x1807248E8 (-open@-$tip_test@U_tip_RemoteSessionActivationTipTest@@@tip@@QEAA_NW4TestRetrievalOptions@@@Z.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@2@XZ @ 0x18072495C (-open_and_watch_errors@-$tip_test@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@@tip@@QEAA-AV-.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@tip@@QEAA?AV?$test_watcher@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@2@XZ @ 0x180724A0C (-open_and_watch_errors@-$tip_test@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winr.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@2@XZ @ 0x1807337D0 (-open_and_watch_errors@-$tip_test@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEAA-AV-$test_.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x18073951C (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ??$Init@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@AEAV?$shared_ptr@V?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@@4@@Z @ 0x18077BA04 (--$Init@V-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableS.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x180780F68 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<KBViewInfo>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
