/*
 * XREFs of ??C?$tip_test@U_tip_AltTabShowTest@@@tip@@QEAA?AV?$test_data_control@U_tip_AltTabShowTest@@@1@XZ @ 0x1805F9A08
 * Callers:
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_AltTabShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AltTabShowTest@@@details@tip@@@std@@XZ @ 0x1805FDD54 (-ensure_data@-$tip_test@U_tip_AltTabShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_t.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_AltTabShowTest>::operator->(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = (_QWORD *)tip::tip_test<_tip_AltTabShowTest>::ensure_data();
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    v3);
  tip::details::test_common_data<0>::begin_update(*a2 + 8LL);
  return a2;
}
