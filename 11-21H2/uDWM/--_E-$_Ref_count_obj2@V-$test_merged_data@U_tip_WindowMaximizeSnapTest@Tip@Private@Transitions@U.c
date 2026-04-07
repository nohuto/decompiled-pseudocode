/*
 * XREFs of ??_E?$_Ref_count_obj2@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@UEAAPEAXI@Z @ 0x180013BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>>::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
