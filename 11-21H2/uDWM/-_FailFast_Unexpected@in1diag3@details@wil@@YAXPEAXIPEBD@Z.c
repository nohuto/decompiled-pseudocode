/*
 * XREFs of ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180094560
 * Callers:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000F61C (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x180013A80 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wi.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180054F80 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?_lambda_invoker_cdecl_@_lambda_6fe7f41459601891023985285f8158ba_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18005F630 (-_lambda_invoker_cdecl_@_lambda_6fe7f41459601891023985285f8158ba_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B7A70 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8778 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C6798 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF060 (-_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@C.c)
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 *     ?UpdateFloatProperties@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F76E0 (-UpdateFloatProperties@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Tra.c)
 *     ?UpdateScene@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F7710 (-UpdateScene@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?UpdateScene@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F85D0 (-UpdateScene@-$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180092ABC (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_Unexpected(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147418113;
  wil::details::ReportFailure_Hr<3>((__int64)this, a2, a3, (__int64)a4, v4, retaddr, v5);
}
