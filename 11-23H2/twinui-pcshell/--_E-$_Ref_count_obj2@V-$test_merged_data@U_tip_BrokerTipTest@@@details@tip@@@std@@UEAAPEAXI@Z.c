/*
 * XREFs of ??_E?$_Ref_count_obj2@V?$test_merged_data@U_tip_BrokerTipTest@@@details@tip@@@std@@UEAAPEAXI@Z @ 0x180417A00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_BrokerTipTest>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
