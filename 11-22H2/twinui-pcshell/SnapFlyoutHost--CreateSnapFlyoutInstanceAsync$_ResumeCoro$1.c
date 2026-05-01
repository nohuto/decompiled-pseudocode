/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x180225D0C (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180050328 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18006C49C (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRW.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 *     ??1?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FBC (--1-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@wi.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800DAED0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x18019B0C0 (--1-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x1801AA480 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@experimental@std@@@experimental@std@@@Z @ 0x1801AEF7C (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@AE.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801B0E64 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801B2828 (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x1801B7C64 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA@XZ @ 0x1801BEC14 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@@experimental@std@@@Z @ 0x1801FB824 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDa.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022183C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ??$await_transform@Uawaitable@?1??resume_background@winrt@@YA@XZ@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUDashboardManager@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_background@2@YA@XZ@@Z @ 0x180225528 (--$await_transform@Uawaitable@-1--resume_background@winrt@@YA@XZ@@-$promise_base@Up_ea_180225528.c)
 *     ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x180225564 (--$await_transform@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$r_ea_180225564.c)
 *     ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1802258D4 (--0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowT.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180225988 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@w.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802259C8 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x180225A6C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@34@IW4InputDeviceKind@9UI@WindowsUdk@4@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@5@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180228C80 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180228C80.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180228D8C (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Founda_ea_180228D8C.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x1802E917A (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1802E99C4 (-get_weak@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-AU-.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803F9E3C (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1806574F8 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?release_ref@?$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ @ 0x180657584 (-release_ref@-$com_ptr@VTouchEdgeGripperWindow@@@winrt@@AEAAXXZ.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@P8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x1806782BC (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z@SnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@P8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@_N@Z@Z @ 0x180678360 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@W_ea_180678360.c)
 *     ??$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067857C (--$SnapFlyout_CreateSnapFlyoutInstanceAsync@AEAW4SnapControlType@SnapComponent@Shell@Internal@Wi.c)
 *     ??$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x180678604 (--$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x18067868C (--$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA?A_PXZ @ 0x180678ED8 (--$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@-$com_ptr@USnapFlyoutInst.c)
 *     ??$emplace@U?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@9@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@1@@Z @ 0x180678F50 (--$emplace@U-$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ??$make_pair@AEAPEAUHMONITOR__@@AEAUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@YA?AU?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@0@AEAPEAUHMONITOR__@@AEAUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x18067939C (--$make_pair@AEAPEAUHMONITOR__@@AEAUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1806793CC (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x180679420 (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAA@XZ @ 0x180679A34 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAA@XZ @ 0x180679A94 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679A94.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKA@AA@impl@winrt@@QEAA@XZ @ 0x180679AF4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679AF4.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLA@AA@impl@winrt@@QEAA@XZ @ 0x180679B54 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679B54.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMA@AA@impl@winrt@@QEAA@XZ @ 0x180679BB4 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679BB4.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAA@XZ @ 0x180679C14 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_180679C14.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x180679DE4 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180679FD4 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18067A02C (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_18067A02C.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18067A084 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_18067A084.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18067A0DC (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_18067A0DC.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18067A134 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_18067A134.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18067A18C (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_18067A18C.c)
 *     ??4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18067A1E4 (--4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067A738 (-DismissRequested@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BIA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067ADC4 (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067AE3C (-InstanceShown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShutdown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067AEB8 (-InstanceShutdown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?PointerEntered@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BLA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067BF94 (-PointerEntered@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutI.c)
 *     ?PointerExited@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BMA@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x18067C010 (-PointerExited@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?push_back@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@2@@Z @ 0x18067E468 (-push_back@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$sh.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x18068FA04 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18069161C (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=24 #try_helpers=2
void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r13
  __int64 v3; // rcx
  _QWORD *v4; // rax
  PVOID *v5; // rdi
  __int64 v6; // rdi
  void *v7; // rdx
  const char *v8; // r9
  void *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 *v13; // r11
  __int64 v14; // rdi
  std::_Ref_count_base *v15; // rcx
  char v16; // r15
  bool v17; // di
  __int64 v18; // r9
  __int64 weak; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  std::_Ref_count_base *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // [rsp+20h] [rbp-148h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_35;
    case 2:
      SnapFlyoutTelemetry::SnapFlyout_CreateSnapFlyoutInstanceAsync<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>(a1 + 881);
      winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(
        *(_QWORD *)(a1 + 865),
        a1 + 16);
      *(_BYTE *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 848) = a1 - 96;
      *(_QWORD *)(a1 + 224) = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
                                a1 - 96,
                                (_QWORD *)(a1 + 32),
                                a1 + 24);
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_5;
      *v2 = 4;
      ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std___experimental_std___Z(
        v3,
        (void *)a1);
      return;
    case 4:
LABEL_5:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      v4 = (_QWORD *)winrt::resume_on_signal(a1 + 40, *(_QWORD *)(*(_QWORD *)(a1 + 865) + 72LL), 0LL);
      v5 = (PVOID *)___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAVSnapFlyoutHost__PEAUHWND____W4SnapControlType_SnapComponent_Shell_Internal_34_IW4InputDeviceKind_9UI_WindowsUdk_4_PEAUHMONITOR____V__tip_test_V__merged_data_U_tip_SnapFlyoutShowTest__U1__details_tip2___tip2__W4ShowFlags_5__experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                      *(_QWORD *)(a1 + 848),
                      (_QWORD *)(a1 + 96),
                      v4);
      *(_QWORD *)(a1 + 816) = v5;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v5) )
        goto LABEL_8;
      *v2 = 6;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVTouchEdgeGripperHost___N_experimental_std___experimental_std___Z(v5);
      return;
    case 5:
      winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
      goto LABEL_35;
    case 6:
LABEL_8:
      _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ(*(__int64 **)(a1 + 816));
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 40);
      *(_QWORD *)(a1 + 104) = 0LL;
      winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 112);
      if ( !*(_QWORD *)(a1 + 112) )
        goto LABEL_14;
      v6 = *(_QWORD *)(a1 + 865);
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v6 + 176), (RTL_SRWLOCK **)(a1 + 120));
      if ( !*(_DWORD *)(v6 + 168) )
      {
        wil::details::ResetEvent(*(wil::details **)(v6 + 72), v7);
        wil::details::SetEvent(*(wil::details **)(v6 + 80), v9);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 120));
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 112);
        winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
        winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
        goto LABEL_34;
      }
      if ( !*(_QWORD *)(v6 + 96) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2C6,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
          v8);
      winrt::Windows::System::DispatcherQueue::operator=(a1 + 104);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 120));
LABEL_14:
      winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 112);
      *(_QWORD *)(a1 + 128) = a1 + 104;
      *(_DWORD *)(a1 + 136) = 0;
      *(_BYTE *)(a1 + 140) = 0;
      v10 = ___await_transform_Uawaitable__1__resume_background_winrt__YA_XZ____promise_base_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt__PEAUDashboardManager_implementation_Shell_Internal_34__experimental_std__UIAsyncAction_Foundation_Windows_winrt__X_impl_winrt__QEAA_A_P__QEAUawaitable__1__resume_background_2_YA_XZ__Z(
              *(_QWORD *)(a1 + 848),
              (_QWORD *)(a1 + 144),
              a1 + 128);
      *(_QWORD *)(a1 + 832) = v10;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready()
        || (*v2 = 8,
            !(unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__AEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAU_RTL_SRWLOCK__P6AXPEAU1__Z_1_ReleaseSRWLockExclusive__YAX0_ZU__integral_constant__K_00_wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil___wil___experimental_std___experimental_std___Z(v10)) )
      {
LABEL_18:
        _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_XZ(*(_QWORD *)(a1 + 832));
        v11 = a1 + 152;
        winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 152);
        if ( *(_QWORD *)(a1 + 152) )
        {
          v12 = *(_QWORD *)(a1 + 865);
          wil::srwlock::lock_shared((RTL_SRWLOCK *)(v12 + 176), (RTL_SRWLOCK **)(a1 + 160));
          if ( *(_DWORD *)(a1 + 885) != *(_DWORD *)(v12 + 48) )
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                          a1 + 905,
                          (__int64 *)(a1 + 168))
                     + 266) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>((void **)(a1 + 168));
            tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)(a1 + 905));
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 160));
            winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 152);
            winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
            goto LABEL_34;
          }
          SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
            v12,
            (_QWORD *)(a1 + 176));
          v14 = *v13;
          if ( *v13 )
          {
            *(_DWORD *)(a1 + 192) = *(_DWORD *)(*(_QWORD *)(v14 + 8) + 320LL);
            SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>();
            winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v14 + 8));
          }
          v15 = *(std::_Ref_count_base **)(a1 + 184);
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 160));
          v16 = *(_DWORD *)(a1 + 913) & 1;
          v17 = (*(_DWORD *)(a1 + 913) & 2) != 0;
          winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>(a1 + 200);
          v41 = v17;
          LOBYTE(v18) = v16;
          if ( (unsigned __int8)winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Initialize(
                                  *(_QWORD *)(a1 + 200),
                                  *(unsigned int *)(a1 + 885),
                                  *(_QWORD *)(a1 + 873),
                                  v18,
                                  v41,
                                  *(_DWORD *)(a1 + 881),
                                  *(_DWORD *)(a1 + 889),
                                  *(_QWORD *)(a1 + 897)) )
          {
            wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v12 + 176), (RTL_SRWLOCK **)(a1 + 208));
            SnapFlyoutHost::FlyoutInstanceRecord::FlyoutInstanceRecord((__int64 *)(a1 + 240), a1 + 905);
            winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(
              a1 + 200,
              a1 + 352);
            weak = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 384);
            *(_QWORD *)(a1 + 368) = SnapFlyoutHost::OnFlyoutInstanceReady;
            *(_DWORD *)(a1 + 376) = 0;
            *(_OWORD *)(a1 + 720) = *(_OWORD *)(a1 + 368);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 360,
              weak);
            v21 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
                    a1 + 352,
                    a1 + 392,
                    v20,
                    a1 + 360);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 256,
              v21);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BIA_AA_impl_winrt__QEAA_XZ(a1 + 392);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 360));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 384));
            v22 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 432);
            *(_QWORD *)(a1 + 416) = SnapFlyoutHost::OnFlyoutInstanceShown;
            *(_DWORD *)(a1 + 424) = 0;
            *(_OWORD *)(a1 + 736) = *(_OWORD *)(a1 + 416);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler::SnapFlyoutInstanceShownHandler(
              a1 + 408,
              v22);
            v24 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShown(
                    a1 + 352,
                    a1 + 440,
                    v23,
                    a1 + 408);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 272,
              v24);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJA_AA_impl_winrt__QEAA_XZ(a1 + 440);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 408));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 432));
            v25 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 480);
            *(_QWORD *)(a1 + 464) = SnapFlyoutHost::OnFlyoutInstanceShutdown;
            *(_DWORD *)(a1 + 472) = 0;
            *(_OWORD *)(a1 + 752) = *(_OWORD *)(a1 + 464);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 456,
              v25);
            v27 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShutdown(
                    a1 + 352,
                    a1 + 488,
                    v26,
                    a1 + 456);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 288,
              v27);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKA_AA_impl_winrt__QEAA_XZ(a1 + 488);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 456));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 480));
            v28 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 528);
            *(_QWORD *)(a1 + 512) = SnapFlyoutHost::OnFlyoutInstancePointerEntered;
            *(_DWORD *)(a1 + 520) = 0;
            *(_OWORD *)(a1 + 768) = *(_OWORD *)(a1 + 512);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 504,
              v28);
            v30 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerEntered(
                    a1 + 352,
                    a1 + 536,
                    v29,
                    a1 + 504);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 304,
              v30);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BLA_AA_impl_winrt__QEAA_XZ(a1 + 536);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 504));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 528));
            v31 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 576);
            *(_QWORD *)(a1 + 560) = SnapFlyoutHost::OnFlyoutInstancePointerExited;
            *(_DWORD *)(a1 + 568) = 0;
            *(_OWORD *)(a1 + 784) = *(_OWORD *)(a1 + 560);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 552,
              v31);
            v33 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerExited(
                    a1 + 352,
                    a1 + 584,
                    v32,
                    a1 + 552);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 320,
              v33);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BMA_AA_impl_winrt__QEAA_XZ(a1 + 584);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 552));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 576));
            v34 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v12, a1 + 624);
            *(_QWORD *)(a1 + 608) = SnapFlyoutHost::OnFlyoutInstanceDismissRequested;
            *(_DWORD *)(a1 + 616) = 0;
            *(_OWORD *)(a1 + 800) = *(_OWORD *)(a1 + 608);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 600,
              v34);
            v36 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
                    a1 + 352,
                    a1 + 632,
                    v35,
                    a1 + 600);
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 336,
              v36);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BNA_AA_impl_winrt__QEAA_XZ(a1 + 632);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 600));
            winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 624));
            winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
              a1 + 248,
              a1 + 200);
            v37 = std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
                    a1 + 648,
                    a1 + 240);
            std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::push_back(v12 + 24, v37);
            v38 = *(std::_Ref_count_base **)(a1 + 656);
            if ( v38 )
              std::_Ref_count_base::_Decref(v38);
            if ( *(_DWORD *)(a1 + 881) == 2 )
            {
              v39 = std::make_pair<HMONITOR__ * &,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance &>(
                      a1 + 664,
                      a1 + 897,
                      a1 + 352);
              std::_Tree<std::_Tmap_traits<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>,0>>::emplace<std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>(
                v12 + 144,
                a1 + 680,
                v39);
              std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>((char *)(a1 + 664));
              *(_DWORD *)(v12 + 120) = *(_DWORD *)(a1 + 889);
              *(_QWORD *)(v12 + 128) = *(_QWORD *)(a1 + 873);
            }
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 352));
            SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord((SnapFlyoutHost::FlyoutInstanceRecord *)(a1 + 240));
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)(a1 + 208));
          }
          else
          {
            SnapFlyoutTelemetry::SnapFlyout_InstanceFailed<unsigned int &>(a1 + 885);
          }
          winrt::com_ptr<TouchEdgeGripperWindow>::release_ref(a1 + 200);
          v11 = a1 + 152;
        }
        winrt::com_ptr<SnapFlyoutHost>::release_ref(v11);
        winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
        winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
LABEL_34:
        *(_QWORD *)(a1 + 848) = a1 - 96;
        v40 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
                a1 - 96,
                a1 + 704);
        *(_QWORD *)(a1 + 696) = v40;
        *v2 = 0;
        if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,SnapFlyoutHost *,HWND__ *,enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType,unsigned int,enum winrt::WindowsUdk::UI::Shell::InputDeviceKind,HMONITOR__ *,tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>,enum SnapFlyoutHost::ShowFlags>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend_awaiter::await_suspend(v40) )
        {
LABEL_35:
          *(_QWORD *)(a1 + 848) = a1 - 96;
          winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>(a1 - 96);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>((void **)(a1 + 905));
          if ( *(_WORD *)(a1 + 10) )
            operator delete((void *)(a1 - 96));
        }
      }
      return;
    case 7:
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 40);
      winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
      goto LABEL_35;
    case 8:
      goto LABEL_18;
    case 9:
      winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>::~TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::hstring>((winrt::Windows::Foundation::IUnknown *)(a1 + 104));
      winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a1 + 16));
      goto LABEL_35;
    default:
      __debugbreak();
      return;
  }
}
