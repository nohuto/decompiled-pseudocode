/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068
 * Callers:
 *     ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC (-Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA.c)
 *     ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0 (-ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790 (-PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x18005F000 (--$make_shared@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@detai.c)
 */

_QWORD *__fastcall tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(_QWORD *a1)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v3 = (__int64 *)std::make_shared<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>,>(v7);
    v4 = *v3;
    v5 = v3[1];
    *v3 = 0LL;
    v3[1] = 0LL;
    *a1 = v4;
    v6 = (std::_Ref_count_base *)a1[1];
    a1[1] = v5;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  return a1;
}
