/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x18003F594
 * Callers:
 *     ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800119AC (-CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800121F8 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180012304 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x18003F290 (-PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x18003ED94 (--$make_shared@V-$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@d.c)
 */

_QWORD *__fastcall tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(_QWORD *a1)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  if ( !*a1 )
  {
    v3 = std::make_shared<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>,>(&v7);
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
