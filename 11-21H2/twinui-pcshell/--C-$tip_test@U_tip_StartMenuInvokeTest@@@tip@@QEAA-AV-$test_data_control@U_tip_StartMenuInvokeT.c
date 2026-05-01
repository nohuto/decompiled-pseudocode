/*
 * XREFs of ??C?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@QEAA?AV?$test_data_control@U_tip_StartMenuInvokeTest@@@1@XZ @ 0x1804500E8
 * Callers:
 *     _lambda_751c3952807d6b9c6862705cee6a52fd_::operator() @ 0x1801AD3C0 (_lambda_751c3952807d6b9c6862705cee6a52fd_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_StartMenuInvokeTest@@@details@tip@@@std@@XZ @ 0x18004862C (-ensure_data@-$tip_test@U_tip_StartMenuInvokeTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_StartMenuInvokeTest>::operator->(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax

  v3 = tip::tip_test<_tip_StartMenuInvokeTest>::ensure_data(a1);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    a2,
    v3);
  tip::details::test_common_data<1>::begin_update(*a2 + 8LL);
  return a2;
}
