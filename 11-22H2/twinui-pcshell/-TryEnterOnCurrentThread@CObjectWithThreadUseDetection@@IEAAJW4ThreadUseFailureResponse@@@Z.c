/*
 * XREFs of ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C
 * Callers:
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x1800142B0 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x18001CF30 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18002D5C0 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180036990 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B420 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x18004B4D0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 *     ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BBB0 (-GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEA.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x18004FC74 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ @ 0x18005EB90 (-NotifyRaiseDesktopCompleted@CMultitaskingViewServiceProvider@@UEAAJXZ.c)
 *     ?GetViewType@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18006BBC0 (-GetViewType@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJPEAW4MULTITASKING_VIEW_TYPES@@@.c)
 *     ?DismissViewAnimated@TaskViewHost@@UEAAJXZ @ 0x18006FF80 (-DismissViewAnimated@TaskViewHost@@UEAAJXZ.c)
 *     ?OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ @ 0x180070180 (-OnMonitorFrameDismissAnimationCompleted@TaskViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800709F0 (-DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     ?ToggleAllUpView@TaskViewHost@@UEAAJXZ @ 0x180070F80 (-ToggleAllUpView@TaskViewHost@@UEAAJXZ.c)
 *     ?IsViewVisible@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z @ 0x180071AA0 (-IsViewVisible@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18007A310 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x1800D2820 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonitor@@@Z @ 0x1800FCEEC (-_CreatePerMonitorComponents@CApplicationManager@@AEAAJPEAUIServiceProvider@@PEAUIImmersiveMonit.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18014B9C0 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180161D30 (-HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z.c)
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180169460 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x1801790C0 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x18017D060 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180180C80 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1801ACCD0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z @ 0x1801B2920 (-SetManagerReference@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewManager@@@Z.c)
 *     ?IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1802D0130 (-IsActiveApp@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x1802E0300 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802E0640 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     ?_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z @ 0x1803A23E4 (-_HandleApplicationRequestActivation@CApplicationManager@@AEAAJQEBUHSHELL_DATA@1@@Z.c)
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1803A91F0 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180553570 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 *     ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1805537F0 (-IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ @ 0x180563110 (-DismissView@-$CMultitaskingViewHostBase@UIPPIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180563AC0 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x180597710 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 *     ?GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitionTargetSpecialFlags@@@Z @ 0x180597800 (-GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitio.c)
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180597E80 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 *     ?ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ @ 0x1805B62E0 (-ConvertLayoutToDesktop@DesktopOperation@@UEAAJXZ.c)
 *     ?AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1805C71A0 (-AppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENC.c)
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805C7390 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS@@@Z @ 0x1805C8320 (-ReverseAppToAppSwitch@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4REVERSE_APP_SWITCH_FLAGS.c)
 *     ?SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805C8450 (-SwitchToApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z @ 0x1805C8850 (-ArrangeView@WindowArrangementOperation@@UEAAJPEAUIApplicationView@@W4ARRANGEMENT_ACTION@@@Z.c)
 *     ?ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x1805CA1C0 (-ResizeApps@AppResizeOperation@@UEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 *     ?SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z @ 0x1805CA6D0 (-SwitchBack@BackOperation@@UEAAJPEAUIApplicationView@@W4BackOperationFlags@@@Z.c)
 *     ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805CACF0 (-ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1805CAE10 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 *     ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1805CB8C0 (-ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1805CBC20 (-SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayout.c)
 *     ?SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1805CBF40 (-SwitchToEmptyLayout@TabletModePositionerOperation@@UEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?ClearLayout@PPILayoutOperation@@UEAAJXZ @ 0x1805CC430 (-ClearLayout@PPILayoutOperation@@UEAAJXZ.c)
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CC6F0 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?CreateSanitizedLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CD5C0 (-CreateSanitizedLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 *     ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1805CD6F0 (-EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CD950 (-FinalizeLayout@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 *     ?InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1805CDAE0 (-InsertApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 *     ?PerformSnapOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@@Z @ 0x1805CDEE0 (-PerformSnapOperation@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1805CE290 (-SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ.c)
 *     ?SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z @ 0x1805CE480 (-SwitchToCustomLayout@PPIWin32VtcLayoutOperation@@UEAAJPEAUIAppLayout@@@Z.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180764000 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180764110 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x180766900 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180767880 (-DisplaySettingsChange@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHA.c)
 *     ?HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180767B40 (-HandleCrossMonitorTabbing@TaskViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 *     ?IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z @ 0x180767C90 (-IsFrameWindowForHost@TaskViewHost@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?MonitorAdded@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180767D40 (-MonitorAdded@TaskViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z @ 0x180768500 (-ViewVirtualDesktopChanged@TaskViewHost@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?VirtualDesktopDestroyBegin@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1807687D0 (-VirtualDesktopDestroyBegin@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180768870 (-VirtualDesktopDestroyFailed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180768940 (-VirtualDesktopDestroyed@TaskViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18076C250 (-CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18076C510 (-DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     ?MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18076CEF0 (-MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     _lambda_0448dd6b07ee8d154ed22029eec6a770_::operator() @ 0x1807722EC (_lambda_0448dd6b07ee8d154ed22029eec6a770_--operator().c)
 *     _lambda_070e192e9fba98d43315428c14debf7b_::operator() @ 0x180772380 (_lambda_070e192e9fba98d43315428c14debf7b_--operator().c)
 *     _lambda_28e2deb1c60008eafa8d487ea9ad6bb5_::operator() @ 0x180772438 (_lambda_28e2deb1c60008eafa8d487ea9ad6bb5_--operator().c)
 *     _lambda_72e1dcf1d191a1fe628d31ef24d41038_::operator() @ 0x180772688 (_lambda_72e1dcf1d191a1fe628d31ef24d41038_--operator().c)
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x180772744 (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 *     _lambda_941eca72fc43b2c4835a5fc6680f0a4a_::operator() @ 0x1807727F8 (_lambda_941eca72fc43b2c4835a5fc6680f0a4a_--operator().c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x180772928 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 *     _lambda_ca880a75b2c5520c482e457acf4bf272_::operator() @ 0x180772A84 (_lambda_ca880a75b2c5520c482e457acf4bf272_--operator().c)
 *     _lambda_ec805711c79670d05ccf93f6b458b0f9_::operator() @ 0x180772B44 (_lambda_ec805711c79670d05ccf93f6b458b0f9_--operator().c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ @ 0x180773D40 (-DismissView@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UEAAJXZ.c)
 *     ?DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180773F50 (-DisplaySettingsChange@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONIT.c)
 *     ?MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180774D20 (-MonitorAdded@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180775F00 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 *     ?StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180776240 (-StartDismissAnimation@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x1807779D0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x18013DA18 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CObjectWithThreadUseDetection::TryEnterOnCurrentThread(__int64 a1, int a2)
{
  int v2; // ebx
  int v5; // ecx
  int ApartmentId; // ebx
  int v8; // ecx
  int v9; // eax
  unsigned int v10[4]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR Filename[264]; // [rsp+40h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 != 2 )
  {
    v5 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      v8 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v8;
    }
    else
    {
      v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v8 != 1 )
      return !TryEnterCriticalSection((LPCRITICAL_SECTION)a1) ? 0x8001010E : 0;
    if ( v2 == 1 )
    {
      v9 = IsAppCompatModeEnabled(16LL);
      v5 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v9 )
        v5 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v5;
LABEL_3:
      if ( v5 != 1 )
        return !TryEnterCriticalSection((LPCRITICAL_SECTION)a1) ? 0x8001010E : 0;
    }
  }
  if ( *(_DWORD *)(a1 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v10);
    if ( ApartmentId >= 0 && v10[0] != *(_DWORD *)(a1 + 40) )
      ApartmentId = -2147417842;
    if ( a2 == 1 )
    {
      if ( ApartmentId < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC8,
          (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
          (const char *)(unsigned int)ApartmentId);
        return (unsigned int)ApartmentId;
      }
    }
    else if ( ApartmentId < 0 )
    {
      return (unsigned int)ApartmentId;
    }
  }
  return !TryEnterCriticalSection((LPCRITICAL_SECTION)a1) ? 0x8001010E : 0;
}
