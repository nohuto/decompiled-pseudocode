/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1801BEEA8 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180035E88 (-TryGetVisibleFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyou.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180044190 (-await_ready@-$notify_awaiter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Sto.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801732E4 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180178CCC (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXXZ @ 0x18017FF44 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXX.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??1?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ @ 0x1801C4700 (--1-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEAA@XZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18022B998 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@UIAsyncAction@Foundati.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUHWND__@@W4ShowFlags@3@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022BDF0 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@PEAUH.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18032C7F0 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     ?await_ready@?$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180350F8C (-await_ready@-$notify_awaiter@AEBUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180464774 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x180598314 (-release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 *     ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@P8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x1805AD690 (--$-0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@.c)
 *     ??$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z @ 0x1805AD858 (--$SnapFlyout_InstanceFailed@AEAI@SnapFlyoutTelemetry@@SAXAEAI@Z.c)
 *     ??$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1805AD94C (--$SnapFlyout_ShutdownPrevious@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEBA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@1@XZ @ 0x1805ADB78 (--$as@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@-$com_ptr@USnapFlyoutInst.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IPEAUHWND__@@W4ShowFlags@3@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@experimental@std@@@experimental@std@@@Z @ 0x1805ADBF0 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVSnapFlyoutHost@@IP.c)
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1805AE218 (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 *     ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x1805AE26C (--$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA-AV-$shared_ptr@UFlyoutInstance.c)
 *     ??0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1805AE5FC (--0FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@AEBV-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::__parameters_ @ 0x1805AE774 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync_--_25_--_parameters_--__parameters_.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE870 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE8D0 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE8D0.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAA@XZ @ 0x1805AE930 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE930.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE990 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE990.c)
 *     ??1?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1805AE9F0 (--1-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AE9F0.c)
 *     ??1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ @ 0x1805AEB10 (--1FlyoutInstanceRecord@SnapFlyoutHost@@QEAA@XZ.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805AECB0 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805AED08 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AED08.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805AED60 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AED60.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805AEDB8 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AEDB8.c)
 *     ??4?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1805AEE10 (--4-$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@_ea_1805AEE10.c)
 *     ??4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1805AEE68 (--4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??C?$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEBAPEAU_tip_SnapFlyoutShowTest@@XZ @ 0x1805AEE88 (--C-$test_data_control@U_tip_SnapFlyoutShowTest@@@tip@@QEBAPEAU_tip_SnapFlyoutShowTest@@XZ.c)
 *     ??C?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SnapFlyoutShowTest@@@1@XZ @ 0x1805AEEA4 (--C-$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SnapFlyoutShowTes.c)
 *     ?DismissRequested@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805AF28C (-DismissRequested@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?InstanceReady@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BGI@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805AF3CC (-InstanceReady@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?InstanceShutdown@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805AF444 (-InstanceShutdown@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyou.c)
 *     ?PointerEntered@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BII@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B00A4 (-PointerEntered@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutI.c)
 *     ?PointerExited@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BJI@AA@23@Uauto_revoke_t@3@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@3@@Z @ 0x1805B0120 (-PointerExited@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutIn.c)
 *     ?SnapFlyout_CreateSnapFlyoutInstanceAsync@SnapFlyoutTelemetry@@SAXXZ @ 0x1805B068C (-SnapFlyout_CreateSnapFlyoutInstanceAsync@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@@impl@winrt@@QEAA_NXZ @ 0x1805B17F8 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_foreground@winrt@@YA@AEBUDispatcherQueue@Sy.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1805B1DE4 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA-AU-$com_ptr@VSnapFlyoutHost@@@2@XZ.c)
 *     ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1805B2014 (-get_weak@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-AU-.c)
 *     ?push_back@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@2@@Z @ 0x1805B2034 (-push_back@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$sh.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805BA8B4 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=20 #try_helpers=2
void __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rcx
  __int64 **v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  bool ready; // al
  __int64 v9; // r12
  wil::details ***v10; // rbx
  __int64 v11; // rcx
  void *v12; // rdx
  const char *v13; // r9
  _DWORD *v14; // rax
  wil::details **v15; // rcx
  wil::details *v16; // rcx
  wil::details **v17; // rax
  wil::details *v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // r12
  __int64 *v23; // rdi
  __int64 v24; // rcx
  _DWORD *v25; // rax
  unsigned int *v26; // r13
  int v27; // ecx
  __int64 v28; // rax
  _BYTE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **v32; // rbx
  _DWORD *v33; // rax
  winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *v34; // rcx
  std::_Ref_count_base *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  bool v40; // bl
  const struct IInspectable *v41; // r10
  HWND v42; // r8
  unsigned int v43; // edx
  bool v44; // al
  __int64 v45; // rcx
  __int64 weak; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 *v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  std::_Ref_count_base *v68; // rcx
  __int16 v69; // ax
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v2 = a1;
  if ( (unsigned __int16)(*((_WORD *)a1 + 4) + 1) <= 0xAu )
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_34;
      case 0:
      case 1:
        break;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_CreateSnapFlyoutInstanceAsync();
        *((_QWORD *)a1 + 158) = a1 + 1;
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(
          *(_QWORD *)(a1 + 2593),
          a1 + 16);
        a1[24] = 0;
        *((_QWORD *)a1 + 4) = a1 + 24;
        if ( winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::await_ready() )
          goto LABEL_6;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__UIAsyncAction_Foundation_Windows_2__experimental_std___experimental_std___Z(
          v3,
          a1);
        return;
      case 4:
LABEL_6:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAAXXZ();
        *((_QWORD *)a1 + 12) = 0LL;
        v4 = (__int64 **)(*((_QWORD *)a1 + 158) + 2592LL);
        *((_QWORD *)a1 + 160) = v4;
        v5 = *v4;
        *((_QWORD *)a1 + 162) = *v4;
        v5 += 9;
        *((_QWORD *)a1 + 164) = v5;
        v6 = *v5;
        *((_QWORD *)a1 + 166) = v6;
        *((_QWORD *)a1 + 42) = v6;
        v7 = winrt::resume_on_signal((__int64)(a1 + 40), v6, 0LL);
        *((_QWORD *)a1 + 128) = v7;
        *((_QWORD *)a1 + 13) = v7;
        ready = _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(a1 + 104));
        a1[976] = ready;
        if ( ready )
          goto LABEL_9;
        *((_WORD *)a1 + 4) = 6;
        ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z((PVOID *)a1 + 13);
        return;
      case 5:
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
        goto LABEL_34;
      case 6:
LABEL_9:
        _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64 *)a1 + 13);
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(a1 + 40));
        *((_QWORD *)a1 + 14) = 0LL;
        winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 120);
        if ( !*((_QWORD *)a1 + 15) )
          goto LABEL_15;
        v9 = *((_QWORD *)a1 + 158);
        v10 = (wil::details ***)(v9 + 2592);
        *((_QWORD *)a1 + 168) = v9 + 2592;
        v11 = *(_QWORD *)(v9 + 2592);
        *((_QWORD *)a1 + 170) = v11;
        v11 += 144LL;
        *((_QWORD *)a1 + 172) = v11;
        *((_QWORD *)a1 + 44) = v11;
        wil::srwlock::lock_exclusive(v11, (__int64)(a1 + 128));
        *((_QWORD *)a1 + 174) = v9 + 2592;
        v14 = *(_DWORD **)(v9 + 2592);
        *((_QWORD *)a1 + 176) = v14;
        v14 += 34;
        *((_QWORD *)a1 + 178) = v14;
        LODWORD(v14) = *v14;
        *((_DWORD *)a1 + 360) = (_DWORD)v14;
        if ( !(_DWORD)v14 )
        {
          *((_QWORD *)a1 + 294) = v10;
          v15 = *v10;
          *((_QWORD *)a1 + 296) = *v10;
          v15 += 9;
          *((_QWORD *)a1 + 298) = v15;
          *((_QWORD *)a1 + 146) = v15;
          v16 = *v15;
          *((_QWORD *)a1 + 182) = v16;
          wil::details::ResetEvent(v16, v12);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 16);
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 120);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 112));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
          goto LABEL_33;
        }
        *((_QWORD *)a1 + 300) = v10;
        v17 = *v10;
        *((_QWORD *)a1 + 302) = *v10;
        v17 += 13;
        *((_QWORD *)a1 + 304) = v17;
        v18 = *v17;
        *((_QWORD *)a1 + 306) = v18;
        a1[368] = v18 == 0LL;
        *((_QWORD *)a1 + 147) = retaddr;
        if ( a1[368] )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x1E3,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
            v13);
        v19 = (__int64 *)(v9 + 2592);
        *((_QWORD *)a1 + 184) = v19;
        v20 = *v19;
        *((_QWORD *)a1 + 186) = *v19;
        *((_QWORD *)a1 + 188) = v20 + 104;
        winrt::Windows::System::DispatcherQueue::operator=(a1 + 112);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 16);
LABEL_15:
        winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 120);
        *((_QWORD *)a1 + 17) = a1 + 112;
        *((_DWORD *)a1 + 36) = 0;
        a1[148] = 0;
        *((_QWORD *)a1 + 19) = a1 + 136;
        v21 = winrt::impl::notify_awaiter<winrt::apartment_context const &>::await_ready(a1 + 152);
        a1[560] = v21;
        if ( !v21 )
        {
          *((_WORD *)a1 + 4) = 8;
          if ( (unsigned __int8)___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__IPEAUHWND____W4ShowFlags_3_V__tip_test_U_tip_SnapFlyoutShowTest___tip___experimental_std_____notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_NU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVSnapFlyoutHost__IPEAUHWND____W4ShowFlags_3_V__tip_test_U_tip_SnapFlyoutShowTest___tip___experimental_std___experimental_std___Z(
                                  a1 + 152,
                                  a1) )
            return;
        }
