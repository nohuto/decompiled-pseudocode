/*
 * XREFs of ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208
 * Callers:
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 *     ?OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F44A0 (-OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790 (-PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4C08 (-SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm.c)
 *     ?StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4CE8 (-StartFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068 (-ensure_data@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV-$s.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F6358 (-log_message@-$test_common_data@$0A@@details@tip@@QEAAXV-$basic_string_view@DU-$char_traits@D@st.c)
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800F6F04 (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 */

__int64 __fastcall tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  void *Src; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v1 = *tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(a1);
  v2 = (_QWORD *)cereal::util::wstring_to_string(&Src);
  v3 = v2[2];
  if ( v2[3] >= 0x10uLL )
    v2 = (_QWORD *)*v2;
  v5[0] = v2;
  v5[1] = v3;
  result = tip::details::test_common_data<0>::log_message(v1 + 8, v5);
  if ( v7 >= 0x10 )
    return std::_Deallocate<16,0>(Src, v7 + 1);
  return result;
}
