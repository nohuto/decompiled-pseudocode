/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@EEAAXXZ @ 0x1801817B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1_tip_AppPrelaunch@@QEAA@XZ @ 0x1801C47C0 (--1_tip_AppPrelaunch@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_AppPrelaunch>>::_Destroy(__int64 a1)
{
  _tip_AppPrelaunch::~_tip_AppPrelaunch((_tip_AppPrelaunch *)(a1 + 160));
  return tip::details::test_common_data<1>::~test_common_data<1>(a1 + 24);
}