LABEL_19:
        _await_resume___notify_awaiter_Uawaitable__1__resume_foreground_winrt__YA_AEBUDispatcherQueue_System_Windows_3_W4DispatcherQueuePriority_563__Z__impl_winrt__QEAA_NXZ(a1 + 152);
        winrt::weak_ref<SnapFlyoutHost>::get(a1 + 16, a1 + 160);
        if ( !*((_QWORD *)a1 + 20) )
          goto LABEL_32;
        v22 = *((_QWORD *)a1 + 158);
        v23 = (__int64 *)(v22 + 2592);
        *((_QWORD *)a1 + 190) = v22 + 2592;
        v24 = *(_QWORD *)(v22 + 2592);
        *((_QWORD *)a1 + 192) = v24;
        v24 += 144LL;
        *((_QWORD *)a1 + 194) = v24;
        *((_QWORD *)a1 + 74) = v24;
        wil::srwlock::lock_exclusive(v24, (__int64)(a1 + 168));
        *((_QWORD *)a1 + 196) = v22 + 2592;
        v25 = *(_DWORD **)(v22 + 2592);
        *((_QWORD *)a1 + 198) = v25;
        v25 += 12;
        *((_QWORD *)a1 + 200) = v25;
        *((_QWORD *)a1 + 202) = a1 + 9;
        v26 = (unsigned int *)(a1 + 2601);
        *((_QWORD *)a1 + 204) = a1 + 2601;
        v27 = *(_DWORD *)(a1 + 2601);
        *((_DWORD *)a1 + 412) = v27;
        LODWORD(v25) = *v25;
        *((_DWORD *)a1 + 416) = (_DWORD)v25;
        if ( v27 == (_DWORD)v25 )
        {
          *((_QWORD *)a1 + 216) = v23;
          v30 = *v23;
          *((_QWORD *)a1 + 218) = *v23;
          *((_QWORD *)a1 + 78) = v30;
          SnapFlyoutHost::TryGetVisibleFlyoutInstance(v30, (_QWORD *)a1 + 24);
          v31 = *((_QWORD *)a1 + 24);
          if ( v31 )
          {
            v32 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v31 + 16);
            *((_QWORD *)a1 + 220) = v32;
            v33 = (_DWORD *)((char *)*v32 + 280);
            *((_QWORD *)a1 + 224) = v33;
            LODWORD(v33) = *v33;
            *((_DWORD *)a1 + 452) = (_DWORD)v33;
            *((_DWORD *)a1 + 52) = (_DWORD)v33;
            SnapFlyoutTelemetry::SnapFlyout_ShutdownPrevious<unsigned int>();
            v34 = *v32;
            *((_QWORD *)a1 + 222) = *v32;
            winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(v34);
          }
          v35 = (std::_Ref_count_base *)*((_QWORD *)a1 + 25);
          if ( v35 )
            std::_Ref_count_base::_Decref(v35);
          *((_QWORD *)a1 + 228) = a1 + 25;
          *((_QWORD *)a1 + 230) = a1 + 2617;
          v36 = *(_DWORD *)(a1 + 2617);
          *((_DWORD *)a1 + 464) = v36;
          v37 = v36 & 1;
          *((_DWORD *)a1 + 468) = v37;
          a1[1152] = v37;
          *((_QWORD *)a1 + 236) = a1 + 2617;
          v38 = *(_DWORD *)(a1 + 2617);
          *((_DWORD *)a1 + 476) = v38;
          v39 = v38 & 2;
          *((_DWORD *)a1 + 480) = v39;
          v40 = v39 != 0;
          a1[2496] = v39 != 0;
          a1[1072] = v39 != 0;
          winrt::make_self<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,>(a1 + 216);
          *((_QWORD *)a1 + 242) = v23;
          v41 = (const struct IInspectable *)*v23;
          *((_QWORD *)a1 + 244) = *v23;
          v41 += 12;
          *((_QWORD *)a1 + 246) = v41;
          *((_QWORD *)a1 + 84) = v41;
          *((_QWORD *)a1 + 248) = a1 + 17;
          *((_QWORD *)a1 + 250) = a1 + 2609;
          v42 = *(HWND *)(a1 + 2609);
          *((_QWORD *)a1 + 252) = v42;
          *((_QWORD *)a1 + 82) = v42;
          *((_QWORD *)a1 + 314) = v26;
          v43 = *v26;
          *((_DWORD *)a1 + 632) = *v26;
          *((_DWORD *)a1 + 160) = v43;
          v44 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Initialize(
                  *((winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)a1 + 27),
                  v43,
                  v42,
                  a1[1872],
                  v40,
                  v41);
          a1[576] = v44;
          if ( v44 )
          {
            *((_QWORD *)a1 + 210) = a1 + 33;
            *((_QWORD *)a1 + 254) = a1 + 2625;
            SnapFlyoutHost::FlyoutInstanceRecord::FlyoutInstanceRecord(a1 + 224);
            winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::as<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(
              a1 + 216,
              a1 + 376);
            *((_QWORD *)a1 + 256) = v23;
            v45 = *v23;
            *((_QWORD *)a1 + 258) = *v23;
            *((_QWORD *)a1 + 86) = v45;
            weak = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v45, a1 + 408);
            *((_QWORD *)a1 + 68) = weak;
            *((_QWORD *)a1 + 49) = SnapFlyoutHost::OnFlyoutInstanceReady;
            *((_DWORD *)a1 + 100) = 0;
            *((_OWORD *)a1 + 54) = *(_OWORD *)(a1 + 392);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 384,
              weak);
            v48 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceReady(
                    a1 + 376,
                    a1 + 416,
                    v47,
                    a1 + 384);
            *((_QWORD *)a1 + 132) = v48;
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 248,
              v48);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BGI_AA_impl_winrt__QEAA_XZ(a1 + 416);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 384));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 51);
            *((_QWORD *)a1 + 260) = v23;
            v49 = *v23;
            *((_QWORD *)a1 + 262) = *v23;
            *((_QWORD *)a1 + 88) = v49;
            v50 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v49, a1 + 456);
            *((_QWORD *)a1 + 148) = v50;
            *((_QWORD *)a1 + 55) = SnapFlyoutHost::OnFlyoutInstanceShutdown;
            *((_DWORD *)a1 + 112) = 0;
            *((_OWORD *)a1 + 55) = *(_OWORD *)(a1 + 440);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 432,
              v50);
            v52 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::InstanceShutdown(
                    a1 + 376,
                    a1 + 464,
                    v51,
                    a1 + 432);
            *((_QWORD *)a1 + 136) = v52;
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 264,
              v52);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(a1 + 464);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 432));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 57);
            v53 = (__int64 *)(v22 + 2592);
            *((_QWORD *)a1 + 264) = v53;
            v54 = *v53;
            *((_QWORD *)a1 + 266) = *v53;
            *((_QWORD *)a1 + 90) = v54;
            v55 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v54, a1 + 504);
            *((_QWORD *)a1 + 150) = v55;
            *((_QWORD *)a1 + 61) = SnapFlyoutHost::OnFlyoutInstancePointerEntered;
            *((_DWORD *)a1 + 124) = 0;
            *((_OWORD *)a1 + 56) = *(_OWORD *)(a1 + 488);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 480,
              v55);
            v57 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerEntered(
                    a1 + 376,
                    a1 + 512,
                    v56,
                    a1 + 480);
            *((_QWORD *)a1 + 138) = v57;
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 280,
              v57);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BII_AA_impl_winrt__QEAA_XZ(a1 + 512);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 480));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 63);
            *((_QWORD *)a1 + 268) = v53;
            v58 = *v53;
            *((_QWORD *)a1 + 270) = *v53;
            *((_QWORD *)a1 + 92) = v58;
            v59 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v58, a1 + 768);
            *((_QWORD *)a1 + 152) = v59;
            *((_QWORD *)a1 + 94) = SnapFlyoutHost::OnFlyoutInstancePointerExited;
            *((_DWORD *)a1 + 190) = 0;
            *((_OWORD *)a1 + 57) = *((_OWORD *)a1 + 47);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 528,
              v59);
            v61 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::PointerExited(
                    a1 + 376,
                    a1 + 776,
                    v60,
                    a1 + 528);
            *((_QWORD *)a1 + 140) = v61;
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 296,
              v61);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BJI_AA_impl_winrt__QEAA_XZ(a1 + 776);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 528));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 96);
            *((_QWORD *)a1 + 272) = v53;
            v62 = *v53;
            *((_QWORD *)a1 + 274) = *v53;
            *((_QWORD *)a1 + 118) = v62;
            v63 = winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(v62, a1 + 816);
            *((_QWORD *)a1 + 154) = v63;
            *((_QWORD *)a1 + 100) = SnapFlyoutHost::OnFlyoutInstanceDismissRequested;
            *((_DWORD *)a1 + 202) = 0;
            *((_OWORD *)a1 + 58) = *((_OWORD *)a1 + 50);
            winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
              a1 + 792,
              v63);
            v65 = winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::DismissRequested(
                    a1 + 376,
                    a1 + 824,
                    v64,
                    a1 + 792);
            *((_QWORD *)a1 + 142) = v65;
            __4__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
              a1 + 312,
              v65);
            __1__event_revoker_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt___MP8type___abi_UISnapFlyoutInstance_SnapComponent_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ(a1 + 824);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 792));
            winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 102);
            winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
              a1 + 240,
              a1 + 216);
            *((_QWORD *)a1 + 276) = v53;
            v66 = *v53;
            *((_QWORD *)a1 + 278) = *v53;
            v66 += 24LL;
            *((_QWORD *)a1 + 280) = v66;
            *((_QWORD *)a1 + 120) = v66;
            v67 = std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
                    a1 + 840,
                    a1 + 224);
            *((_QWORD *)a1 + 156) = v67;
            std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::push_back(v66, v67);
            v68 = (std::_Ref_count_base *)*((_QWORD *)a1 + 106);
            if ( v68 )
              std::_Ref_count_base::_Decref(v68);
            winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 376));
            SnapFlyoutHost::FlyoutInstanceRecord::~FlyoutInstanceRecord((SnapFlyoutHost::FlyoutInstanceRecord *)(a1 + 224));
          }
          else
          {
            *((_QWORD *)a1 + 318) = v26;
            SnapFlyoutTelemetry::SnapFlyout_InstanceFailed<unsigned int &>(a1 + 2601);
          }
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 216);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 21);
LABEL_32:
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 160);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 112));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
        }
        else
        {
          *((_QWORD *)a1 + 210) = a1 + 33;
          *((_QWORD *)a1 + 308) = a1 + 2625;
          *((_QWORD *)a1 + 76) = a1 + 2625;
          v28 = tip::tip_test<_tip_SnapFlyoutShowTest>::operator->(a1 + 2625, a1 + 176);
          *((_QWORD *)a1 + 130) = v28;
          v29 = (_BYTE *)tip::test_data_control<_tip_SnapFlyoutShowTest>::operator->(v28);
          *((_QWORD *)a1 + 212) = v29;
          v29 += 9;
          *((_QWORD *)a1 + 214) = v29;
          *v29 = 1;
          tip::test_data_control<_tip_SnapFlyoutShowTest>::~test_data_control<_tip_SnapFlyoutShowTest>(a1 + 176);
          *((_QWORD *)a1 + 310) = a1 + 2625;
          tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete((__int64 *)(a1 + 2625));
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)a1 + 21);
          winrt::com_ptr<SnapFlyoutHost>::release_ref(a1 + 160);
          winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 112));
          winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
        }
LABEL_33:
        std::experimental::coroutine_traits<winrt::fire_and_forget,SnapFlyoutHost *,HWND__ *,enum SnapFlyoutHost::ShowFlags>::promise_type::final_suspend(
          a1,
          a1 + 856);
        v2 = a1;
LABEL_34:
        *((_QWORD *)a1 + 158) = a1 + 1;
        *((_QWORD *)a1 + 282) = a1 + 2593;
        SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::__parameters_(a1 + 2593);
        *((_QWORD *)a1 + 284) = a1 + 10;
        v69 = *((_WORD *)a1 + 5);
        *((_WORD *)a1 + 1144) = v69;
        if ( v69 )
        {
          *((_QWORD *)a1 + 288) = 2641LL;
          *((_QWORD *)a1 + 126) = 2641LL;
          *((_QWORD *)v2 + 124) = a1;
          *((_QWORD *)a1 + 322) = a1 + 1;
          *((_QWORD *)a1 + 320) = a1 + 10;
          operator delete(a1);
        }
        return;
      case 7:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(a1 + 40));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
        goto LABEL_34;
      case 8:
        goto LABEL_19;
      case 9:
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 112));
        winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)a1 + 2);
        goto LABEL_34;
    }
  }
  __debugbreak();
}
