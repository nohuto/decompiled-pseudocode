/*
 * XREFs of ??$make_shared@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@0@XZ @ 0x18005F000
 * Callers:
 *     ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068 (-ensure_data@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV-$s.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@XZ @ 0x18005F060 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_shared<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>,>(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         184LL);
  v3 = 0LL;
  if ( v2 )
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(v2);
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
