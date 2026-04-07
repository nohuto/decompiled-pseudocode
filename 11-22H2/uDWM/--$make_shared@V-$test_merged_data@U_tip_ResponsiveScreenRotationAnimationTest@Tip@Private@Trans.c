/*
 * XREFs of ??$make_shared@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x180057504
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x1800172A0 (-ensure_data@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@XZ @ 0x180057564 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_shared<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>,>(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         216LL);
  if ( v2 )
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>>(v2);
  else
    v3 = 0LL;
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
